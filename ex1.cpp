#include <iostream>
using namespace std;
void InputArray(int a[100], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int FindEvenNumber(int a[], int &n)
{
    int even = INT_MAX;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            found = true;
            if (even > a[i])
            {
                even = a[i];
            }
        }
    }
    if (found = false)
        return INT_MAX;
    return even;
}
int FindOddNumber(int a[], int &n)
{
    int odd = INT_MIN;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            found = true;
            if (odd < a[i])
            {
                odd = a[i];
            }
        }
    }
    if (found = false)
        return INT_MIN;
    return odd;
}
int main()
{
    int n;
    cout << "The number of elements in array: ";
    cin >> n;
    int a[100];
    InputArray(a, n);
    int even = FindEvenNumber(a, n);
    int odd = FindOddNumber(a, n);
    if (even == INT_MAX)
    {
        cout << "No even number" << "\n";
    }
    else
        cout << even << "\n";
    if (odd == INT_MIN)
    {
        cout << "No odd number";
    }
    else
        cout << odd << endl;
}
