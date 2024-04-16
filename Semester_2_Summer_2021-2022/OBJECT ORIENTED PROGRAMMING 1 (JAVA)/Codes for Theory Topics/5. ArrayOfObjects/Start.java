import java.lang.*;

public class Start
{
	public static void main(String args[])
	{
		Box b = new Box(0,0,0,1);
		Box b1 = new Box(1,1,1,2);
		
		System.out.println("From Normal Box Object");
		b.showBox();
		b1.showBox();
		// null is the default value for object type array
		Box boxes[] = new Box[5];

		boxes[0] = b;
		boxes[1] = b1;
		boxes[2] = new Box(2,2,2,3);
		boxes[4] = new Box(4,4,4,5);
		
		Box temp = new Box();
		temp.showAllBoxes(boxes);
		temp.remove(boxes,b);
		temp.remove(boxes,b1);
		(new Box()).remove(boxes,b1);
		temp.removeById(boxes,3);
		temp.showAllBoxes(boxes);
		
		
		
		/*
		for( Box v :boxes){
			if(v != null){
				v.showBox();
			}
		}
		*/
		
	}
}




