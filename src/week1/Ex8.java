package week1;

public class Ex8 {

    public static void main(String[] args) {

//        int a[] = new int[101];
//        for (int i = 100; i <= 200; i++) {
//            a[i] = i;
//        }

        for (int i = 100; i <= 200; i++) {
            if (i % 5 == 0 || i % 6 == 0) {
                System.out.print(i + " ");
            }
        }
    }
}
