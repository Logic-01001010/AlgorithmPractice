public class Code12{

    public static void main(String args[]){
        printBinary(18);
    }

    public static void printBinary(int n){
        if( n < 2 )
            System.out.print(n);
        else{
            printBinary( n / 2 );
            System.out.print( n % 2 );
        }
            

    }

}