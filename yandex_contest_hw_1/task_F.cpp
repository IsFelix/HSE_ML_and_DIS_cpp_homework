/*
 Вася хочет поменять свой пароль от электронной почты, потому что боится, что его ящик мог быть взломан.
 По правилам новый пароль должен удовлетворять таким ограничениям:
    состоять из символов таблицы ASCII с кодами от 33 до 126;
    быть не меньше 8 символов и не длиннее 14;
    из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы —
        в пароле должны присутствовать не менее трёх любых.
 Помогите Васе написать программу, которая проверит, что его новый пароль годится.

 Формат ввода
 На входе дана одна строка — новый Васин пароль.
 Формат вывода
 Выведите YES, если Васин пароль удовлетворяет требованиям, и NO в противном случае.

 Примечания
 Вы можете воспользоваться функциями из заголовочного файла
 cctype (http://en.cppreference.com/w/cpp/header/cctype), или реализовать самостоятельно их аналоги.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int mainF() {
    string password;
    int upper_character_cnt, lower_character_cnt, digit_character_cnt, punct_character_cnt;

    cin >> password;

    if (password.length() >= 8 && password.length() <= 14) {

        upper_character_cnt = 0;
        lower_character_cnt = 0;
        digit_character_cnt = 0;
        punct_character_cnt = 0;
        for (int i=0; i <= password.length(); ++i) {
            if (int(password[i]) >= 33 && int(password[i]) <= 126) {
                if (isupper(password[i]) != 0) {
                    upper_character_cnt += 1;
                }
                else if (islower(password[i]) != 0) {
                    lower_character_cnt += 1;
                }
                else if (isdigit(password[i]) != 0) {
                    digit_character_cnt += 1;
                }
                else if (ispunct(password[i]) != 0) {
                    punct_character_cnt += 1;
                }
                else{
                    cout << "NO";
                }
            }
        }
        if (upper_character_cnt * lower_character_cnt * digit_character_cnt * punct_character_cnt != 0) {
            cout << "YES";
        }
        else if (upper_character_cnt == 0 && (lower_character_cnt != 0 && digit_character_cnt != 0 && punct_character_cnt != 0)) {
            cout << "YES";
        }
        else if (lower_character_cnt == 0 && (upper_character_cnt != 0 && digit_character_cnt != 0 && punct_character_cnt != 0)) {
            cout << "YES";
        }
        else if (digit_character_cnt == 0 && (upper_character_cnt != 0 && lower_character_cnt != 0 && punct_character_cnt != 0)) {
            cout << "YES";
        }
        else if (punct_character_cnt == 0 && (upper_character_cnt != 0 && lower_character_cnt != 0 && digit_character_cnt != 0)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
}
