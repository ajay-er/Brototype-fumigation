package ytPractice;

import ytPractice2.Protect;

public class Sample  {
	
	 class Sample1{
		
		  static int ajay1=20001;
		
	}
	protected class Sample2{
		void method()
		{
			System.out.println("Ajay//// typing....");
		}
	}
	public static void main(String[] args) {
		Sample s=new Sample();
		Sample.Sample1 n=s.new Sample1();
		Sample.Sample2 s1=s.new Sample2();
		Protect na=new Protect();
		na.naseeb();
		s1.method();
		System.out.println(n.ajay1);		
		
	}
}
