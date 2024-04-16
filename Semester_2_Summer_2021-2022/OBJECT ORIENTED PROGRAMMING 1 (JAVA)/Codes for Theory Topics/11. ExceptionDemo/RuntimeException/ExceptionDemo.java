import java.lang.*;
import java.util.*;

public class ExceptionDemo
{
	private int x, y;
	private String s;
	public static void main(String args[])
	{
		System.out.println("Start");
		ExceptionDemo ed = new ExceptionDemo();
		Scanner sc = new Scanner(System.in);
		
		//InputMismatchException
		//ArithmeticException
		boolean flag = false;
		do{
			sc = new Scanner(System.in);	
			try{
				System.out.print("Please Enter an Integer: ");
				ed.x = sc.nextInt();
				System.out.print("Please Enter an Integer: ");
				ed.y = sc.nextInt();
				if(ed.y == 0){throw new Exception("Unknown Error Occured");}
				System.out.println("Division Result: " + ed.x/ed.y);
				flag=true;
			}
			catch(InputMismatchException e){
			System.out.println("InputMismatchException Handled");				
			}
			catch(ArithmeticException e){
			System.out.println("ArithmeticException-Cannot divide by Zero");				
			}
			catch(Exception e){
				//e.printStackTrace();
				System.out.println(e.getMessage());
			}
			finally{
				System.out.println("Finally We are Done With Exception");
			}
					
			System.out.println("End");
		
		}while(!flag);
 	
		//NullPointerException
	
		try{
			System.out.println(ed.s.length());
			System.out.println(ed.s.isEmpty());
		}
		catch(NullPointerException e){
			System.out.println("Your string is Invalid");
		}
		
		
		//NumberFormatException
		try{
			System.out.print("Please Enter a String: ");
			ed.s = sc.next();
			int i = Integer.parseInt(ed.s);
			System.out.println(i);
		}
		catch(NumberFormatException e){
			System.out.println("Your have Entered Invalid Number");
		}
 		
				
		//ArrayIndexOutOfBoundsException
		
		int a[] = new int[]{10,20,30};
		
		for(int i=0; i<3; i++)
		{
			System.out.println(a[i]);
		}
		
		
		
		System.out.println("End");
		
	}
}