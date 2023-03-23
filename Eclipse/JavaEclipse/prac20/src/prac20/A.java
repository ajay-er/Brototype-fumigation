package prac20;

public class A {

	A()
	{
		
		System.out.println("1st");
	}
	
	A(int x)
	{	
		
		System.out.println("Second");
	}
	
	A(float x)
	{	
		this(3);
		System.out.println("Third");
	}
	
	public static void main(String[] args) {
		
		B d=new B();
	}

}

class B extends A {
		
			B()
			{
				
				this(3,3);
				System.out.println("B1");
			}
			B(int d,int x)
			{
				this(3);
				System.out.println("B2");

			}
			B(int s)
			{	super(4.5f);
				System.out.println("B3");

			}
	
	
}






