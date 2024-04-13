import java.lang.*;

public class Library{
	
	// ########## Class Atributes ##########  //
	
	private String libName;
	private String libAddress;
	private Book[] listOfBook;
	private int totalBook;
	
	// ########## Empty Constractor ##########  //
	
	public Library(){
		System.out.println("Empty Constractor!!");
	}
	
	// ########## Parameterized Constractor ##########  //
	
	public Library(String libName, String libAddress, int sizeArray, int totalBook){
		this.libName = libName;
		this.libAddress = libAddress;
		listOfBook = new Book[sizeArray];
		this.totalBook = totalBook;
	}
	
	public void setLibName(String libName){
		this.libName = libName;
	}
	
	public String getLibName(){
		return libName;
	}
	
	public void setLibAddress(String libAddress){
		this.libAddress = libAddress;
	}
	
	public String getLibAddress(){
		return libAddress;
	}	
	
	public void setListOfBook(Book[] listOfBook){
		this.listOfBook = listOfBook;     
	}
	
	public Book[] getListOfBook(){
		return listOfBook;     
	}
	
	public void setTotalBook(int totalBook){
		this.totalBook = totalBook;
	}
	
	public int getTotalBook(){
		return totalBook;
	}
	
	public void ShowLibInfo(){
		System.out.println("Libary name: "+libName);
		System.out.println("Libary Address: "+libAddress);
		for (int i = 0; i < listOfBook.length; i++) {
			if (listOfBook[i]!=null) {
				listOfBook[i].showBookInfo();
				System.out.println();
			}
		}
		System.out.println("Total Book: "+totalBook);
	}
	
	public void AddNewBook(Book book){
		for (int i = 0; i < listOfBook.length; i++) {
			if (listOfBook[i] == null) {
				listOfBook[i] = book;
				break;
			}
		}
	}
	
	public void DeleteBook(Book book){
		for(int i = 0; i < listOfBook.length;i++) {
			if(listOfBook[i] == book) {
				listOfBook[i] = null;
			}
		}
	}
	
	public void AddNewBookCopy(Book book, int copy){
		
	}
	
	
}