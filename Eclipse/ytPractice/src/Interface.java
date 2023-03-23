interface Animal{
	
	public void animalsound();
	public void sleep();
}


class Pig implements Animal{

	@Override
	public void animalsound() {
			System.out.println("pig says weeeeeee");
		
	}

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		System.out.println("zzz zz");
	}
	
	
}

class Main{
	public static void main(String[] args) {
			Pig mypig=new Pig();
			 mypig.animalsound();
			 mypig.sleep();
	}
}
	
		

