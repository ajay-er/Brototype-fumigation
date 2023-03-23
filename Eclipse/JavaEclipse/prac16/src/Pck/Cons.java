package Pck;

public class Cons {
	
	String name;
	int roll;
	Cons(String name,int roll)
	{
		this.name=name;
		this.roll=roll;
		System.out.println(name+" "+roll);
	
	}
	
}

class temp{
	public static void main(String[] args) {
		Cons s=new Cons("Ajay", 10);
		Cons s1=new Cons("Sam", 11);
		Cons s2=new Cons("Sajay",12);
	}
}
