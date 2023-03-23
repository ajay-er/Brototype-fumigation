package prac5;

public class One {
	
	 int x=3;
	
	public static void main(String[] args) {
				
		System.out.println(Two.a);
		hello();
		One one = new One();
		one.Hi();
		}
	
	 static void hello() {
		
		
		Two.a = 230;
		Two.b=55;
	}
	
	
	 void Hi()
	{
		System.out.println(x);
		One.hello();
		
		
	}
}
