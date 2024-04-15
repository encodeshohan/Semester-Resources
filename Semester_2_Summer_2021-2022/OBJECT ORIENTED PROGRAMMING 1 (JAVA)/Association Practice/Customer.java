import java.lang.*;

public class Customer
{
	private String phnNumber;
	
	
	public Customer()
	{
		
	}
	public Customer(String phnNumber)
	{
		this.phnNumber = phnNumber;
	}
	
	public void setPhnNumber(String phnNumber)
	{
		this.phnNumber = phnNumber;
	}
	public String getPhnNumber(){return phnNumber;}
	
}