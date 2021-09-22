/*
 Известный алгоритм Soundex (https://ru.wikipedia.org/wiki/Soundex) определяет,
 похожи ли два английских слова по звучанию. На вход он принимает слово и заменяет его
 на некоторый четырёхсимвольный код. Если коды двух слов совпадают, то слова, как правило, звучат похоже.
 Вам требуется реализовать этот алгоритм. Он работает так:
 1. Первая буква слова сохраняется.
 2. В остальной части слова:
    2.1. буквы, обозначающие, как правило, гласные звуки: a, e, h, i, o, u, w и y — отбрасываются;
    2.2. оставшиеся буквы (согласные) заменяются на цифры от 1 до 6,
         причём похожим по звучанию буквам соответствуют одинаковые цифры:
         1: b, f, p, v
         2: c, g, j, k, q, s, x, z
         3: d, t
         4: l
         5: m, n
         6: r
 3. Любая последовательность одинаковых цифр сокращается до одной такой цифры.
 4. Итоговая строка обрезается до первых четырёх символов. Если длина строки меньше требуемой,
 недостающие символы заменяются знаком 0.
 Примеры:
 аmmonium → ammnm → a5555 → a5 → a500
 implementation → implmnttn → i51455335 → i514535 → i514

 Формат ввода
 На вход подаётся одно непустое слово, записанное строчными латинскими буквами. Длина слова не превосходит 20 символов.

 Формат вывода
 Напечатайте четырёхбуквенный код, соответствующий слову.
*/
#include <iostream>

using namespace std;

int main() {
    string word, temp_word, temp_word_cleared, coded_word;

    cin >> word;
    cin.ignore(20, '\n');

    for (int i = 0; i <= word.length(); ++i) {
        //cout << temp_word << '\n';
        if (i == 0) {
            temp_word.append(1, word[i]);
        }
        else {
            if (word[i] == 'a' ||
                word[i] == 'e' ||
                word[i] == 'h' ||
                word[i] == 'i' ||
                word[i] == 'o' ||
                word[i] == 'u' ||
                word[i] == 'w' ||
                word[i] == 'y') {
                continue;
            }
            else if (word[i] == 'b' ||
                     word[i] == 'f' ||
                     word[i] == 'p' ||
                     word[i] == 'v') {
                temp_word.append(1, '1');
            }
            else if (word[i] == 'c' ||
                     word[i] == 'g' ||
                     word[i] == 'j' ||
                     word[i] == 'k' ||
                     word[i] == 'q' ||
                     word[i] == 's' ||
                     word[i] == 'x' ||
                     word[i] == 'z') {
                temp_word.append(1, '2');
            }
            else if (word[i] == 'd' ||
                     word[i] == 't') {
                temp_word.append(1, '3');
            }
            else if (word[i] == 'l') {
                temp_word.append(1, '4');
            }
            else if (word[i] == 'm' ||
                     word[i] == 'n') {
                temp_word.append(1, '5');
            }
            else if (word[i] == 'r') {
                temp_word.append(1, '6');
            }
            else {
                continue;
            }
        }
    }

    for (int i = 1; i <= temp_word.length(); ++i) {
        //cout << i << '\t' << temp_word << '\n';
        if (temp_word[i-1] == temp_word[i]) {
            continue;
        }
        else {
            temp_word_cleared.append(1, temp_word[i-1]);
        }
    }

    if (temp_word_cleared.length() >= 4) {
        coded_word = temp_word_cleared.substr(0,4);
    }
    else {
        int t_lenght = temp_word_cleared.length();
        for (int i = 0; i < 4 - t_lenght; ++i) {
            temp_word_cleared.append(1, '0');
        }
        coded_word = temp_word_cleared;
    }
    cout << coded_word << '\n';
}