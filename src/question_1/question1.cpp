#include "question1.h"
#include <vector>
#include <sstream>

std::string get_fib_sequence(int n) {
    if (n < 1) return "";

    std::vector<int> fib{0, 1};
    for (int i = 2; i <= n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    std::ostringstream result;
    for (int i = 0; i <= n; ++i) {
        result << fib[i];
        if (i != n) result << " "; 
    }

    return result.str();
}

bool test_config() {
    return true;
}