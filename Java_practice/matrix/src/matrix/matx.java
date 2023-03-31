package matrix;

import java.util.Scanner;

public class matx {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int arr[][]=new int[10][10];
		int arr1[][]=new int[10][10];	
		System.out.println("Enter raw and coloumn of  matrix");
		int raw=s.nextInt();
		int col=s.nextInt();
		System.out.println("Enter 1st matrix: ");
		for(int i=0;i<raw;i++)
		{
			for(int j=0;j<col;j++)
			{
				arr[i][j]=s.nextInt();
			}
		}
		System.out.println("Enter second matrix: ");
		for(int i=0;i<raw;i++)
		{
			for(int j=0;j<col;j++)
			{
				arr1[i][j]=s.nextInt();
			}
		}
		working obj=new working();
		System.out.println("Enter your choice\n\n1.add\n2.subtraction\n3.multi\n4.transpose\n5.exit");
		int ch=s.nextInt();
		 switch (ch) {
		case 1:{int res[][]=obj.add(arr,arr1,raw,col);
				
			for(int i=0;i<raw;i++)
			{
				for(int j=0;j<col;j++)
				{
					System.out.print(res[i][j]+"\t");
				}
				System.out.println();
			}
			
		}
			break;
		case 2:{int res[][]=obj.add(arr,arr1,raw,col);
		
		for(int i=0;i<raw;i++)
		{
		for(int j=0;j<col;j++)
		{
			System.out.print(res[i][j]+"\t");
		}
		System.out.println();
		}
	
		}
		
		break;
		case 3:{int res[][]=obj.multi(arr,arr1,raw,col);
		
		for(int i=0;i<raw;i++)
		{
		for(int j=0;j<col;j++)
		{
			System.out.print(res[i][j]+"\t");
		}
		System.out.println();
		}
	
		}
		
		break;
		case 4:{int res[][]=obj.tran(arr,raw,col);
		
		for(int i=0;i<col;i++)
		{
		for(int j=0;j<raw;j++)
		{
			System.out.print(res[i][j]+"\t");
		}
		System.out.println();
		}
	
		}
		break;
		case 5:System.exit(0);
		
		break;
		default:System.out.println("wrong entry");
			break;
		}
		
		
	}

}
