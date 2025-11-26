#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1;
    a = b++;
    cout << a << b;
    b = ++a;
    cout << a << b;
    return 0;
}


// Error : No  error
// Output : 1222;