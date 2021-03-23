#include "iostream"
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

    float mode = x[index];
    cout << "Mean is : " << mode << "\n";
    return 0;
}

/* 

Enter number of Observations : 6

Enter value of X : 14 36 45 70 105     
145

Enter value of F : 2 5 1 3 12 0

Mean is : 105

*/