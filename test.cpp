#include "histogram.h"

#include <cassert>

void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}

void test_negative()
{
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
    return;
}

void test_odinak()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 1, 1}, min, max);
    assert(min == 1);
    assert(max == 1);
    return;
}

void test_one()
{
    double min = 0;
    double max = 0;
    find_minmax({1}, min, max);
    assert(min == 1);
    assert(max == 1);
    return;
}

void test_void()
{
    double min = 5;
    double max = 7;
    find_minmax({}, min, max);
    assert(min == 5);
    assert(max == 7);
    return;
}

void test1()
{
    vector <size_t> z = {20, 28, 52};
    vector <size_t> y = procent (25, {5,7,13});
    assert(z == y);
    return;
}

void test2()
{
    vector <size_t> z = {100};
    vector <size_t> y = procent (1, {2});
    assert(z == y);
    return;
}

int
main() {
    test_positive();
    test_negative();
    test_odinak();
    test_one();
    test_void();
    test1();
}
