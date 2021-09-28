/*
 Дана строка, возможно, содержащая пробелы.
 Извлеките из этой строки все символы, являющиеся цифрами, и составьте из них новую строку.
 Решение оформите в виде функции

 std::string ExtractDigits(const std::string& s)

 В вашей программе не должно быть функции main, а должна быть только функция ExtractDigits.
 Мы при проверке соберём ваш код с нашей функцией main.
 Примеры ввода-вывода даны только для демонстрации: вам не требуется вводить данные и печатать результат самостоятельно.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ExtractDigits(const string& s) {
    int count = 0;
    vector<char> s_ch(s.c_str(), s.c_str() + s.size() + 1);
    vector<char> s_mod;

    for (int i = 0; s_ch[i]; i++) {
        if (s[i] != ' ') {
            s_ch[count++] = s_ch[i];
        }
    }
    s_ch[count] = '\0';

    for (int i = 0; s_ch[i]; i++) {
        if (s_ch[i] == '0' || s_ch[i] == '1' || s_ch[i] == '2' || s_ch[i] == '3' || s_ch[i] == '4' ||
            s_ch[i] == '5' || s_ch[i] == '6' || s_ch[i] == '7' || s_ch[i] == '8' || s_ch[i] == '9') {
            s_mod.push_back(s_ch[i]);
        }
        else {
            continue;
        }
    }

    string s_out(s_mod.begin(), s_mod.end());
    return s_out;
}

int main () {
    string s_input;
    s_input = "bfv ytz 4p630nh7gr1";
    ExtractDigits(s_input);
}

