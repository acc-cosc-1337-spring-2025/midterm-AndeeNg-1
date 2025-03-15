#include "question4.h"

int get_fib_number(int n)
{
    if (n <= 0)
        return 0;

    if (n == 1)
        return 1;

    int prev = 0, curr = 1;
    for (int i = 2; i <= n; ++i)
    {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}


bool test_config()
{
    return true;
}