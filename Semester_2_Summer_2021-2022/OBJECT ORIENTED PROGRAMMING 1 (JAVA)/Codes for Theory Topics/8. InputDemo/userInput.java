import java.util.Scanner;
public class userInput{
	public static void main(String args[]){
		
		String name;
		int age;
		
		Scanner strSc = new Scanner(System.in);
		Scanner numSc = new Scanner(System.in);
		
		System.out.print("Age:");
		age = numSc.nextInt();
		
		System.out.print("Name:");
		name = strSc.nextLine();

		
		System.out.println(name);
		System.out.println(age);
		
	}
	
}