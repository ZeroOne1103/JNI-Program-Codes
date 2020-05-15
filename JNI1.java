import java.util.Scanner;
import java.io.*;

class JNI1{
	public native void calcArea(int a,int b, int c,int d,int e, int f);
	public native void calcCentroid(int a,int b, int c,int d,int e, int f);

	static{
		System.loadLibrary("CJNI1");
	}

	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.println("Please select your programme ( 1/2 )");
		System.out.println("1. Calculate Area of Triangle");
		System.out.println("2. Calculate Centroid of Triangle");
		System.out.print("Your selection : ");
		
		int selectedProg = s.nextInt();
		if(selectedProg == 1 || selectedProg == 2){	

		try{
			

			System.out.print("Please input x1: ");
			int input1 = s.nextInt();
			System.out.print("Please input x2: ");
			int input2 = s.nextInt();
			System.out.print("Please input x3: ");
			int input3 = s.nextInt();
			System.out.print("Please input y1: ");
			int input4 = s.nextInt();
			System.out.print("Please input y2: ");
			int input5 = s.nextInt();
			System.out.print("Please input y3: ");
			int input6 = s.nextInt();


			JNI1 a1 = new JNI1();
			if(selectedProg == 1){
				a1.calcArea(input1,input2,input3,input4,input5,input6);
			}

			else if(selectedProg == 2){
				a1.calcCentroid(input1,input2,input3,input4,input5,input6);
			}

			else{
				System.out.printf("There is no such option");
			}
			
			}catch(Exception e){
				System.out.print("Invalid input");
		
		}
		}else{
			System.out.print("Invalid input");
		}
		
	}
}