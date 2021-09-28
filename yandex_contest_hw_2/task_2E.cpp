/*
 Напишите функцию std::string common_suffix(const std::string& a, const std::string& b),
 возвращающую наибольший общий суффикс двух данных строк.
 (Суффиксом строки называется всякая подстрока этой строки, на которую исходная строка заканчивается.
 Например, суффиксы слова apple — пустая строка, e, le, ple, pple, apple.
 Для слов apple и tuple наибольшим общим суффиксом является ple.)

 Примечания
 В вашем решении должна быть только эта функция. Мы сами протестируем её работу с помощью своей функции main.
 */

#include <iostream>
#include <string>

using namespace std;

string common_suffix(const string& a, const string& b) {
    string suffix;

    int stop_cnt = 0;

    for (int i = 0; a[i]; i++) {
        string a_temp = a.substr(i, a.size() - i);
        for (int j = 0; b[j]; j++) {
            string b_temp = b.substr(j, b.size() - j);
            if (stop_cnt != 0) {
                break;
            }
            else if (a_temp == b_temp) {
                stop_cnt ++;
                suffix = b_temp;
            }
            else {
                continue;
            }
        }
        if (stop_cnt != 0) {
            break;
        }
    }
    cout << suffix;
}

int main() {
    string a, b;

    a = "apjksdhfkjhasdfkjhasdfkhjplehasd";
    b = "sdafasdfsadfhasd";

    common_suffix(a, b);
}