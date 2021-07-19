public class Code14 {
    public static void main(String args[]){
        int [] arr = {1, 2, 3, 4, 5 };
        int result = search( arr, arr.length, 3 );

        System.out.println(result);

    }   

    public static int search(int [] data, int n, int target){
        for(int i=0; i<n; i++)
            if( data[i] == target )
                return i;
        return -1;
    }

}
