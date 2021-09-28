/*
 Вам требуется написать функцию Join со следующим заголовком:
 std::string Join(const std::vector<std::string>& tokens, char delimiter);
 Функция должна вернуть строку, полученную склейкой элементов вектора через указанный разделитель.
 Например, Join({"What", "is", "your", "name?"}, '_') должна вернуть строку "What_is_your_name?".

 Примечания
 Сдайте в систему код функции с необходимыми директивами #include.
 Ваша функция будет протестирована с помощью нашей программы.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <vector>
#include <string>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    std::string s;
    for (size_t i = 0; i < tokens.size(); i++) {
        s += tokens[i];
        if (i != tokens.size() - 1) {
            s += delimiter;
        }
    }
    return s;
}

