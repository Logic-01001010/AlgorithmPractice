public class Code19 {
    public static void main(String args[]){
        int [] arr = {1, 2, 3, 4, 5 };
        int result = findMax( arr, 0, arr.length-1 );

        System.out.println(result);

    }   

    public static int findMax(int [] data, int begin, int end){
        
        if(begin == end)
            return data[begin];
        else{
            int middle = (begin + end) / 2;
            int max1 = findMax(data, begin, middle);
            int max2 = findMax(data, middle+1, end);
            return Math.max(max1, max2);
        }
        
    }

}
