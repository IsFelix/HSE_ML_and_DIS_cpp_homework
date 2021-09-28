/*
 Вам требуется написать на C++ функцию со следующим заголовком:
 std::vector<std::string> Split(const std::string& str, char delimiter);
 Функция должна вернуть вектор строк, полученный разбиением строки str на части
 по указанному символу-разделителю delimiter. Если разделитель встретился в начале или в конце строки,
 то в начале (соответственно, в конце) вектора с результатом должна быть пустая строка.
 Если два разделителя встретились рядом, то пустая строка между ними тоже должна попасть в ответ.
 Для пустой строки надо вернуть пустой вектор.

 Возможно, вам будет полезна функция substr класса std::string,
 выделяющая из строки подстроку с указанной позиции и заданной длины.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Split(const string& str, char delimiter) {
    vector<char> str_ch(str.c_str(), str.c_str() + str.size() + 1);
    vector<string> str_output;

    if (str.size() == 0) {
        str_output.push_back("");
    }
    else {
        int start_pos = 0;
        int substr_len = 0;
        for (int i = 0; str_ch[i]; i++) {
            //cout << "i " << i <<  " " << str_ch[i] <<" start pos " << start_pos << " substr_len " << substr_len << endl;
            if (str_ch[i] == delimiter) {
                str_output.push_back(str.substr(start_pos, substr_len));
                start_pos = i + 1;
                substr_len = 0;
            }
            else {
                substr_len ++;
            }
        }
        str_output.push_back(str.substr(start_pos, substr_len));
    }

    //for (int j = 0; j < str_output.size(); j++) {
    //    cout << str_output[j] << " ";
    //}
    //cout << endl;
}

int main () {
    string S = "sdj-lkj-jhs-";
    char delimiter = '-';

    Split(S, delimiter);
}



