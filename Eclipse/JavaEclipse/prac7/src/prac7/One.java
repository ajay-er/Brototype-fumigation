package prac7;

public class One {
	
	int age;
	int num;
	String name;
	One ()
	{
		System.out.println("Ajay");
	}
	
	One (int age,int num)
	{	
		this.age=age;
		this.num=num;
		
	}
	One (int age,int num,String name)
	{	
		this(age,num);
		this.name=name;
		System.out.println(age+" "+num+" "+name );
	}
	
}

class Two{
	
	public static void main(String[] args) {
		One s=new One(5,3);
		One s1=new One(3,5,"Ajay");
		
	}
	
}