#include <string>
#include <vector>

void integer_power() {
    int base = 2, exp = 8;
    int power = 1;
    for (int i = 0; i < exp; ++i) power *= base;
    (void)power;
}

void geometric_sum() {
    int acc = 0;
    int term = 1;
    for (int i = 0; i < 8; ++i) { acc += term; term *= 2; }
    (void)acc;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

extern "C" int verdant_quartz();
extern "C" void eager_haven();
extern "C" void still_thorn();

int main() {
    integer_power();
    geometric_sum();
    double_value();
    vector_reverse();
    eager_haven();
    still_thorn();
    return verdant_quartz();
}
