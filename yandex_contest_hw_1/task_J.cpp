/*
 Пётр решил напечатать таблицу умножения для первых n натуральных чисел.
 Так как их произведение может оказаться очень большим, то Пётр решил заменять результат
 на его остаток при делении на натуральное m.
 Математики бы тут сказали, что должна получиться таблица умножения в кольце Zm.

 Формат ввода
 Даны натуральные числа n и m, не превосходящие 1000.

 Формат вывода
 Напечатайте таблицу, в которой на пересечении i-й строки и j-го столбца будет расположен остаток от деления ij на m.
 Разделяйте соседние элементы в строке символом табуляции.
 В начальной строке и начальном столбце должны быть записаны их номера (смотрите пример ниже).
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n;
    cin >> m;

    for (int p = 0; p <= n; p++) {
        if (p == 0) {
            cout << '\t';
        }
        else {
            cout << p << '\t';
        }
    }

    cout << '\n';

    for (int i = 1; i <= n; i++) {
        cout << i << '\t';
        for (int j = 1; j <= n; j++) {
            cout << (i * j) % m << '\t';
        }
        cout << '\n';
    }
}

