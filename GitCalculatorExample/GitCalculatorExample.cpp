
#include <iostream>
using namespace std;

float plus(float a, float b)
{
    return a + b;
}

float minus(float a, float b)
{
    return a - b;
}

float multiple(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

float getMax(float a, float b)
{
    return a > b ? a : b;
}

float getMin(float a, float b)
{
    return a < b ? a : b;
}

bool isZero(float a)
{
    return a == 0 ? true : false;
}

int main()
{
    cout << "Hello from the simple c++ calculator!\n";
}
