#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x1;
    std::cin >> x1;
    double e = 1;
    if (x1 < 1 / sqrt(2)) {
        double x2 = 1 / (2 * sqrt(2)) * std::exp(x1 * x1 - 0.5);
        if (std::abs(x2 - x1) < 0.001) {
            std::cout << std::fixed << std::setprecision(3) << x2;
            return 0;
        }
        while (e >= 0.001) {
            x1 = x2;
            x2 = 1 / (2 * sqrt(2)) * std::exp(x1 * x1 - 0.5);
            e = std::abs(x2 - x1);
        }
        std::cout << std::endl;
        std::cout << std::fixed << std::setprecision(3) << x2;
        return 0;
    } else if (x1 > 1 / sqrt(2)) {
        double x2 = sqrt(log(2 * sqrt(2) * x1) + 0.5);
        if (std::abs(x2 - x1) < 0.001) {
            std::cout << std::fixed << std::setprecision(3) << x2;
            return 0;
        }
        while (e >= 0.001) {
            x1 = x2;
            x2 = sqrt(log(2 * sqrt(2) * x1) + 0.5);
            e = std::abs(x2 - x1);
        }
        std::cout << std::endl;
        std::cout << std::fixed << std::setprecision(3) << x2;
        return 0;
    }
}
