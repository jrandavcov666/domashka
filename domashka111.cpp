#include <iostream>
#include <cmath>
#include <Windows.h>
#pragma execution_character_set("utf-8")

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choise = 0;
    double a, b, result;
    int N;

    while (choise != 9) {
        std::cout << "1. Сложить 2 числа \n";
        std::cout << "2. Вычесть первое из второго \n";
        std::cout << "3. Перемножить 2 числа \n";
        std::cout << "4. Разделить первое на второе \n";
        std::cout << "5. Возвести в степень N первое число\n";
        std::cout << "6. Найти квадратный корень из числа \n";
        std::cout << "7. Найти 1 процент от числа \n";
        std::cout << "8. Найти факториал из числа \n";
        std::cout << "9. Выйти из программы \n";
        std::cin >> choise;

        if (choise == 1) {
            std::cout << "Введите 2 числа: ";
            std::cin >> a >> b;
            result = a + b;
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 2) {
            std::cout << "Введите 2 числа:";
            std::cin >> a >> b;
            result = b - a;
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 3) {
            std::cout << "Введите 2 числа:";
            std::cin >> a >> b;
            result = a * b;
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 4) {
            std::cout << "Введите 2 числа:";
            std::cin >> a >> b;
            if (b == 0) {
                std::cout << "На ноль делить нельзя";
            }
            else {
                result = b / a;
                std::cout << "Ответ:" << result << std::endl;
            }
        }
        else if (choise == 5) {
            std::cout << "Введите число и степень:";
            std::cin >> a >> N;
            result = pow(a,N);
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 6) {
            std::cout << "Введите число:";
            std::cin >> a;
            result = sqrt(a);
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 7) {
            std::cout << "Введите число:";
            std::cin >> a;
            result = a * 0.01;
            std::cout << "Ответ:" << result << std::endl;
        }
        else if (choise == 8) {
            std::cout << "Введите число:";
            std::cin >> N;
            if (N < 0) {
                std::cout << "Факториал от отрицательного целого числа не существует";
            }
            else {
                long long fact = 1;
                for (int i = 1; i <= N; i = i + 1) {
                    fact = fact * i;
                }
            std::cout << "Ответ:" << fact << std::endl;
            }
        }
        else if (choise == 9) {
            std::cout << "Выход из программы" << std::endl;
        }
    }
}