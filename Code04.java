public class Code04{

    public static void main(String args[]){
        int result = func(4);
        System.out.println(result);
    }

    public static int func(int n){
        if( n <= 0)
            return 1;
        else{
            return n * func(n-1); // 4 * ( 3 * ( 2 * ( 1 * (1) ) ) )
        }
    }

}