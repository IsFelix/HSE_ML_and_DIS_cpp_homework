/*
 Вам надо написать свою реализацию стандартного алгоритма unique. Заголовок функции должен быть таким:
 template <typename Iter>
 Iter unique(Iter first, Iter last);
 Функция должна переупорядочить элементы последовательности [first; last) так, чтобы подряд идущие одинаковые элементы
 в ней не встречались. Функция возвращает итератор за последний элемент итоговой последовательности. Что останется в
 пределах от этого вернувшегося итератора до старого last — не важно.
*/

template <typename Iter>
Iter unique(Iter first, Iter last)
{
    if (first == last)
        return last;

    Iter result = first;
    while (++first != last) {
        if (!(*result == *first) && ++result != first) {
            *result = std::move(*first);
        }
    }
    return ++result;
}
