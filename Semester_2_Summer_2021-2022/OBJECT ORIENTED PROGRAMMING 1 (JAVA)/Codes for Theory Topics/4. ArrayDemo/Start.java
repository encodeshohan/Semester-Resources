public class Start{
		
	public static void main(String []args){
		// //creating some box objects
		// Box b = new Box(2,2,2);
		// Box b1 = new Box(1,1,1);
		// Box b2 = new Box(4,4,4);
		
		// //Here we declare an Array for Box type object. 
		// Box boxes[] = new Box[3];
		// // the default value of object type array is null
		
		// //Assigning objects to array
		// boxes[0] = b;
		
		// //We can also creat an object and place it in array if needed.
		// boxes[1] = new Box(3,3,3);
		
		// /*we can insert Box object using insertBox method
		// to see how insertBox method is created go to Box class
		// Here b2 is the object we want to insert in array named boxes*/
		// b2.insertBox(boxes);
		
		
		// //Show All Boxes information using showAllBoxes Method
		// System.out.println("showAllBoxes Method using For Loop:");
		// Box.showAllBoxs(boxes);
		
		// //Searhing a box using FindBox method
		// b2.findBox(boxes);
		// //Removing a box using deleteBox method
		// b2.deleteBox(boxes);
		// b2.findBox(boxes);
		
		// Box.showAllBoxs(boxes);
		
	
        int array [] = new int [3]; 
		int array1[] = new int [0];
		int array2[] = new int [2];;
        array [0] = 3; 
        array [1] = 2; 
        array [2] = 1; 
				
		array1 = array;
		array2 = array1;

        System.out.println(array[2]+array1[1]+array2[0]); 

 

	}
}