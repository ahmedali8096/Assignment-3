#include <iostream>
using namespace std;

const int n = 10;

// Function that take input

void inputarray(int ar[])
{
    cout << "Enter " << n << " values of array";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
}

// Function for sorting array

void sortArray(int ar[])
{
    int temp;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
            }
        }
    }
}

// Function for output

void output(int ar[])
{
    cout << "Your array in assending order = ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << "  ";
    }
}

// now main function

int main()
{
    int ar[n];

    inputarray(ar);
    sortArray(ar);
    output(ar);
}
