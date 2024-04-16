import java.util.Scanner;

class StringR {
  public static void main(String[] args) {
	
	Scanner scStr = new Scanner(System.in);
	String s,rs="";
	s = scStr.nextLine();
	
	for(int i=s.length()-1;i>=0;i--){
		rs+=s.charAt(i);
	}
	System.out.println(rs);
	
  }
}
