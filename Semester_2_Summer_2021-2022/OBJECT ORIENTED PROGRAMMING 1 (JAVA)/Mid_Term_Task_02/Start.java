import java.lang.*;
public class Start{
	public static void main(String[] args){
		Book b1 = new Book("Opekkha", "Humayun Ahmed", "2-46239-1", "Novel", 30);
		Book b2 = new Book("‎Himu", "Humayun Ahmed", "2-46240-1", "Novel", 10);
		
		b1.addBookCopy(12);
		b2.addBookCopy(12);
		
		Library lib = new Library("Java Book Store","Aline Republic of Mars",30,7);
		lib.AddNewBook(b1);
		lib.AddNewBook(b2);
		lib.showLibInfo();
		Book.showAllBookInfo();
		System.out.println();
		
		Contact c1 =new Contact("Alien1","19-466231-1",20,"013333333",'M');
		Contact c2 =new Contact("Alien2","20-476498-1",20,"017888888",'M');
		
		AddressBook adb = new AddressBook("Groot",5);
		adb.AddContact(c1);
		adb.AddContact(c2);
		adb.ShowAllConInfo();
		
	}
}