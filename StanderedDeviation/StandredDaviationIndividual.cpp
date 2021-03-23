#include "iostream"
using namespace std;

int main()
{
    int n, SumOfX = 0, SumOfX2 = 0;

    cout << "Enter the size of the data :";
    cin >> n;
    cout << endl;

    float a[n + 1];
    a[0] = 0;

    cout << "Enter the data : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        SumOfX += a[i];
        SumOfX2 += pow(a[i], 2);
    }

    sort(a, a + (n + 1));
    int mean = SumOfX / n;

    int num = (SumOfX2 / n) - pow(mean, 2);
    cout << "Standered Deviation is : " << sqrt(num) << endl;
}
