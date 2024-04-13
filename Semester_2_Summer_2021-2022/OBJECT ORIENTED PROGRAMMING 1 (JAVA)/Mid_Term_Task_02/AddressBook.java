public class AddressBook{
	
	// ########## Class Atributes ##########  //
	
	private String ownerName;
	private String info;
	private Contact [] listOfContact;
	
	// ########## Empty Constractor ##########  //
	
	public AddressBook(){
		System.out.println("Empty Constractor!!");
	}
	
	// ########## Parameterized Constractor #########
	
	public AddressBook(String ownerName, String info, int size){
		this.ownerName = ownerName;
		this.info = info;
		listOfContact = new Contact[size];
	}
	
	public void setOwnerName(String ownerName){
		this.ownerName = ownerName;
	}
	
	public String getOwnerName(){
		return ownerName;
	}
	
	public void setInfo(String info){
		this.info = info;
	}
	
	public String getInfo(){
		return info;
	}

	public void setListOfContact(Contact [] listOfContact){
		this.listOfContact = listOfContact;
	}
	
	public Contact [] getlistOfContact(){
		return listOfContact;
	}
	
	public void  ShowAllContactInfo(){
		System.out.println("Owner Name : "+ownerName);
		for (int i = 0; i < listOfContact.length; i++) {
			if(listOfContact[i]!=null) {
				listOfContact[i].ShowPersonInfo();
				System.out.println();
			}
		}
	}
	
	public void AddContact(Contact con){
		for (int i = 0; i < listOfContact.length; i++) {
			if(listOfContact[i] == null) {
				listOfContact[i] = con; 
                                break;
			}
		}
	}
	
	public void DeleteContact(Contact con){
		for (int i = 0; i < listOfContact.length; i++) {
			if(listOfContact[i] == con) {
				listOfContact[i] = null;
			}
		}
	}
	
	public void DeleteContactByName(String name){
		for (int i = 0; i < listOfContact.length; i++) {
			if(listOfContact[i]!=null) {
				if(listOfContact[i].getPersonName().equals(name)) {
					listOfContact[i] = null;
				}
			}
		}
	}

	
}