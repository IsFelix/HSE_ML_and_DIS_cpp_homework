/*
 Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
 Создайте структуру Point и сохраните исходные данные в массиве структур Point.

 Формат ввода
 Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
 затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки.
 Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.

 Формат вывода
 Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
*/

#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int X;
    int Y;
    int Distance_p2;
};

int main () {
    int n, x, y, p2_distance;
    vector<Point> points_distance;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        p2_distance = x*x + y*y;
        points_distance.push_back({x, y, p2_distance});
    }

    for(int i = 1; i < points_distance.size(); i++)
    {
        for(int j = 0; j < points_distance.size()-i; j++)
        {
            if(points_distance.at(j).Distance_p2 > points_distance.at(j+1).Distance_p2)
            {
                Point temp = points_distance.at(j);
                points_distance.at(j) = points_distance.at(j+1);
                points_distance.at(j+1) = temp;
            }
        }
    }

    for (int j = 0; j < points_distance.size(); j++) {
        cout << points_distance[j].X << " " << points_distance[j].Y << endl;;
    }
}
