package week1;
import java.util.Scanner;

public class Ex9 {

    public static void main(String[] args) {

        Scanner a = new Scanner(System.in);
        System.out.print("Enter the number of lines: ");
        int n = a.nextInt();
        System.out.println(" ");

        for (int i = 0; i <= n; i--) {
            for (int j = 0; j <= (n - i)*2; j++) {
                System.out.print(" ");
            }

            for (int k = i; k >= 1; k--) {
                System.out.print(" " + k);
            }

            for (int l = 2; l <= i; l++) {
                System.out.print(" " + l);
            }

            System.out.println();
        }
    }
}
