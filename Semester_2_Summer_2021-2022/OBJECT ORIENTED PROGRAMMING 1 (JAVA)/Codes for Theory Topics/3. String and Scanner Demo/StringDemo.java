import java.lang.*;

public class StringDemo
{
	public static void main(String []args)
	{
		int x = (float)6/4;
		
		String s1 = "Java"; // string literal uses common pool
		String s2 = "Java"; // string literal uses common pool
		String s3 = new String("Java");// uses new memory allocation
		String s4 = new String("Java");// uses new memory allocation
		
		System.out.println(s1.length()); // length is 4
		System.out.println(s1.isEmpty());
		System.out.println(s1.charAt(2));
		
		System.out.println(s1.length()+" "+s1.isEmpty()+" "+s1.charAt(3));
		System.out.println(s1.length()+" "+s1.isEmpty()+" "+s1.charAt(2));
		
		
		if(s1 == s2)
		{
			System.out.println("1");
		}
		else
		{
			System.out.println("2");
		}
		
		if(s1.equals(s2))
		{
			System.out.println("3");
		}
		else
		{
			System.out.println("4");
		}
		
		if(s1==s3)
		{
			System.out.println("5");
		}
		else
		{
			System.out.println("6");
		}
		
		if(s1.equals(s3))
		{
			System.out.println("7");
		}
		else
		{
			System.out.println("8");
		}
		
		if(s4==s3)
		{
			System.out.println("9");
		}
		else
		{
			System.out.println("10");
		}
		
		if(s4.equals(s3))
		{
			System.out.println("11");
		}
		else
		{
			System.out.println("12");
		}
		
		String s5 = new String(s1 + s3);
		System.out.println(s5);
		String s6 = s1 + s3;
		System.out.println(s6);
		
		if(s5==s6)
		{
			System.out.println("9");
		}
		else
		{
			System.out.println("10");
		}
		
		if(s5.equals(s6))
		{
			System.out.println("11");
		}
		else
		{
			System.out.println("12");
		}
		//JavaJava
		System.out.println(s5.substring(3,5));
		
		s1 = "Hello";
		s1 = s1.concat(s3);

		
		System.out.println(s1);
		
		String s7 = "wOlvaRIne";
		String s8 = s7.toUpperCase();
		System.out.println(s7);
		System.out.println(s8);
		
		
	}
}