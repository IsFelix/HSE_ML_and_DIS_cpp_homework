/*
 Вам надо написать реализацию алгоритма swap_segments. Заголовок функции должен быть таким:
 template<class It1, class It2>
 It2 swap_segments(It1 first1, It1 last1, It2 first2)
 Функция должна менять местами значения подпоследовательности [first1; last1) и подпоследовательности такой же длины,
 начинающейся с итератора first2. Функция возвращает итератор, указывающий за последний элемент скопированный
 в последовательность с началом в first2.
*/

#include <algorithm>

template<class It1, class It2>
It2 swap_segments(It1 first1, It1 last1, It2 first2)
{
    while (first1 != last1) {
        std:iter_swap(first1++, first2++);
    }
    return first2;
}
