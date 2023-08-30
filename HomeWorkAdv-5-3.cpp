#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Functor_test {
    int sum{};
    int count{};
public:
    void operator()(int& val) {
        if (val % 3 == 0) {
            sum += val;
            count++;
        }
    }

    int get_sum() {
        return sum;
    }

    int get_value() {
    return count;
    }
};

int main() {
    std::vector<int> vec { 4,1,3,6,25,54 };
    Functor_test ft;
    ft = std::for_each(vec.begin(), vec.end(), ft);
    std::cout << ft.get_sum() << std::endl;
    std::cout << ft.get_value() << std::endl;

    std::list<int> list {4,3,56,7,65,443,234,54,33,76,1,0,9,88,7,65};
    ft = std::for_each(list.begin(), list.end(), ft);
    std::cout << ft.get_sum() << std::endl;
    std::cout << ft.get_value() << std::endl;
}