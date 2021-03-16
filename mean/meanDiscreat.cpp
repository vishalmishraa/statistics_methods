#include "iostream"
using namespace std;

int main()
{
    int n;
    float SumOfF = 0, SumOfFx = 0;
    cout << "Enter number of Observations : ";
    cin >> n;
    cout << "\n";

    int x[n + 1], f[n + 1];
    x[0] = 0;
    f[0] = 0;

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

    //creating fx;
    for (int i = 1; i <= n; i++)
    {
        SumOfFx += x[i] * f[i];
    }

    float mean = SumOfFx / SumOfF;
    cout << "Mean is : " << mean << "\n";
    return 0;
}

/* OUTPUT
Enter number of Observations : 5

Enter value of X : 2 6 3 5 1

Enter value of F : 3 5 6 2 8

Mean is : 3
 */