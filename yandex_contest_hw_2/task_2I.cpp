/*
 Определите структуру "Студент" с полями имя, фамилия, дата, месяц и год рождения.
 Создайте вектор из таких структур, заполните его из входных данных и затем по запросам выведите нужные поля.

 Формат ввода
 Первая строка содержит одно целое число N от 0 до 104 - число студентов.
 Далее идут N строк, каждая из которых содержит две строки длиной от 1 до 15 символов -
 имя и фамилия очередного студента, и три целых числа от 0 до 109 - день, месяц и год рождения.
 Следующая строка содержит одно целое число M от 0 до 104 - число запросов.
 Следующие M строк содержат строку длиной от 1 до 15 символов - запрос,
 и целое число от 0 до 109 - номер студента (нумерация начинается с 1).

 Формат вывода
 Для запроса вида "name K", где K от 1 до N, выведите через пробел имя и фамилию K-го студента.
 Для запроса вида "date K", где K от 1 до N, выведите через точку число, месяц и год рождения K-го студента.
 Для остальных запросов выведите "bad request".
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string First_name;
    string Last_name;
    int Birth_day;
    int Birth_month;
    int Birth_year;
};

int main() {
    int N, M;
    int b_date, b_month, b_year, k;
    string f_name, l_name, request;
    vector<Student> student_vec;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> f_name >> l_name >> b_date >> b_month >> b_year;
        student_vec.push_back({f_name, l_name, b_date, b_month, b_year});
    }

    cin >> M;
    for (int j = 0; j < M; j++) {
        cin >> request >> k;
        if (request == "name" && k > 0 && k <= student_vec.size()) {
            cout << student_vec[k - 1].First_name << " " << student_vec[k - 1].Last_name << endl;
        }
        else if (request == "date" && k > 0 && k <= student_vec.size()) {
            cout << student_vec[k - 1].Birth_day << "." << student_vec[k - 1].Birth_month << "." << student_vec[k - 1].Birth_year << endl;
        }
        else {
            cout << "bad request" << endl;
        }
    }
    return 0;
}

