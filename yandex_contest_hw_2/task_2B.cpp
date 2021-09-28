/*
 Дан двумерный массив и два числа i и j. Поменяйте в массиве столбцы с номерами i и j.
 Оформите решение в виде функции.
 void swap_columns(std::vector<std::vector<int>>& matrix, size_t i, size_t j);

 Примечания
 В вашей программе не должно быть функции main, а должна быть только функция swap_columns.
 Мы при проверке соберём ваш код с нашей функцией main.
 Примеры ввода-вывода даны только для демонстрации: вам не требуется вводить данные и печатать результат самостоятельно.
*/

#include <iostream>
#include <vector>

using namespace std;

void swap_columns(vector<vector<int>>& matrix, size_t i, size_t j) {
    int tmp_val =0;
    for (int p = 0; p < matrix.size(); p++) {
        tmp_val = matrix[p][i];
        matrix[p][i] = matrix[p][j];
        matrix[p][j] = tmp_val;
    }
}

int main () {
    vector<vector<int>> A;

    A = {{0, 3, 2, 4}, {2, 3, 5, 5}, {5, 1, 2, 3}};

    cout << "original matrix" << endl;

    for(int pa = 0; pa < A.size(); pa++) {
        for(int qa = 0; qa < A[pa].size(); qa++) {
            cout << A[pa][qa] << " ";
        }
        cout<<endl;
    }

    cout << "---------" << endl;

    //A = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    //A = {{1}};
    // A = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    //A = {{10, 9, 8}, {7, 6, 5}};
    //A = {{1, 4, 7, 2, 7, 3}};
    //A = {{1}, {4}, {7}, {2}, {7}, {3}};
    //A = {{}};

    cout << "modified matrix" << endl;
    swap_columns(A, 2, 1);

}
