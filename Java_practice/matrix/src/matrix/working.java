package matrix;

import java.util.Scanner;

public class working {
	Scanner sc=new Scanner(System.in);
	int[][] add(int a[][],int b[][],int r,int c)
	{	
		
		int sum[][]=new int [10][10];
		System.out.println("Addition: ");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		return sum;
	}
	int [][] sub(int a[][],int b[][],int r,int c)
	{
		int sub[][]=new int [10][10];
		System.out.println("sub: ");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				sub[i][j]=a[i][j]-b[i][j];
			}
		}
		return sub;
	}
	int [][] multi(int a[][],int b[][],int r,int c)
	{	
		int mul[][]=new int [10][10];
		System.out.println("multi: ");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				for(int k=0;k<r;k++)
				{
					mul[i][j]=mul[i][j]+a[i][k]+a[k][j];
				}
			}
		}
		return mul;
		
	}
	int [][] tran(int a[][],int r,int c)
	{
		int tra[][]=new int [10][10];
		System.out.println("transpose of 1st array: ");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				tra[j][i]=a[i][j];
			}
		}
		return tra;
	}
		
	

}
