package prac21;

 class A {
	
	
	static void met(int x)
	{
		
		System.out.println("a");
	}
	


}
 
 class B extends A{
	 static void met(int x)
	 {
		 System.out.println("Aj");
	 }
	 
	 
	 public static void main(String[] args) {
		B.met(9);
		
	}
 }
 
