//  Find errors
#include <iostream>
using namespace std;
int main()
{
    int num1 = 11, num2 = 10;

    if (num1 < num2)
        cout << "num1 is the smallest";
        num1 = num2;     
    else
      cout << "num2 is smallest";
    return 0;
}

// Error: 
// b.cpp:11:5: error: 'else' without a previous 'if' else
//  it means 'if' is not connected with 'else' because of no "{}" with if
// 'if' should have curly braces '{}'
// Output: none