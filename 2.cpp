#include <iostream>
using namespace std;
void InputArray(int a[100], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void swap(int a[], int &n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int Findk(int a[100], int &n, int &k)
{
    if (k <= 0 || k > n)
    {
        return -1;
    }
    return a[k - 1];
}
int main()
{
    int n;
    cout << "The number of elements in array: ";
    cin >> n;
    int k;
    cout << "k = ";
    cin >> k;
    int a[100];
    InputArray(a, n);
    swap(a, n);
    int x = Findk(a, n, k);
    if (x == -1)
    {
        cout << "Not found ";
    }
    else
        cout << x;
}
