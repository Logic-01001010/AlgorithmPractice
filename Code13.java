public class Code13{

    public static void main(String args[]){
        int [] data = new int[] { 1, 2, 3, 4, 5 };
        int result = sum(data.length, data);
        
        System.out.println(result);

    }

    public static int sum(int n, int [] data){
        
        if( n <= 0 )
            return 0;
        else
            return data[n-1] + sum( n-1, data );
    }

}