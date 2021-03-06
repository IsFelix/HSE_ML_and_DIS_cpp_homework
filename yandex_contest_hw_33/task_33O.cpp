/*
 Рассмотрим последовательность целых чисел длины n. По ней с шагом 1 двигается «окно» длины k, то есть сначала
 в «окне» видны первые k чисел, на следующем шаге в «окне» уже будут находиться k чисел, начиная со второго,
 и так далее до конца последовательности. Требуется для каждого положения «окна» определить минимум в нём.

 Формат ввода
 В первой строке входных данных содержатся два натуральных числа n и k (n ≤  150000, k ≤ 10000, k ≤  n) –
 длины последовательности и «окна», соответственно. На следующей строке находятся n чисел – сама последовательность.

 Формат вывода
 Выходые данные должны содержать n - k + 1 строк – минимумы для каждого положения «окна».
*/

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main33O() {
    vector<int> all_set;

    int n, k, num;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> num;
        all_set.push_back(num);
    }

    for (int i = 0; i < (n - k  + 1); i++) {
        int min_val = *min_element(all_set.begin() + i, all_set.end() - (n - k - i));
        cout << min_val << "\n";
    }
}