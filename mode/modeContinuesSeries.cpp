#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the Data : ";
    cin >> n;
    cout << endl;

    float a[n + 1], b[n + 1], f[n + 1];
    a[0] = 0;
    b[0] = 0;
    f[0] = 0;
    cout << "class\t"
         << "frequency\t" << endl;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> f[i];
    }

    //finding most frequent value
    float mf = f[1];
    for (int i = 0; i < n; i++)
    {
        if (f[i] > mf)
        {
            mf = f[i];
        }
    }

    //finding index;
    int index;
    for (int i = 1; i < (n + 1); i++)
    {
        if (f[i] == mf)
        {
            index = i;
        }
    }

    //now implement the formula
    float mode = 0, l = 0, f0 = 0, f1 = 0, f2 = 0, h = 0;

    l = a[index];
    h = b[index] - a[index];
    f1 = f[index];
    f0 = f[index - 1];
    f2 = f[index + 1];

    mode = l + (((f1 - f0) / (2 * f1 - f0 - f2)) * h);

    cout << "\nMode of a continues series is : " << mode << endl;

    return 0;
}
//output
/*
Enter the size of the Data : 7

class   frequency
0 5 3
3 10 7
10 15 15
15 20 30
20 25 20
25 30 10
30 35 5

Mode of a continues series is : 18
*/