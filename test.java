/* IMPORTANT: Multiple classes and nested static classes are supported */
import java.util.*;
/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class test {
    public static void main(String args[] ) throws Exception {
        /* Sample code to perform I/O:
         * Use either of these methods for input

        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name = br.readLine();                // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        //Scanner
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();                 // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        */

        // Write your code here
        Scanner s = new Scanner(System.in);
        int M = s.nextInt();
        int P = s.nextInt();
        int packages[] = new int[P];

        for(int i = 0;i < packages.length; i++){
            packages[i] = s.nextInt();
        }
        // System.out.println("M: "+M);
        // System.out.println("P: "+P);
        // for(int i = 0;i < packages.length; i++){
        //     System.out.println(i+" : "+packages[i]);
        // }

        // 1st test case
        if(M == P){
            Arrays.sort(packages);
            System.out.println(packages[packages.length-1]);
        } else {
            
            int arr1[] = new int[P-1];
            int arr2[] = new int[P-1];
            int diffArr[] = new int[P-1];
            int temp=0;
            for(int i=0;i < P-1;i++){
                temp = temp + packages[i];
                arr1[i] = temp;
               // System.out.println("arr1: "+arr1[i]);
            }
            
            temp = 0;
            for(int i = P-1,j=P-2;i > 0;i--,j--){
                //System.out.println("package: "+i);
                temp = temp + packages[i];
                arr2[j] = temp;
               // System.out.println("arr2: "+arr2[j]);
            }


            for(int i = 0;i<P-1;i++){
                diffArr[i] = Math.abs(arr1[i] - arr2[i]);
                //System.out.println("diff: "+diffArr[i]);
            }

            int x;
            x = smallestIndex(diffArr);

            if(arr1[x] > arr2[x]){
                System.out.println(arr1[x]);
            } else{
                System.out.println(arr2[x]);
            }
        }


    }

    public static int smallestIndex(int[] a){
        int min = a[0];
	       int index=0;

	       for(int i = 0; i < a.length; i++)
	       {
	            if(min > a[i])
	            {
	                min = a[i];
	                index=i;
	            }
            }
            
            return index;
    }
}
