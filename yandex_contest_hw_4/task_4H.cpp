/*
 Вам надо написать свою реализацию алгоритма fill_range. Заголовок функции должен быть таким:
 template< class It, class T >
 void fill_range(It first, It last, const T& value)
 Функция должна присваивать всем элементам на полуинтервале [first, last) значение value.
*/

template< class It, class T >
void fill_range(It first, It last, const T& value)
{
    while (first != last) {
        *first = value;
        ++first;
    }
}
