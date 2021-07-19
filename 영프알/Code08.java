public class Code08{

    public static void main(String args[]){
        double result = gcd(6, 12);
        System.out.println(result);
    }

    public static double gcd(int p, int q){
        if( q == 0 )
            return p;
        else
            return gcd(q, p%q);
    }

}