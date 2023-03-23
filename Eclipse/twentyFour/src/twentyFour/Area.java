package twentyFour;

import java.util.Scanner;

public class Area {
	Scanner n=new Scanner(System.in);
	void circle() 
	{	final double pi=3.14;
		System.out.println("Enter the radius=");
		int r=n.nextInt();
		double area=pi*r*r;
		System.out.println("Area of circle = "+area);
		
	}
	void square() 
	{
		System.out.println("Enter your length:");
		int l=n.nextInt();
		int area=l*l;
		System.out.println("Area of a square: "+area);
		
	}
	void rectangle() 
	{
		System.out.println("Enter your length and breadth:");
		int l=n.nextInt();
		int b=n.nextInt();
		int area=l*b;
		System.out.println("Area of a rectangle= "+area);
		
	}
	void triangle() 
	{
		double c=0.5;
		System.out.println("Enter the height and base:");
		int h=n.nextInt();
		int b=n.nextInt();
		double area=(0.5)*h*b;
		System.out.println("Area of trangle : "+area);
	}

}
