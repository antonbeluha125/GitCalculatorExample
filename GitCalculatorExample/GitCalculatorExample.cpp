
#include <iostream>
using namespace std;

float plusMethod(float a, float b)
{
    return a + b;
}

float minusMethod(float a, float b)
{
    return a - b;
}

float multipleMethod(float a, float b)
{
    return a * b;
}

float divideMethod(float a, float b)
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
    cout << "First Commit in TestBranch\n";

    plusMethod(1, 2);
    minusMethod(1, 2);
    multipleMethod(1, 2);
    divideMethod(1, 2);
    cout << "TO DO Test the methods...\n";
}
