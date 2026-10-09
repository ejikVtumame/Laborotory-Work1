#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int MAX_SIZE = 100;

int readInt(int minValue = INT_MIN, int maxValue = INT_MAX);

char readChar();

int inputArray(int arr[]);

void printArray(int arr[], int size);

int sumLastNums(int x);

bool isPositive(int x);

bool isUpperCase(char x);

bool isDivisor(int a, int b);

int lastNumSum(int a, int b);

double safeDiv(int x, int y);

std::string makeDecision(int x, int y);

bool sum3(int x, int y, int z);

std::string age(int x);

void printDays(int x);

std::string reverseListNums(int x);

int pow(int x, int y);

bool powFits(int x, int y);

bool equalNum(int x);

void leftTriangle(int x);

void guessGame();

int findLast(int arr[], int size, int x);

int* add(int arr[], int size, int x, int pos);

void reverse(int arr[], int size);

int* concat(int arr1[], int size1, int arr2[], int size2);

int* deleteNegative(int arr[], int size, int& newSize);

#endif
