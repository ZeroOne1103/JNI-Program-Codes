//Ques2.java
import java.util.Scanner;

class Ques2 {
    public native int[] randomArr1(int size1);
    public native int[] randomArr2(int size2);
    public native int calcSum(int[] arr1, int[] arr2);

    static {
        System.loadLibrary("CQues2");
    }

    public static void main(String[] args) {
        
        Ques2 rand1 = new Ques2();
	
	try{
        Scanner scanner1 = new Scanner(System.in);
        System.out.printf("=========================================================================");
        System.out.printf("\nPlease input size of the 1st array: ");      
	int[] arr1 = rand1.randomArr1(scanner1.nextInt()); 			
	
	
	Scanner scanner2 = new Scanner(System.in);
        System.out.printf("\n=========================================================================");
        System.out.printf("\nPlease input size of the 2nd array: ");        
        int[] arr2 = rand1.randomArr2(scanner2.nextInt()); 
      
        int sum = rand1.calcSum(arr1,arr2);
        System.out.printf("\n=========================================================================");
        System.out.printf("\nMultiplication of 1st element in both array: %d ", sum);

    }catch(Exception e){
            System.out.print("\nInvalid input! Only Accept Positive Integers!\n");
       }
  }
}