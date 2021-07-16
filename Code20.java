public class Code20 {
    public static void main(String args[]){
        String [] arr = {"a", "b", "c", "d", "e"};
        int result = binarySearch( arr, "c", 0, arr.length-1 );

        System.out.println(result);

    }   

    public static int binarySearch(String [] items, String target, int begin, int end){
        
        if(begin > end)
            return -1;
        else{
            int middle = (begin + end) / 2;
            int compResult = target.compareTo(items[middle]);
            if(compResult == 0)
                return middle;
            else if(compResult < 0)
                return binarySearch(items, target, begin, middle-1);
            else
                return binarySearch(items, target, middle+1, end);

        }
        
    }

}
