#include "iostream"
using namespace std;

int main()
{

    int n;
    cout << "Enter number of observationns : ";
    cin >> n;

    float r1[n + 1], r2[n + 1], f[n + 1], cf[n + 1];
    r1[0] = 0;
    r2[0] = 0;
    f[0] = 0;
    cf[0] = 0;

    cout << "Class\t"
         << "Frequency\t\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> r1[i] >> r2[i] >> f[i];
        // sumofF+=f[i];
    }

    //creating cf
    for (int i = 1; i <= n; i++)
    {
        // if (i == 0)
        // {
        //     cf[i] = f[i];
        // }
        // else
        // {
        cf[i] = cf[i - 1] + f[i];
        // }
    }

    float l = 0, N = 0, cf1 = 0, fq = 0, h = 0, mf = 0;
    int p1 = 0, p2 = 0;

    N = cf[n];
    mf = N / 2;

    //choosing the class
    for (int i = 1; i <= n; i++)
    {
        if (cf[i] >= mf)
        {
            p1 = i;
            break;
        }
    }

    l = r1[p1];
    cf1 = cf[p1 - 1];
    fq = f[p1];
    h = r2[p1] - r1[p1];

    float median = l + (((N / 2) - cf1) / fq) * h;

    cout << "median is : " << median << "\n";

    //output
    /*
     Enter number of observationns : 6
     Class    Frequency
     0 5 6
     5 10 4
     10 15 5
     15 20 10
     20 25 7
     25 30 2
     median is : 16
     */
}
