public class Code07{

    public static void main(String args[]){
        double result = gcd(6, 12);
        System.out.println(result);
    }

    public static double gcd(int m, int n){
        if( m < n ){
            int tmp = m; m = n; n = tmp; // swap m and n
        }
        if( m % n == 0){
            return n;
        }
        else
            return gcd(n, m%n);

    }

}