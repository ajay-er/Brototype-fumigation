package prac11;

public class Hi {
	
		public  int x=7777;
		public void method()
		{
			System.out.println("Ajay");
		}
}

class Koo extends Hi{
		  int x=556655;
		public void method()
		{
			System.out.println("Second....");
			
		}
		
}




class Hello extends Koo{
	
	
	void kk()
	{
		super.method();
	}
	public void method ()
	{
		
	}
	
	public static void main(String[] args) {
		
			Hello s=new Hello();
			System.out.println(s.x);
			s.method();
			
			
			
			
		
	}
}
