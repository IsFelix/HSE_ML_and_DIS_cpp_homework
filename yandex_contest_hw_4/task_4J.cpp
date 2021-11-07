/*
 Вам нужно написать функцию sideways_merge, которая сливает две последовательности [first1, last1) и [first2, last2),
 первая из которых отсортирована по возрастанию, а вторая - по убыванию, в одну отсортированную по возрастанию
 последовательность.
 Функцию оформите следующим образом:
 template <typename It, typename OutputIt>
 OutputIt sideways_merge(It first1, It last1, It first2, It last2, OutputIt out);
 Функция должна записывать итоговую последовательность начиная с out. Функция возвращает итератор,
 указывающий за последний скопированный элемент.
*/

template <typename It, typename OutputIt>
OutputIt sideways_merge(It first1, It last1, It first2, It last2, OutputIt out)
{
    --last2;
    --first2;
    while (first1 != last1 and first2 != last2)
        *out++ = (*first1 < *last2) ? *first1++: *last2--;
    while(first1 != last1)
        *out++ = *first1++;
    while(first2 != last2)
        *out++ = *last2--;
    return out;
}
