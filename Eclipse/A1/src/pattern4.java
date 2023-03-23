import java.util.Scanner;

public class pattern4 
{
 public static void main(String[] args) 
 {
  Scanner scan = new Scanner(System.in);
			
			int limit = scan.nextInt();
			
			int v = 1;
			int h = 2;
			
			for(int i=1; i<=limit; i++) 
			{
				if(i % 2 == 0) 
				{
					v = 2;
					h += 4;
				}
				else 
				{
					v = 1;
					h += 2;
				}
				for(int j=1; j<=v; j++) 
				{
					System.out.println("*");
        
				}
        
				if(i == limit)break;

				for(int j=1; j<=h; j++) 
				{
					System.out.print("*");
				}
				System.out.println();
			}
				
 }
}