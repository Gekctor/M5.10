#include <iostream>
#include <stdexcept>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0) {
            throw std::runtime_error("Denominator cannot be zero");
        }
    }

    void print() {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    try {
        int num, den;
        std::cout << "Enter numerator: ";
        std::cin >> num;
        std::cout << "Enter denominator: ";
        std::cin >> den;

        Fraction f(num, den);
        f.print();
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}