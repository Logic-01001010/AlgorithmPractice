public class Code11{

    public static void main(String args[]){
        printCharsReverse("abcdefg");
    }

    public static void printCharsReverse(String str){
        if( str.length() == 0 )
            return ;
        else{
            printCharsReverse( str.substring(1) );
            System.out.print(str.charAt(0));
        }
            

    }

}