import java.lang.*;

public class Box
{
	private double length;
	private double width;
	private double height;
	private double id;
	
	public Box(){}
		
	public Box(double l, double w, double h,int i){
		length=l;
		width=w;
		height=h;
		id=i;
	}
	
	public void setLength(double l)
	{
		length = l;
	}
	public void setWidth(double w)
	{
		width = w;
	}
	public void setHeight(double h)
	{
		height = h;
	}
	
	public double getLength(){return length;}
	public double getWidth(){return width;}
	public double getHeight(){return height;}		
	public double getId(){return id;}		
	
	public void showBox(){
		System.out.println("Length : "+length);
		System.out.println("Width : "+width);
		System.out.println("Height : "+height);
		System.out.println();
	}
	
	//display all boxes
	public static void showAllBoxes(Box boxes[]){
		for(int i=0;i<boxes.length;i++){
			if(boxes[i]!=null){
				boxes[i].showBox();
			}
		}
	}
	
	//remove box
	public static void remove(Box boxes[], Box tb){
		boolean flag=false;
		for(int i=0;i<boxes.length;i++){
			if(boxes[i] == tb){
				boxes[i] = null;
				flag = true;
				break;
			}
		}
		if(flag){System.out.println("Object is Removed.");}
		else{System.out.println("Object is Not found.");}
	}
	
	public static void removeById(Box boxes[], int tid){
		boolean flag=false;
		for(int i=0;i<boxes.length;i++){
			if(boxes[i] != null){
				if(boxes[i].getId() == tid){
					boxes[i] = null;
					flag = true;
					break;
				}
			}
		}
		if(flag){System.out.println("Object is Removed.");}
		else{System.out.println("Object is Not found.");}
	}
	
	/*
	public void showAllBoxes(Box boxes[]){
		for(int i=0;i<boxes.length;i++){
			if(boxes[i] != null){
				boxes[i].showBox();
			}
		}
	}
	//remove object using id
	public void remove(Box boxes[], int tid){
		boolean flag=false;
		for(int i=0;i<boxes.length;i++){
			if(boxes[i]!=null){
				if(boxes[i].getId()==tid){
					boxes[i]=null;
					flag=true;
					break;
				}
			}
		}
		
		if(flag){System.out.println("Removed.");}
		else{System.out.println("Object does not exist.");}
	}
	*/
}