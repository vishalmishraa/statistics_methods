#include "iostream"

using namespace std;

int main()
{

    int n;
    float sumOFfx = 0, sumofF = 0;
    cout << "Enter number of Observation : ";
    cin >> n;

    int r1[n + 1], r2[n + 1], f[n + 1], x[n + 1];
    r1[0] = 0;
    r2[0] = 0;
    x[0] = 0;
    f[0] = 0;

    cout << "Class\t"
         << "Frequency\t\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> r1[i] >> r2[i] >> f[i];
        sumofF += f[i];
    }

    //creating x(mid) = (r1+r2)/2
    cout << "\nX :";
    for (int i = 1; i <= n; i++)
    {
        x[i] = (r1[i] + r2[i]) / 2;
        cout << x[i] << " ";
    }
    cout << endl;

    //cretaing fx
    cout << "\nFX :";
    for (int i = 1; i <= n; i++)

    {
        cout << (f[i] * x[i]) << " ";
        sumOFfx += (f[i] * x[i]);
    }
    cout << endl;

    float mean = sumOFfx / sumofF;
    cout << "\nMean is : " << mean << "\n";

    return 0;
}
/*
OUTPUT

Enter number of Observation : 4
Class   Frequency
0 10 2
10 20 5
20 30 1
30 40 3

X :5 15 25 35 

FX :10 75 25 105 

Mean is : 19.5455
*/