import java.util.Scanner;

public class Ex5 {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.print("Enter your number: ");
        int n = s.nextInt();

        if (n % 5 == 0 || n % 6 == 0) {
            System.out.println(n + " is divisible by 5 and 6, but not both");
        } else {
            System.out.println(n + " is not divisible by either 5 or 6");
        }

        if (n % 5 == 0 && n % 6 == 0) {
            System.out.println(n + " is divisible by both 5 and 6");
        }

    }
}
