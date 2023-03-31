package recursion;

public class crossRoads {
	static int i=1;
	public static void main(String[] args) {
		if(i<=8)
		{
			System.out.printf("Crossroads\n", i++);
			main(null);
		}
	}
}
