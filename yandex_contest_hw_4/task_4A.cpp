/*
 Напишите функицю void delete_zeroes(std::vector<int>& numbers), которая принимает вектор и удаляет из него нули,
 а ненулевые элементы оставляет в прежнем порядке. В реализации нельзя использовать циклы. Пользуйтесь функциями
 стандартной библиотеки и функциями вектора.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void delete_zeroes(vector<int>& numbers) {
    numbers.erase(remove(numbers.begin(), numbers.end(), 0), numbers.end());
}