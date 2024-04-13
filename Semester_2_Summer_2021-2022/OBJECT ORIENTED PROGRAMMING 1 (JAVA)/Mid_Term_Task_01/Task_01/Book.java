public class Book{
	
	// ########## Class Atributes ##########  //
	
	private String bookName;
	private String bookAuthor;
	private String bookId;
	private String bookType;
	private int bookCopy;
	public static int bookCounter;
	public static void ShowTotalBookInfo(){
		 System.out.println("Total BookInfo: "+bookCounter);
	}
	 static{
		bookCounter=0;
	}
	
	// ########## Empty Constractor ##########  //
	
	Book(){
		System.out.println("Empty Constractor!!");
		bookCounter++;
	}
	
	// ########## Parameterized Constractor ##########  //
	
	Book(String bookName, String bookAuthor, String bookId, String bookType, int bookCopy){
		System.out.println("Parameterized Constractor!!");
		bookCounter++;
		this.bookName = bookName;
		this.bookAuthor = bookAuthor;
		this.bookId = bookId;
		this.bookType = bookType;
		this.bookCopy = bookCopy;
	}
	
	// ########## Setter Method ##########  // 
	
	public void setBookName(String bookName){
		this.bookName = bookName;
	}
	public void setBookAuthor(String bookAuthor){
		this.bookAuthor = bookAuthor;
	}
	public void setBookId(String bookId){
		this.bookId = bookId;
	}
	public void setBookType(String bookType){
		this.bookType = bookType;
	}
	public void setBookCopy(int bookCopy){
		this.bookCopy = bookCopy;
	}
	
	// ########## Getter Method ##########  //
	
	public String getBookName(){
		return bookName;
	}
	public String getBookAuthor(){
		return bookAuthor;
	}
	public String getBookId(){
		return bookId;
	}
	public String getBookType(){
		return bookType;
	}
	public int getBookCopy(){
		return bookCopy;
	}
	
	// ########## Show Method ##########  //
	
	public void ShowBookInfo(){
		System.out.println("Book Name : " + bookName);
		System.out.println("Author Name : " + bookAuthor);
		System.out.println("Book ID : " + bookId);
		System.out.println("Book Type : " + bookType);
		System.out.println("Book Copy : " + bookCopy);
	}
	
	
	
	public void AddBookCopy(int x){
		bookCopy = bookCopy + x;
	}
	
	
	public static void main(String[] args){
		Book b = new Book("‎Opekkha", "Humayun Ahmed", "2-46239-1", "Novel", 30);
		b.ShowBookInfo();
		Book.ShowTotalBookInfo();
	}
}