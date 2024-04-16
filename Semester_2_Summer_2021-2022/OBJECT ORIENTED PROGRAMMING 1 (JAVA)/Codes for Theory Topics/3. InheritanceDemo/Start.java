import java.lang.*;

public class Start
{
	public static void main(String args[])
	{
	
	
		Account acc = new Account();
		acc.showDetails();		
		
		Account acc1 = new Account(1111,"RM",500);
		acc1.showDetails();
		
		Account acc2 = new Account(2222);
		acc2.showDetails();
	
		FixedAccount fa = new FixedAccount();
		fa.showDetails();
		
		FixedAccount fa1 = new FixedAccount(4444,"Karim",1000,5);
		fa1.showDetails();
	
	
	
	/*
	
		Account acc = new Account(1111,"RM",500);
		acc.showDetails();
		
		Account acc1 = new Account(2222);
		acc1.showDetails();
		
		Account acc2 = new Account();
		acc2.showDetails();
		
		System.out.println("===========Fixed Account========");
		
		FixedAccount fa = new FixedAccount(3333,"MR",1000,5);
		fa.showInfo();
		
		FixedAccount fa1 = new FixedAccount();
		fa1.showInfo();
	*/
		
	}
}