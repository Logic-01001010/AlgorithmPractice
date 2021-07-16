public class Code18 {
    public static void main(String args[]){
        int [] arr = {1, 2, 3, 4, 5 };
        int result = findMax( arr, 0, arr.length-1 );

        System.out.println(result);

    }   

    public static int findMax(int [] data, int begin, int end){
        
        if(begin == end)
            return data[begin];
        else
            return Math.max( data[begin], findMax(data, begin+1, end) );
        
        
    }

}
