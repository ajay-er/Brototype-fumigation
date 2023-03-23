import java.util.Scanner;

public class main {
	
	public void  getArray()
	{
		Scanner s=new Scanner(System.in);
		int limit=s.nextInt();
		int arr[]=new int [10];
		for(int i=0;i<limit;i++)
		{
			arr[i]=s.nextInt();
		}
		
	}
	public void displayArray()
	{	
		getArray();
		for(int i=0;i<5;i++)
		{
			char[][] arr = null;
			System.out.println(arr[i]);
		}
		
	}
	public static void main(String ar[])
	{
		main obj=new main();
		obj.getArray();
		obj.displayArray();
	}

}
