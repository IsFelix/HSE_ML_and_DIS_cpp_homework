/*
 Вам даны слова. Выведите в алфавитном порядке список общих букв всех слов.

 Формат ввода
 На вход поступают слова (по одному в строке), состоящие из маленьких латинских букв алфавита. Длина слов не превосходит
 100 символов, а количество слов не превосходит 1000.

 Формат вывода
 Выведите в алфавитном порядке без пробелов список букв, присутствующих в каждом слове.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main33D() {

    string str;
    unordered_set<char> set, prev_set;

    cin >> str;
    for (size_t i = 0; i < str.length(); i++)
        set.insert(str.at(i));

    while (cin >> str) {
        for (size_t i = 0; i < str.length(); i++)
            prev_set.insert(str.at(i));

        prev_set.merge(set);
        prev_set.clear();
    }

    vector<char> vec(set.begin(), set.end());
    sort(vec.begin(), vec.end());

    for (const char &c: vec) cout << c;
    cout << endl;

    return 0;
}