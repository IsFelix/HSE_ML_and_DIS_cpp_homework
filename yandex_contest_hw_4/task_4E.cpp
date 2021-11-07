/*
 Вам надо написать свою реализацию стандартного алгоритма set_difference. Заголовок функции должен быть таким:
 template <typename InIter1, typename InIter2, typename OutIter>
 OutIter set_difference(InIter1 first1, InIter1 last1, InIter2 first2, InIter2 last2, OutIter out);
 Под словом set (множество) здесь понимается не математическое множество и даже не контейнер std::set, а просто
 отсортированная последовательность. Функция должна сформировать элементы разности множеств [first1, last1) и
 [first2, last2) и записать их в последовательность, начинающуюся с out. Исходные интервалы предполагаются
 отсортированными. Каждый элемент считается со своей кратностью. Функция возвращает итератор, указывающий за последний
 записанный элемент.
 */

template <typename InIter1, typename InIter2, typename OutIter>
OutIter set_difference(InIter1 first1,
                       InIter1 last1,
                       InIter2 first2,
                       InIter2 last2,
                       OutIter out)
{
    while (first1 != last1) {
        if (first2 == last2) return std::copy(first1, last1, out);

        if (*first1 < *first2) {
            *out++ = *first1++;
        } else {
            if (! (*first2 < *first1)) {
                ++first1;
            }
            ++first2;
        }
    }
    return out;
}
