package GetSet;

public class Set {
		private String cash;
		private int num;
		
		public int getNum()
		{
			return num;
		}
		public void setNum(int num)
		{
			 this.num=num;
		}

		public String getCash() {
			return cash;
		}

		public void setCash(String cash) {
			this.cash = cash;
		}
		
		
}

class Main{
	
	public static void main(String[] args) {
		
		
		Set s=new Set();
		s.setNum(555);
		s.setCash("Full");
		System.out.println(s.getCash()+" "+s.getNum());
		
		
	}
	
}
