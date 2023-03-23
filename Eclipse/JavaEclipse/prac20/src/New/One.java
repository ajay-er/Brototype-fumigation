package New;

public class One {
		
	void one()
	{
		System.out.println("a");
	}
//	protected One ()
//	{
//		
//	}
	protected One ()
	{
		
	}
//	public One ()
//	{
//		
//	}
		
}

class Two extends One {
	void one (int x)
	{
		System.out.println("ss");
	}
	public static void main(String[] args) {
		Two s=new Two();
		s.one();
		s.one(5);
	}
}
