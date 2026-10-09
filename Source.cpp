#include "Header.h"
#include <cstdlib>
#include <ctime>

int readInt(int minValue, int maxValue) {
    int x = 0;
    while (!(std::cin >> x) || x < minValue || x > maxValue) {
        if (std::cin.eof()) {
            std::exit(0);
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка, попробуйте еще раз: ";
    }
    return x;
}

char readChar() {
    std::string text;
    std::cin >> text;
    while (text.size() != 1) {
        if (std::cin.eof()) {
            std::exit(0);
        }
        std::cout << "Ошибка, введите один символ: ";
        std::cin >> text;
    }
    return text[0];
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
}

int inputArray(int arr[]) {
    std::cout << "Введите размер массива (от 1 до " << MAX_SIZE << "): ";
    int size = readInt(1, MAX_SIZE);
    for (int i = 0; i < size; i++) {
        std::cout << "Введите элемент " << i << ": ";
        arr[i] = readInt();
    }
    return size;
}

int sumLastNums(int x) {///задания 1
    int last = 0;
    int secondLast = 0;
    last = x % 10;
    secondLast = (x / 10) % 10;
    return last + secondLast;
}

bool isPositive(int x) {
    return x > 0;
}

bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z';
}

bool isDivisor(int a, int b) {
    return (b != 0 && a % b == 0) || (a != 0 && b % a == 0);
}

int lastNumSum(int a, int b) {
    int x = a % 10;
    int y = b % 10;
    if (x < 0) {
        x = -x;
    }
    if (y < 0) {
        y = -y;
    }
    return x + y;
}

double safeDiv(int x, int y) {///задания 2
    if (y == 0) {
        return 0;
    }
    return (double)x / y;
}

std::string makeDecision(int x, int y) {
    if (x > y) {
        return std::to_string(x) + " > " + std::to_string(y);
    }
    if (x < y) {
        return std::to_string(x) + " < " + std::to_string(y);
    }
    return std::to_string(x) + " == " + std::to_string(y);
}

bool sum3(int x, int y, int z) {
    return x + y == z || x + z == y || y + z == x;
}

std::string age(int x) {
    int last = x % 10;
    int lastTwo = x % 100;
    if (last == 1 && lastTwo != 11) {
        return std::to_string(x) + " год";
    }
    if (last >= 2 && last <= 4 && (lastTwo < 12 || lastTwo > 14)) {
        return std::to_string(x) + " года";
    }
    return std::to_string(x) + " лет";
}

void printDays(int x) {
    switch (x) {
    case 1: std::cout << "понедельник" << "\n";   
    case 2: std::cout << "вторник" << "\n";       
    case 3: std::cout << "среда" << "\n";         
    case 4: std::cout << "четверг" << "\n";       
    case 5: std::cout << "пятница" << "\n";       
    case 6: std::cout << "суббота" << "\n";       
    case 7: std::cout << "воскресенье" << "\n";
        break;
    default:
        std::cout << "это не день недели" << "\n";
    }
}

std::string reverseListNums(int x) {///задания 3
    std::string result = "";
    for (int i = x; i >= 0; i--) {
        result += std::to_string(i);
        if (i > 0) {
            result += " ";
        }
    }
    return result;
}

int pow(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result = result * x;
    }
    return result;
}

bool powFits(int x, int y) {//// проверяет, что x в степени y поместится в int
    long long check = 1;
    for (int i = 0; i < y; i++) {
        check = check * x;
        if (check > 2147483647 || check < -2147483647 - 1) {
            return false;
        }
    }
    return true;
}

bool equalNum(int x) {
    int digit = x % 10;
    while (x != 0) {
        if (x % 10 != digit) {
            return false;
        }
        x = x / 10;
    }
    return true;
}

void leftTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void guessGame() {
    std::srand((unsigned int)std::time(0));
    int secret = std::rand() % 10;
    int guess = -1;
    int attempts = 0;

    std::cout << "Введите число от 0 до 9: ";
    while (guess != secret) {
        guess = readInt(0, 9);
        attempts++;
        if (guess != secret) {
            std::cout << "Вы не угадали, введите число от 0 до 9: ";
        }
    }

    std::cout << "Вы угадали!" << "\n";
    std::cout << "Вы отгадали число за " << attempts;
    if (attempts % 10 == 1 && attempts % 100 != 11) {
        std::cout << " попытку" << "\n";
    }
    else if (attempts % 10 >= 2 && attempts % 10 <= 4 && (attempts % 100 < 12 || attempts % 100 > 14)) {
        std::cout << " попытки" << "\n";
    }
    else {
        std::cout << " попыток" << "\n";
    }
}

int findLast(int arr[], int size, int x) { ///задания 4
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int* add(int arr[], int size, int x, int pos) {
    int* result = new int[size + 1];
    for (int i = 0; i < pos; i++) {
        result[i] = arr[i];
    }
    result[pos] = x;
    for (int i = pos; i < size; i++) {
        result[i + 1] = arr[i];
    }
    return result;
}

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int* concat(int arr1[], int size1, int arr2[], int size2) {
    int* result = new int[size1 + size2];
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
    return result;
}

int* deleteNegative(int arr[], int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newSize++;
        }
    }
    int* result = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            result[j] = arr[i];
            j++;
        }
    }
    return result;
}
