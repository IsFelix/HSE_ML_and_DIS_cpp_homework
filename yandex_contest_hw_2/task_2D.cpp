/*
 Дан двумерный массив размером n × m (n, m < 1000).
 Симметричный ему относительно главной диагонали массив называется транспонированным к данному.
 Он имеет размеры m × n: строки исходного массива становятся столбцами транспонированного,
 столбцы исходного массива становятся строками транспонированного.
 Для данного массива постройте транспонированный массив.

 Решение оформите в виде функции:
 std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& matrix).

 Примечания
 В вашей программе не должно быть функции main, а должна быть только функция transpose.
 Мы при проверке соберём ваш код с нашей функцией main. Примеры ввода-вывода даны только для демонстрации:
 вам не требуется вводить данные и печатать результат самостоятельно.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    vector<vector<int>> transposed_matrix(matrix[0].size(), vector<int>());

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            transposed_matrix[j].push_back(matrix[i][j]);
        }
    }
    return transposed_matrix;
}

    //return transposed_matrix;

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
    transpose(A);
}