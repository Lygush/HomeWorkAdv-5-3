#include <iostream>
#include <vector>

class Functor_test {
    int sum{};
    int count{};
    std::vector<int>(vector);
public:
    Functor_test(std::vector<int>(vec)) : vector(vec) {};

    bool operator()(int& val) {
        if (val % 3 == 0) {
            return true;
        }
        return false;
    }

    int get_sum() {
        for (auto i: vector) {
             if (operator()(i)) {
                sum += i;
             };
        }
        return sum;
    }

    int get_value() {
        for (auto i: vector) {
             if (operator()(i)) {
                count++;
             };
        }
    return count;
    }
};

int main() {
    Functor_test ft(std::vector<int>{2,3,6,9,10,23,7,12,9});
    std::cout << ft.get_sum() << std::endl;
    std::cout << ft.get_value();
}