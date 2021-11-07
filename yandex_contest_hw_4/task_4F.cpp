/*
 Вам надо написать свою реализацию стандартного алгоритма reverse_copy. Заголовок функции должен быть таким:
 template <typename InIter, typename OutIter>
 OutIter reverse_copy(InIter first, InIter last, OutIter out);
 Функция должна копировать в обратном порядке элементы последовательность [first; last) в последовательность,
 начинающуюся с out. Функция должна вернуть итератор, указывающий за последний скопированный элемент.
*/

template <typename InIter, typename OutIter>
OutIter reverse_copy(InIter first, InIter last, OutIter out)
{
    while (first != last) {
        *(out++) = *(--last);
    }
    return out;
}
