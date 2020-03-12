import java.util.Scanner;
import java.lang.Math;

public class Ex6 {

    public static void main(String[] args) {

        Scanner in1 = new Scanner(System.in);
        int a[] = new int[4];
        System.out.print("Enter circle1's center x-, y-coordinates, and radius: ");
        for (int i = 0; i < 3; i++) {
            a[i] = in1.nextInt();
        }

        int b[] = new int[4];
        System.out.print("Enter circle2's center x-, y-coordinates, and radius: ");
        for (int i = 0; i < 3; i++) {
            b[i] = in1.nextInt();
        }

        double dist;
        dist = Math.sqrt(Math.pow(b[1] - a[1], 2) + Math.pow(b[2] - a[2], 2));
        if (dist <= a[3] - b[3] ) {
            System.out.print("Circle 2 is inside circle 1");
        } else {
            System.out.print("Circle 1 is inside circle 2");
        }
        if (dist <= a[3] + b[3]) {
            System.out.print("Circle 2 overlap circle 1");
        }
    }
}
