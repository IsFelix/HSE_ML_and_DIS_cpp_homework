/*
 Напишите функцию max_element, которая принимает на вход матрицу и возвращает индексы
 (номера строки и столбца) первого вхождения максимального элемента при рассмотрении элементов матрицы построчно.
 Заголовок функции должен быть таким:
 std::pair<size_t, size_t> max_element(const std::vector<std::vector<int>>& matrix)

 Примечания
 В вашей программе не должно быть функции main, а должна быть только функция max_element.
 Мы при проверке соберём ваш код с нашей функцией main. Примеры ввода-вывода даны только для демонстрации:
 вам не требуется вводить данные и печатать результат самостоятельно.
*/

#include <iostream>
#include <vector>

using namespace std;

pair<size_t, size_t> max_element(const vector<vector<int>>& matrix) {
    int maximum = matrix[0][0];
    int row = 0;
    int col = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] > maximum) {
                maximum = matrix[i][j];
                row = i;
                col = j;
            }
            else {
                continue;
            }
        }
    }
    return {row, col};
}

int main () {
    vector<vector<int>> A;

    A = {{0, 3, 2, 4}, {2, 3, 5, 5}, {5, 1, 2, 3}};
    //A = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    //A = {{1}};
    // A = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    //A = {{10, 9, 8}, {7, 6, 5}};
    //A = {{1, 4, 7, 2, 7, 3}};
    //A = {{1}, {4}, {7}, {2}, {7}, {3}};
    //A = {{}};
    max_element(A);
}