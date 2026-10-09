#include "Header.h"

int main() {
    setlocale(LC_ALL, "Russian");

    int choice = 0;
    do {
        std::cout << "\n";
        std::cout << " 1 - сумма двух последних цифр" << "\n";
        std::cout << " 2 - есть ли позитив" << "\n";
        std::cout << " 3 - большая буква" << "\n";
        std::cout << " 4 - делитель" << "\n";
        std::cout << " 5 - многократный вызов" << "\n";
        std::cout << " 6 - безопасное деление" << "\n";
        std::cout << " 7 - строка сравнения" << "\n";
        std::cout << " 8 - тройная сумма" << "\n";
        std::cout << " 9 - возраст" << "\n";
        std::cout << "10 - вывод дней недели" << "\n";
        std::cout << "11 - числа наоборот" << "\n";
        std::cout << "12 - степень числа" << "\n";
        std::cout << "13 - одинаковость" << "\n";
        std::cout << "14 - левый треугольник" << "\n";
        std::cout << "15 - угадайка" << "\n";
        std::cout << "16 - поиск последнего значения" << "\n";
        std::cout << "17 - добавление в массив" << "\n";
        std::cout << "18 - реверс" << "\n";
        std::cout << "19 - объединение" << "\n";
        std::cout << "20 - удалить негатив" << "\n";
        std::cout << " 0 - Выход" << "\n";
        std::cout << "Введите число от 0 до 20: ";
        choice = readInt(0, 20);

        switch (choice) {
        case 0: {
            break;
        }
        case 1: {
            int num = 0;
            std::cout << "введите число: ";
            num = readInt();
            if (num < 10) {
                std::cout << "Ошибка ввода" << "\n";
            }
            else {
                std::cout << "Результат сложения: " << sumLastNums(num) << "\n";
            }
            break;
        }
        case 2: {
            int num1 = 0;
            std::cout << "введите число: ";
            num1 = readInt();
            std::cout << std::boolalpha;
            std::cout << "Результат: " << " " << isPositive(num1) << "\n";
            break;
        }
        case 3: {
            char let = 0;
            std::cout << "Введите букву: ";
            let = readChar();
            std::cout << std::boolalpha;
            std::cout << "Результат: " << isUpperCase(let) << "\n";
            break;
        }
        case 4: {
            int num2 = 0;
            int num3 = 0;
            std::cout << "Введите первое число: ";
            num2 = readInt();
            std::cout << "Введите второе число: ";
            num3 = readInt();
            std::cout << std::boolalpha;
            std::cout << "Результат: " << isDivisor(num2, num3) << "\n";
            break;
        }
        case 5: {
            int result = 0;
            int next = 0;
            std::cout << "Введите первое число: ";
            result = readInt();
            for (int i = 2; i <= 5; i++) {
                std::cout << "Введите число " << i << ": ";
                next = readInt();
                std::cout << result << "+" << next << " это ";
                result = lastNumSum(result, next);
                std::cout << result << "\n";
            }
            std::cout << "Итого " << result << "\n";
            break;
        }
        case 6: {
            int dividend = 0;
            int denominator = 0;
            std::cout << "Введите делимое: ";
            dividend = readInt();
            std::cout << "Введите делитель: ";
            denominator = readInt();
            if (denominator == 0) {
                std::cout << "Делить на 0 нельзя, будет возвращен 0" << "\n";
            }
            std::cout << "Результат: " << safeDiv(dividend, denominator) << "\n";
            break;
        }
        case 7: {
            int num4 = 0;
            int num5 = 0;
            std::cout << "Введите первое число: ";
            num4 = readInt();
            std::cout << "Введите второе число: ";
            num5 = readInt();
            std::cout << "Результат: " << makeDecision(num4, num5) << "\n";
            break;
        }
        case 8: {
            int num6 = 0;
            int num7 = 0;
            int num8 = 0;
            std::cout << "Введите первое число: ";
            num6 = readInt();
            std::cout << "Введите второе число: ";
            num7 = readInt();
            std::cout << "Введите третье число: ";
            num8 = readInt();
            std::cout << std::boolalpha;
            std::cout << "Результат: " << sum3(num6, num7, num8) << "\n";
            break;
        }
        case 9: {
            int x = 0;
            std::cout << "Введите возраст (от 0 до 150): ";
            x = readInt(0, 150);
            std::cout << "Результат: " << age(x) << "\n";
            break;
        }
        case 10: {
            int day = 0;
            std::cout << "Введите номер дня недели: ";
            day = readInt();
            std::cout << "Результат:" << "\n";
            printDays(day);
            break;
        }
        case 11: {
            int num9 = 0;
            std::cout << "Введите число (от 0 до 10000): ";
            num9 = readInt(0, 10000);
            std::cout << "Результат: " << reverseListNums(num9) << "\n";
            break;
        }
        case 12: {
            int num10 = 0;
            int degree = 0;
            std::cout << "Введите число: ";
            num10 = readInt();
            std::cout << "Введите степень (от 0 до 31): ";
            degree = readInt(0, 31);
            if (powFits(num10, degree)) {
                std::cout << "Результат: " << pow(num10, degree) << "\n";
            }
            else {
                std::cout << "Ошибка: результат не помещается в int" << "\n";
            }
            break;
        }
        case 13: {
            int num11 = 0;
            std::cout << "Введите число: ";
            num11 = readInt();
            std::cout << std::boolalpha;
            std::cout << "Результат: " << equalNum(num11) << "\n";
            break;
        }
        case 14: {
            int height = 0;
            std::cout << "Введите высоту треугольника (от 1 до 50): ";
            height = readInt(1, 50);
            leftTriangle(height);
            break;
        }
        case 15: {
            guessGame();
            break;
        }
        case 16: {
            int arr[MAX_SIZE];
            int size = inputArray(arr);
            int x = 0;
            std::cout << "Введите число для поиска: ";
            x = readInt();
            std::cout << "Результат: " << findLast(arr, size, x) << "\n";
            break;
        }
        case 17: {
            int arr[MAX_SIZE];
            int size = inputArray(arr);
            int x = 0;
            int pos = 0;
            std::cout << "Введите число для вставки: ";
            x = readInt();
            std::cout << "Введите позицию (от 0 до " << size << "): ";
            pos = readInt(0, size);

            int* result = add(arr, size, x, pos);
            std::cout << "Результат: ";
            printArray(result, size + 1);
            std::cout << "\n";
            delete[] result;
            break;
        }
        case 18: {
            int arr[MAX_SIZE];
            int size = inputArray(arr);
            std::cout << "Было:  ";
            printArray(arr, size);
            std::cout << "\n";
            reverse(arr, size);
            std::cout << "Стало: ";
            printArray(arr, size);
            std::cout << "\n";
            break;
        }
        case 19: {
            int arr1[MAX_SIZE];
            int arr2[MAX_SIZE];
            std::cout << "Первый массив" << "\n";
            int size1 = inputArray(arr1);
            std::cout << "Второй массив" << "\n";
            int size2 = inputArray(arr2);

            int* result = concat(arr1, size1, arr2, size2);
            std::cout << "Результат: ";
            printArray(result, size1 + size2);
            std::cout << "\n";
            delete[] result;
            break;
        }
        case 20: {
            int arr[MAX_SIZE];
            int size = inputArray(arr);
            int newSize = 0;

            int* result = deleteNegative(arr, size, newSize);
            std::cout << "Результат: ";
            printArray(result, newSize);
            std::cout << "\n";
            delete[] result;
            break;
        }
        default: {
            std::cout << "Ошибка: такого варианта нет" << "\n";
        }
        }
    } while (choice != 0);
    return 0;
}
