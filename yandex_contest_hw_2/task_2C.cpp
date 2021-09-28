/*
 Напишите функцию reverse, принимающую ссылку на std::vector<int> и переставляющую объекты массива в обратном порядке.
 Заголовок функции должен быть таким:
 void reverse(std::vector<int>& numbers)

 Примечания
 В вашей программе не должно быть функции main, а должна быть только функция reverse.
 Мы при проверке соберём ваш код с нашей функцией main.
 Примеры ввода-вывода даны только для демонстрации: вам не требуется вводить данные и печатать результат самостоятельно.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverse(vector<int>& numbers) {
    reverse(numbers.begin(), numbers.end());
}

int main () {
    vector<int> A;

    A = {1, 2, 3, 4, 5};

    reverse(A);

}
