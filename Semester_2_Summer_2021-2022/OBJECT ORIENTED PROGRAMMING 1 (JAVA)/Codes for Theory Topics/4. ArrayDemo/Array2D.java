import java.lang.*;

public class Array2D
{
	public static void main(String []args)
	{
		//############## 2D array ########//
		//dataType arrayName[][] = new dataType[row][col]
		int Arr2D[][] = new int[2][3];
		
		Arr2D[1][1] = 1;
		Arr2D[1][2] = 3;
		Arr2D[0][0] = 5;
		
		/*
		using for each element
		Arr2D is a 2-D array and it consist of some 1-D array
		using for we get one 1-D array at a time and load it in value[] array
		*/
		for(int value[] : Arr2D){
		/*
		from that 1-D array we using another for each 
		to get one value a time and load it in v variable.
		*/
			for(int v : value){
				System.out.print(v);
			}
			System.out.println();
		}
		
		//using normal for loop
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				System.out.print(Arr2D[i][j]);
			}
			System.out.println();
		}
		
	}
}