public class Code09{

    public static void main(String args[]){
        int result = length("ace");
        System.out.println(result);
    }

    public static int length(String str){
        if( str.equals("") )
            return 0;
        else
            return 1 + length( str.substring(1) );

    }

}