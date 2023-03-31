package twentyThree;
import java.util.Scanner;

public class array {
		public static void main(String[] args) {
			Scanner s=new Scanner(System.in);
			System.out.println("Enter the array size:");
			int n=s.nextInt();
			int ar1[][]=new int[n][n];
			Methods obj=new Methods();
			obj.getArray(ar1,n);
			obj.disArray(ar1, n);
			
		}
}
class Methods
{
	Scanner s=new Scanner(System.in);
	void getArray(int a[][],int n)
	{
		System.out.println("Enter array values");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=s.nextInt();
			}
		}
	}
	void disArray(int a[][],int n)
	{
		System.out.println("Array values");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.println();
		}
	}
}