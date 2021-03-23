#include "iostream"
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the data :";
    cin >> n;
    cout << endl;

    float a[n + 1], median = 0;
    a[0] = 0;

    cout << "Enter the data : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + (n + 1));

    int number = a[0], size = n + 1;
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i = 1; i < size; i++)
    {
        if (a[i] == number)
        {
            count++;
        }
        else
        {
            if (count > countMode)
            {
                countMode = count;
                mode = number;
            }
            count = 1;
            number = a[i];
        }
    }

    cout << "mode : " << mode << endl;
}