public class Contact{
	
	// ########## Class Atributes ##########  //
	
	private String person;
	private String personId;
	private int age;
	private String mobileNumber;
	private char gender;
	private String operator;
	
	// ########## Empty Constractor ##########  //
	
	Contact(){
		System.out.println("Empty Constractor!!");
	}
	
	// ########## Parameterized Constractor ##########  //
	
	Contact(String person, String personId, int age, String mobileNumber, char gender){
		System.out.println("Parameterized Constractor!!");
		this.person = person;
		this.personId = personId;
		this.age = age;
		this.mobileNumber = mobileNumber;
		this.gender = gender;	
	}
	
	// ########## Setter Method ##########  //
	
	public void setPerson(String person){
		this.person = person;
	}
	public void setPersonId(String personId){
		this.personId = personId;
	}
	public void setAge(int age){
		this.age = age;
	}
	public void setMobileNumber(String mobileNumber){
		this.mobileNumber = mobileNumber;
	}
	public void setGender(char gender){
		this.gender = gender;
	}
	
	// ########## Getter Method ##########  //
	
	public String getPerson(){
		return person;
	}
	public String getPersonId(){
		return personId;
	}
	public int getAge(){
		return age;
	}
	public String getMobileNumber(){
		return mobileNumber;
	}
	public char getGender(){
		return gender;
	}
	
	// ########## Show Method ##########  //
	
	public void ShowPersonInfo(){
		System.out.println("Person Name : " + person );
		System.out.println("Person ID : " + personId );
		System.out.println("Person Age : " + age);
		System.out.println("Person Mobile Number : " + mobileNumber);
		if(gender == 'M'){
            System.out.println("Person Gender : Male");
        }
		else if(gender == 'F'){
            System.out.println("Person Gender : Female");
        }
		else{
            System.out.println("Wrong Input for gender!!");
        }	
	}
	
	// ########## Detect Mobile Operator Method ##########  //
	
	public String DetectMobileOperator(){
        if(mobileNumber.charAt(2) == '6'){
            operator = "Operator : Airtel";
            return operator;
        }
		else if( mobileNumber.charAt(2) == '7' || mobileNumber.charAt(2)=='3'){
            operator ="Operator : GramenPhone";
            return operator ;
        }
		else if(mobileNumber.charAt(2) == '8'){
            operator = "Operator : Robi";
            return operator ;
        }
		else if(mobileNumber.charAt(2) == '9' || mobileNumber.charAt(2)=='4'){
            operator = "Operator : Banglalink";
            return operator;
        }
		else if(mobileNumber.charAt(2) == '5'){
            operator = "Operator : TeleTalk";
            return operator;
        }
        else {
            operator ="Wrong number ";
            return operator ;
        }
    }
	public void getNumber(){
		char number = mobileNumber.charAt(2) ;
		System.out.println(number);
	}
	
	// ########## Main Method ##########  //
	
	public static void main(String []args){
        Contact obj = new Contact("Shohan", "22-46013-1", 21, "01323456789", 'M');
        obj.ShowPersonInfo();
        System.out.println(obj.DetectMobileOperator());
    }
}