import java.util.Scanner;

public class calculator {
	public void addition(int a,int b)
	{	int sum=0;
		sum=a+b;
		System.out.println("Sum: "+sum);
	}
	public void sub(int a,int b)
	{	int sub=0;
		sub=a-b;
		System.out.println("subtraction: "+sub);
	}
	public void mul(int a,int b)
	{	int mul=0;
		mul=a*b;
		System.out.println("Multiplication: "+mul);
	}
	public void div(int a,int b)
	{	int div=0;
		div=a/b;
		System.out.println("division: "+div);
	}
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		calculator obj=new calculator();
		System.out.println("Enter 2 numbers: ");
		int a=s.nextInt();
		int b=s.nextInt();
		System.out.println("Enter 1 for addition");
		System.out.println("Enter 2 for subtraction");
		System.out.println("Enter 3 for multiplication");
		System.out.println("Enter 4 for division");
		int num=s.nextInt();
		if(num==1)
		{
			obj.addition(a, b);
		}
		else if(num==2)
		{
			obj.sub(a, b);
		}
		else if(num==3)
		{
			obj.mul(a, b);
		}
		else if (num==4)
		{
			obj.div(a, b);
		}
		else {
			System.out.println("Wrong entry");
		}
		
	}
	
}
