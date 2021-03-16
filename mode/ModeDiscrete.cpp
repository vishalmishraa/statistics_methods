#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int n;
    float SumOfF = 0, SumOfFx = 0;
    cout << "Enter number of Observations : ";
    cin >> n;
    cout << "\n";

    int x[n + 1], f[n + 1], fx[n + 1];
    x[0] = 0;
    f[0] = 0;
    fx[0] = 0;

    cout << "Enter value of X : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    cout << "\n";

    cout << "Enter value of F : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
        SumOfF += f[i];
    }
    cout << "\n";

    //search most freq value
    float mf = *max_element(f, f + n);
    int index = distance(f, find(f, f + n, mf));

    float mode = x[index];
    cout << "Mean is : " << mode << "\n";
    return 0;
}