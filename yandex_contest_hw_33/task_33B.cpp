/*
 Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово
 YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.

 Формат ввода
 Вводится список чисел. Все числа списка находятся на одной строке.

 Формат вывода
 Выведите ответ на задачу.
*/

#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

int main33B() {
    string s_str;
    set <int> S_set;

    int num = 0;
    getline(cin, s_str);
    istringstream i(s_str);

    while (i >> num)
        if (S_set.count(num) == 0) {
            cout << "NO" << "\n";
            S_set.insert(num);
        }
        else
            cout << "YES" << "\n";
    return 0;
}