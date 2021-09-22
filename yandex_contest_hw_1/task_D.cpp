/*
 По данному числу n вычислите сумму 1 - 1/2 + 1/3 - 1/4 +...+((-1) ** (n+1))/n
 Операцией возведения в степень пользоваться нельзя. Алгоритм должен иметь сложность O(n).
 Попробуйте также обойтись без использования инструкции if.

 Формат ввода
 Вводится натуральное число.

 Формат вывода
 Выведите ответ на задачу.
 */

#include <iostream>

using namespace std;

int main4() {
    int n;
    cin >> n;
    double sum = 0.0;
    double sign = 1.0;
    for (int i = 1; i <= n; i++) {
        sum += sign / i;
        sign = -sign;
    }
    cout << sum;
}