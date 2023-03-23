import java.util.Scanner;

public class primenumber {
	
	public static void main(String[] args) {
		int c = 0;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a number:");
		int num=s.nextInt();
		for(int i=2;i<=num/2;i++)
		{	c=0;
			if(num%i==0)
			{
				c=1;
				break;
			}
		}
		if(c==0 && num!=1 && num!=0)
		{
			System.out.println("Prime number");
		}
		else
		{
			System.out.println("not prime number");
		}
		
		
	}
}
