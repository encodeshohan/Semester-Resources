import java.lang.*;

public class VariableTypeDemo
{
	private int i1;
	private static int i2;
	private String s;
	
	public void printValues()
	{
		System.out.println("i1: "+i1);
		System.out.println("i2: "+i2);
		System.out.println("s: "+s);
	}
	public static void main(String args[])
	{
		VariableTypeDemo vd1 = new VariableTypeDemo();
		vd1.printValues();
		
		vd1.i1 = 10;
		vd1.i2 = 20;
		vd1.s = "First";
		
		vd1.printValues();
		
		VariableTypeDemo vd2 = new VariableTypeDemo();
		vd2.printValues();
		
		vd2.i1 = 30;
		vd2.i2 = 40;
		vd2.s = "Second";
		System.out.println("----------------");
		vd1.printValues();
		vd2.printValues();
		
		VariableTypeDemo vd3 = new VariableTypeDemo();
		
		vd3.s = vd1.s + vd2.s;
		System.out.println(vd3.s);
		vd3.s = vd1.i1 + vd1.s;
		System.out.println(vd3.s);
		vd3.s = vd2.s + vd2.i1;
		System.out.println(vd3.s);
		
		System.out.println("-----------------");
		
		vd1.printValues();
		vd2.printValues();
		vd3.printValues();
		
		VariableTypeDemo.i2 = 100;
		
		System.out.println("-----------------");
		
		vd1.printValues();
		vd2.printValues();
		vd3.printValues();
				
	}
}