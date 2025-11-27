#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, max=0, min=9999;
    cout << "Enter 10 Number: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        sum = sum + num;
        if(max<num) {
        	max=num;
		}
		if(min>num) {
		min=num;
		}
    }
    
    cout <<"\nsum of numbers is\t"<< sum;
    
    cout <<"\nmax of these number\t"<< max;
    
    cout <<"\nmin of these number\t"<< min;
    return 0;
}