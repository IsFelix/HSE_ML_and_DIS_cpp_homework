/*
 Вам надо написать свою реализацию стандартного алгоритма any_of. Заголовок функции должен быть таким:
 template <typename It, typename Pred>
 bool any_of(It first, It last, Pred f);
 Функция должна вернуть true, если в последовательности [first; last) существует элемент, для которого функция f
 возвращает истину. В противном случае функция должна вернуть false.
 */

using namespace std;

template<typename It, typename Pred>
bool any_of(It first, It last, Pred f)
{
    for (; first != last; ++first) {
        if (f(*first)) {
            return true;
        }
    }
    return false;
}