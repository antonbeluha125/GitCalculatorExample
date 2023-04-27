
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
    if (b == 0)
    {
        return 0;
    }

    return a / b;
}

int main()
{
    cout << "Hello from the simple c++ calculator!\n";
    cout << "TO DO Test the methods...\n";
}
