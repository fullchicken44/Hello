import java.util.Scanner;

public class Ex1234 {

//    public static void main(String[] args) {
//        System.out.println("     J      A     V     V    A");
//        System.out.println("     J    A   A    V   V   A   A  ");
//        System.out.println("J    J   AAAAAAA    V V   AAAAAAA");
//        System.out.println("  J  J  A       A    V   A       A");
//    }
//}

public static void main(String[] args) {
    int Faren;

    Scanner input = new Scanner(System.in);
    System.out.print("Enter the celsius: ");
    int celsius = input.nextInt();

    Faren = (9/5)*celsius + 32;
    System.out.println("The Farenheit is " + Faren);


    //Calculate the sum of digits
    Scanner input2 = new Scanner(System.in);
    System.out.print("Enter the number to calculate sum: ");
    int m = input.nextInt();
    int n, sum = 0;

    while (m > 0) {
        n = m % 10;
        sum = sum + n;
        m = m/10;
        }
    System.out.println("Sum of the entered digits is: " +sum);

    //Print out all number in descending number
 int x, temp;
 Scanner input3 = new Scanner(System.in);
 System.out.print("Enter the number of number you want to sort: ");
 x = input.nextInt();
 int a[] = new int[x];

 System.out.print("Enter all the element: ");
 for (int i = 0; i < x; i++) {
     a[i] = input.nextInt();
 }

 for (int i = 0; i < x; i++) {
     for (int j = i+1; i < x; j++ ) {
         if (a[i] < a[j]) {
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
         }
     }
 }

 System.out.print("Descending order: ");
 for (int i = 0; i < x; i++) {
     System.out.println(a[i]);
 }
 System.out.print(a[x-1]);


    }
}