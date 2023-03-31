package twentyTwo;

import java.util.Scanner;

public class arrayPrint {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the  2d array size:");
		int n=s.nextInt();
		int arr[][]=new int[n][n];
		int arr2[][]=new int[n][n];
		int sum[][]=new int[n][n];
		displ obj=new displ();
		obj.get(arr, arr2, n);
		obj.add(arr, arr2,sum,n);
		obj.display(arr,arr2,sum,n);
	}
}

class displ
{	
	Scanner k=new Scanner(System.in);
	void get(int a[][],int b[][],int num)
	{
		System.out.println("Enter the first array values: ");
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				a[i][j]=k.nextInt();
			}
		}
		System.out.println("Enter the second array values: ");
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				b[i][j]=k.nextInt();
			}
		}
	}
	void add(int a[][],int b[][],int sum[][], int num)
	{
		System.out.println("Sum of the values: \n");
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		
	}
	void display(int a[][],int b[][],int sum[][],int num)
	{
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<num;j++)
			{
				System.out.print(sum[i][j]+"\t");
			}
			System.out.println();
		}
		
	}
}
