#include "iostream"
// #include "algorithm"
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

    // sort(a, a + (n + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n+1; j++)
        {
            if (a[i] > a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }


    int OddTerm = 0, EvenTerm1 = 0, EvenTerm2 = 0;

    if (n % 2 != 0)
    {
        OddTerm = (n + 1) / 2;
        median = a[OddTerm];
    }
    else
    {
        EvenTerm1 = n / 2;
        EvenTerm2 = (n / 2) + 1;
        median = (a[EvenTerm1] + a[EvenTerm2]) / 2;
    }
    cout << "median of data : " << median << endl;
}