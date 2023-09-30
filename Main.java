import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Variabel
        int angka = 5;
        double nilai = 7.5;
        char karakter = 'A';

        // Array satu dimensi
        int[] angkaArray = {1, 2, 3, 4, 5};

        // Array multidimensi
        int[][] matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

        // Input
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        int inputAngka = input.nextInt();

        // Output
        System.out.println("Nilai angka: " + angka);
        System.out.println("Nilai nilai: " + nilai);
        System.out.println("Karakter: " + karakter);

        // Loop for
        for (int i = 0; i < angkaArray.length; i++) {
            System.out.println("Angka array[" + i + "]: " + angkaArray[i]);
        }

        // If
        if (inputAngka > 10) {
            System.out.println("Input angka lebih dari 10");
        } else {
            System.out.println("Input angka kurang dari atau sama dengan 10");
        }

        // While
        int counter = 0;
        while (counter < 5) {
            System.out.println("Counter: " + counter);
            counter++;
        }

        // Do-While
        int doWhileCounter = 0;
        do {
            System.out.println("Do-While Counter: " + doWhileCounter);
            doWhileCounter++;
        } while (doWhileCounter < 5);

        // Comment
        // Ini adalah komentar satu baris

        /*
        Ini adalah komentar
        multi-baris
        */
    }
}