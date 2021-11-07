/*
 Напишите программу, которая будет по списку поступающих и университетов определять, кто именно поступит в каждый
 университет. В каждом университете есть лимит мест, у каждого абитуриента есть определенный набранный балл и список
 предпочтений. Распределение происходит следующим образом: абитуриенты сортируются по убыванию баллов, при равенстве -
 по возрастанию даты рождения и, затем, по фамилии и имени. Далее каждый абитуриент по очереди зачисляется в первый
 университет из его списка, в котором еще остались места (если таких нет - не зачисляется никуда).

 Формат ввод
 Первая строка содержит одно целое число N от 1 до 104 - количество университетов. Следующие N строк содержат строку их
 латинских символов длиной от 5 до 15 символов и число от 0 до 109 - название и максимальное количество студентов для
 очередного университета. Следующая строка содержит целое число M от 0 до 104 - количество абитуриентов.
 Далее идут M строк, каждая из которых содержит две строки длиной от 5 до 15 символов - имя и фамилию очередного
 абитурента, затем 3 целых числа от 0 до 109 - число, месяц и год его рождения, целое число от 0 до 109 - балл студента,
 целое число k от 0 до 200 - количество университетов, в которые абитуриент готов поступать, и k названий университетов
 из списка в первой части входа.

 Формат вывода
 Для каждого университета в алфавитном порядке выведите его название, затем через табуляцию - имена и фамилии
 поступивших в него студентов, отсортированных по фамилии, имени и дате рождения.
*/

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

struct Student {
    string name;
    string surname;
    int day;
    int month;
    int year;
    int score;
    vector<string> prior_univers;
};

bool cmp(const Student& first, const Student& second) {
    if (first.score == second.score) {
        if (first.year == second.year) {
            if (first.month == second.month) {
                if (first.day == second.day) {
                    if (first.surname == second.surname) {
                        return first.name < second.name;
                    }
                    return first.surname < second.surname;
                }
                return first.day < second.day;
            }
            return first.month < second.month;
        }
        return first.year < second.year;
    }
    return first.score > second.score;
}

bool cmp_abiturs(const Student& first, const Student& second) {
    if (first.surname == second.surname) {
        if (first.name == second.name) {
            if (first.year == second.year) {
                if (first.month == second.month) {
                    return first.day < second.day;
                }
                return first.month < second.month;
            }
            return first.year < second.year;
        }
        return first.name < second.name;
    }
    return first.surname < second.surname;
}

int main33I()
{
    int n, m, k;
    string univer_name;
    cin >> n;
    unordered_map<string, int> univers(n);
    map<string, vector<Student>> ans;
    for (int i = 0; i < n; i++) {
        cin >> univer_name >> m;
        univers.insert({univer_name, m});
        ans[univer_name] = vector<Student>();
    }
    cin >> m;
    vector<Student> students(m);
    for (Student& student : students) {
        cin >> student.name >> student.surname >> student.day >> student.month
            >> student.year >> student.score >> k;
        if (k) {
            student.prior_univers.resize(k);
            for (string& univer: student.prior_univers) {
                cin >> univer;
            }
        }
    }
    sort(students.begin(), students.end(), cmp);

    for (const Student& student: students) {
        for (const string& univer: student.prior_univers) {
            if (univers[univer]) {
                ans[univer].push_back(student);
                --univers[univer];
                break;
            }
        }
    }

    for (auto& [univer, abiturs]: ans) {
        cout << univer;
        sort(abiturs.begin(), abiturs.end(), cmp_abiturs);

        for (auto &abitur : abiturs) {
            cout << "\t" << abitur.name << " " << abitur.surname;
        }
        cout << endl;
    }

    return 0;
}