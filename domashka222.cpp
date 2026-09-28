#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#pragma execution_character_set("utf-8")

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    srand(time(0));

    int choise = 0;
    
    while (choise != 4) {
        std::cout << "1. Игра угадай число" << std::endl;
        std::cout << "2. Таблица умножения" << std::endl;
        std::cout << "3. Делители числа" << std::endl;
        std::cout << "4. Выйти из программы" << std::endl;
        std::cout << "Введи номер: ";
        std::cin >> choise;

        if (choise == 1) {

            int zagadanoe = rand() % 101;
            int otvet = 0;
            bool ugadal = false;

            std::cout << "Угадай число от 0 до 100" << std::endl;

            while (ugadal == false) {
                std::cout << "Введи число: ";
                std::cin >> otvet;
                if (otvet == zagadanoe) {
                    std::cout << "Победа!" << std::endl;
                    ugadal = true;
                }
            }
        }

        if (choise == 2) {

            int tabl[10][10];

            for (int i = 0; i < 10; i = i + 1) {
                for (int j = 0; j < 10; j = j + 1) {
                    tabl[i][j] = (i + 1) * (j + 1);
                }
            }
            std::cout << "    ";
            for (int j = 0; j < 10; j = j + 1) {
                std::cout << j + 1 << "\t";
            }
            std::cout << std::endl;

            for (int i = 0; i < 10; i = i + 1) {
                std::cout << i + 1 << " | ";
                for (int j = 0; j < 10; j = j + 1) {
                    std::cout << tabl[i][j] << "\t";
                }
                std::cout << std::endl;
            }
        }

        if (choise == 3) {

            int number;
            std::cout << "Введи число: ";
            std::cin >> number;

            std::cout << "Делители числа " << number << ": ";

            int i = 1;
            do {
                if (number % i == 0) {
                    std::cout << i << " ";
                }
                i = i + 1;
            } while (i <= number);

            std::cout << std::endl;
        }

        if (choise == 4) {
            std::cout << "Выход из программы" << std::endl;
        }
    }
}
