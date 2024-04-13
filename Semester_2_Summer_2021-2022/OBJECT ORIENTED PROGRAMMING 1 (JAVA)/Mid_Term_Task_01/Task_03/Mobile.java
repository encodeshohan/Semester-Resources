public class Mobile {
	
	// ########## Class Atributes ##########  //
	
	private String mobileOwnerName;
	private String mobileNumber;
	private String mobileOSName;
	private double mobileBalance;
	private boolean lock;
	
	// ########## Empty Constractor ##########  //
	
	Mobile(){
		System.out.println("Empty Constractor");
	}
	
	// ########## Parameterized Constractor ##########  //
	
	Mobile(String mobileOwnerName, String mobileNumber,double mobileBalance, String mobileOSName, boolean lock){
		System.out.println("Parameterized Constractor");
		this.mobileOwnerName = mobileOwnerName;
		this.mobileNumber = mobileNumber;
		this.mobileBalance = mobileBalance;
		this.mobileOSName = mobileOSName;
		this.lock = lock;
	}
	
	// ########## Setter Method ##########  //
	
	public void setMobileOwnerName(String mobileOwnerName){
		this.mobileOwnerName = mobileOwnerName;
	}
	public void setMobileNumber(String mobileNumber){
		this.mobileNumber = mobileNumber;
	}
	public void setMobileBalance(double mobileBalance){
		this.mobileBalance = mobileBalance;
	}
	public void setMobileOSName(String mobileOSName){
		this.mobileOSName = mobileOSName;
	}
	public void setLock(boolean lock){
		this.lock = lock;
	}
	
	// ########## Getter Method ##########  //
	
	public String getMobileOwnweName(){
		return mobileOwnerName;
	}
	public String getMobileNumber(){
		return mobileNumber;
	}
	public double getMobileBalance(){
		return mobileBalance;
	}
	public String getMobileOSName(){
		return mobileOSName;
	}
	public boolean getLock(){
		return lock;
	}
	
	// ########## Show Method ##########  //
	
	public void ShowInfo(){
		if(lock == false){
			System.out.println("Owner Name:" + mobileOwnerName);        
			System.out.println("Mobile Number :" + mobileNumber);        
			System.out.println("Mobile Balance :" + mobileBalance);        
			System.out.println("OS Name: " + mobileOSName);        
			System.out.println("lock Status :" + lock);
		}
		else{
			System.out.println("Information is not available right now because Mobile is Lock.");
		}
	}
	
	// ########## Recharge Method ##########  //
	
	public void Recharge(int amount){
        if(lock == false){
            mobileBalance = mobileBalance + amount;
		}
        else{
			System.out.println("The Mobile is locked you can not recharge right now!");
		}
    }
	
	// ########## Call Someone Method ##########  //
	
	public void CallSomeone(int timeDuration){
        if(lock == false ){
            double totalcost = timeDuration*0.5;
            if(mobileBalance >= totalcost){
                mobileBalance = mobileBalance - totalcost;
            }
            else{
                System.out.println("Insufficient Balance");
            }
            
        }
        else{
            System.out.println("The Mobile is locked you can not call someone!!");
        }
	}
	
	// ########## Main Method ##########  //
	
	public static void main(String []args){
        Mobile M = new Mobile("Shohan","01323456789",300,"Android",false);
        M.Recharge(50);
        M.ShowInfo();
        Mobile M1=new Mobile("Shohan","01323456789",300,"Android",false);
        M1.CallSomeone(10);
        M1.ShowInfo();
    }
}