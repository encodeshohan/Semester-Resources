import java.lang.*;

public class Account
{
	protected int accountNumber;
	protected String accountHolderName;
	protected double balance;
 
	public Account()
	{	
		System.out.println("Empty Account");
		this.accountNumber=-1;
		this.accountHolderName="No Name Set";
		this.balance=-1;
	}
	public Account(int accountNumber, String accountHolderName, double balance)
	{	this();
		System.out.println("Parameterized Account");
		this.accountNumber = accountNumber;
		this.accountHolderName = accountHolderName;
		this.balance = balance;
		
	}
	
	public Account(int accountNumber)
	{	this();
		System.out.println("Parameterized AccountNumber");
		this.accountNumber = accountNumber;
	}
 /*
	
	public Account(){
		System.out.println("Empty Account");
		this.accountNumber = -1;
		this.accountHolderName = "No Name Set";
		this.balance = -1;
	}
	
	public Account(int accountNumber, String accountHolderName){
		this();
		System.out.println("Parameterized Account - 2");
		this.accountNumber = accountNumber;
		this.accountHolderName = accountHolderName;
	}
	
	public Account(int accountNumber, String accountHolderName, double balance){
		this(accountNumber,accountHolderName);
		System.out.println("Parameterized Account - 3");
		this.balance = balance;
	}
	*/
	public void setAccountNumber(int accountNumber)
	{
		this.accountNumber = accountNumber;
	}
	
	public void setAccountHolderName(String accountHolderName)
	{
		this.accountHolderName = accountHolderName;
	}
	public void setBalance(double balance)
	{
		this.balance = balance;
	}
	public int getAccountNumber(){return accountNumber;}
	public String getAccountHolderName(){return accountHolderName;}
	public double getBalance(){return balance;}
	
	public void showDetails()
	{
		System.out.println("\n---Account Class---");
		System.out.println("Account Number: "+accountNumber);
		System.out.println("Account Holder Name: "+accountHolderName);
		System.out.println("Balance: "+balance);	
	}
}