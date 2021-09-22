/*
 Дана строка, состоящая из строчных латинских букв и пробелов.
 Проверьте, является ли она палиндромом без учета пробелов (например, "аргентина манит негра").

 Формат ввода
 На вход подается 1 строка длины не более 100, содержащая пробелы. Подряд может идти произвольное число пробелов.

 Формат вывода
 Необходимо вывести yes, если данная строка является палиндромом, и no в противном случае.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int mainH() {
    string input_string, clear_string, output_string;

    getline(cin, input_string);

    for (int i = 0; i <= input_string.length(); ++i) {
        if (isspace(input_string[i]) != 0) {
            continue;
        }
        else {
            clear_string.append(1, input_string[i]);
        }
    }

    for (int i = 1; i <= clear_string.length(); ++i) {
        output_string.append(1, clear_string[clear_string.length() - i]);
    }

    clear_string.erase(clear_string.length() - 1, 1);
    output_string.erase(0, 1);

    if (clear_string == output_string) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
