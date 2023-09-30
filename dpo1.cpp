#include <iostream>

int main() {
    // Variabel
    int angka = 5;
    double nilai = 7.5;
    char karakter = 'A';

    // Array satu dimensi
    int angkaArray[5] = {1, 2, 3, 4, 5};

    // Array multidimensi
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Input
    int inputAngka;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> inputAngka;

    // Output
    std::cout << "Nilai angka: " << angka << std::endl;
    std::cout << "Nilai nilai: " << nilai << std::endl;
    std::cout << "Karakter: " << karakter << std::endl;

    // Loop for
    for (int i = 0; i < 5; i++) {
        std::cout << "Angka array[" << i << "]: " << angkaArray[i] << std::endl;
    }

    // If
    if (inputAngka > 10) {
        std::cout << "Input angka lebih dari 10" << std::endl;
    } else {
        std::cout << "Input angka kurang dari atau sama dengan 10" << std::endl;
    }

    // While
    int counter = 0;
    while (counter < 5) {
        std::cout << "Counter: " << counter << std::endl;
        counter++;
    }

    // Do-While
    int doWhileCounter = 0;
    do {
        std::cout << "Do-While Counter: " << doWhileCounter << std::endl;
        doWhileCounter++;
    } while (doWhileCounter < 5);

    // Comment
    // Ini adalah komentar satu baris

    /*
    Ini adalah komentar
    multi-baris
    */

    return 0;
}

