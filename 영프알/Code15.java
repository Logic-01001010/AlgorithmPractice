public class Code15 {
    public static void main(String args[]){
        int [] arr = {1, 2, 3, 4, 5 };
        int result = search( arr, 0, arr.length-1, 3 );

        System.out.println(result);

    }   

    public static int search(int [] data, int begin, int end, int target){
        
        if(begin > end)
            return -1;
        else if( target == data[begin] )
            return begin;
        else
            return search(data, begin+1, end, target);
        

    }

}
