package twentyFour;

import java.util.Scanner;

public class MyClass {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a choice\n");

		System.out.println("1.circle\n2.traingle\n3.square\n4.rectangle");
		int num=s.nextInt();
		Area obj=new Area();
		
		switch (num) {
		case 1:obj.circle();
			break;
		case 2:obj.triangle();
		break;
		case 3:obj.square();
		break;
		case 4:obj.rectangle();
		break;

		default:System.out.println("invalid entry");
			break;
		}
		
	}

}
