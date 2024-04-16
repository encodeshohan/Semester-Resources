import java.util.Scanner;
class myStatic{
	private static int count=0;
	public static int getCount(){
		return count;
	}
	public static void getMsg(){
		System.out.println("This is myStatic Class");
	}
}
class MyClass {
  public static void main(String[] args) {
	
	System.out.println(myStatic.getCount());
	myStatic.getMsg();
	
	Scanner scNum = new Scanner(System.in);
	Scanner scStr = new Scanner(System.in);
	
	int age;
	double cgpa;
	String name;
	
	age = scNum.nextInt();
	cgpa = scNum.nextDouble();
	
	System.out.println(age);
	System.out.println(cgpa);
	name = scStr.nextLine();
	System.out.println(name);
	System.out.println(scStr.next());
	System.out.println(scStr.next().charAt(0));
	
	/*
	System.out.print("Input your age: ");
	age = scNum.nextInt();
	System.out.println("your age is: "+age);
	
	System.out.print("Input your name: ");
	name = scStr.nextLine();
	System.out.println("your name is: "+name);
	
	System.out.print("Input your CGPA: ");
	cgpa = scNum.nextDouble();
	System.out.println("your CGPA is: "+cgpa);
	
	char c;
	System.out.print("Input a char: ");
	c = scStr.next().charAt(0);
	System.out.println("your char is: "+c);
	*/
  }
}
