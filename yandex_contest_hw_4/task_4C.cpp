/*
 Вам надо написать свою реализацию стандартного алгоритма remove_copy_if. Заголовок функции должен быть таким:
 template <typename InIter, typename OutIter, typename Predicate>
 OutIter remove_copy_if(InIter first, InIter last, OutIter out, Predicate f);
 Функция должна копировать из подпоследовательности [first; last) в последовательность, начинающуюся с out, те элементы,
 которые не удовлетворяют предикату f. Функция возвращает итератор, указывающий за последний скопированный элемент.
 */

template <typename InIter, typename OutIter, typename Predicate>
OutIter remove_copy_if(InIter first, InIter last, OutIter out, Predicate f)
{
    for (; first != last; ++first) {
        if (!f(*first)) {
            *out++ = *first;
        }
    }
    return out;
}