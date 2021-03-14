#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the Data :" << endl;
    cin >> n;

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

    //Now find the most frequent value
    float mf = *max_element(f, f + n);
    int index = distance(f, find(f, f + n, mf));

    //now implement the formula
    float mode = 0, l = 0, f0 = 0, f1 = 0, f2 = 0, h = 0;

    l = a[index];
    h = b[index] - a[index];
    f1 = f[index];
    f0 = f[index - 1];
    f2 = f[index + 1];

    mode = l + (((f1 - f0) / (2 * f1 - f0 - f2)) * h);

    cout << "Mode of a continues series is : " << mode << endl;

    return 0;
}
//output
/*
Enter the size of the Data :
6
class   frequency
20 25 7
25 30 3
30 35 11
35 40 5
40 45 2
45 50 9
Mode of a continues series is : 32.8571
*/