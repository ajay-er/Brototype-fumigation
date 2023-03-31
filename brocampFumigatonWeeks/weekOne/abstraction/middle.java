import java.util.Scanner;

public class middle {
    abs o;
    int a,b;

    middle(abs obj){
        o = obj;
        System.out.println("Enter two numbers");
        Scanner s = new Scanner(System.in);
        a = s.nextInt();
        b = s.nextInt();

    }

    void Sum(){
        int sum = a+b;
        o.displaySum(sum); 
    }

    void Product(){
        int sum = a*b;
        o.displaySum(sum); 
    }
}
