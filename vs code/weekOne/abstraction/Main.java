public class Main extends abs {

    void displaySum(int sum) {
        System.out.println("Sum of the numbers is "+sum);
    }

    public static void main(String[] args) {
        Main m = new Main();
        middle obj = new middle(m);
        obj.Sum();
        obj.Product();
    }
    
}
