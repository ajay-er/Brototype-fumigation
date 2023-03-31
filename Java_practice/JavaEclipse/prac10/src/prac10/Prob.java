package prac10;

public class Prob {
	
	void Method()
	{
		System.out.println("Hoii");
	}
	void New()
	{
		System.out.println("Heiiiii");
	}
}


class Sec extends Prob{
	void Method()
	{
		System.out.println("1 st..");
	}
	void Secr()
	{
		super.Method();
	}
}


class Third extends Sec {
		public static void main(String[] args) {
	
			Third s=new Third();
			s.Method();
			s.Secr();
			s.New();
			
		}
	
}
