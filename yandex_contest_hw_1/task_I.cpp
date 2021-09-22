/*
 Напишите программу, вычисляющую остаток от деления заданного «длинного» числа на заданную цифру.

 Формат ввода
 В первой строке задана цифра K (1≤K≤9). Во второй строке задано натуральное число N, состоящее из не более чем 250 цифр.

 Формат вывода
 Выведите остаток от деления N на K.
 */

#include <iostream>
#include <string>

using namespace std;

int mainI () {
    int k;
    string N;

    cin >> k;
    cin >> N;

    int remainder = 0;

    for (int i = 0; i < N.size(); i++) {
        int d = N[i] - '0';

        remainder = (remainder * 10 + d) % k;
    }

    cout << remainder;
}