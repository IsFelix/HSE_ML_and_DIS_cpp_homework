/*
 По номеру дня недели (нумерация с единицы) выведите его сокращенное название.
 Названия должны быть такими: mon, tue, wed, thu, fri, sat, sun

 Формат ввода
 Число от 1 до 7.

 Формат вывода
 Название дня недели из трех маленьких латинских букв.
*/

#include <iostream>
#include <map>

int main2() {
    int day_num;

    std::cin >> day_num;
    std::map <int, std::string> day_num_day_name = {{ 1, "mon" },
                                                    { 2, "tue" },
                                                    { 3, "wed" },
                                                    { 4, "thu" },
                                                    { 5, "fri" },
                                                    { 6, "sat" },
                                                    { 7, "sun" }};

    auto day_name = day_num_day_name.find(day_num);
    std::cout << day_name->second;
}