#include "iostream"
#include "math.h"
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
        for (int j = i + 1; i < n + 1; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    //finding Q1
    double Q1cal = ((double)n + 1) / 4;
    double Q1int, Q1Dec;

    Q1Dec = modf(Q1cal, &Q1int);

    double Q1 = a[(int)Q1int] + Q1Dec * (a[(int)Q1int + 1] - a[(int)Q1int]);

    //finding q3
    double Q3cal = 3 * ((double)n + 1) / 4;
    double Q3int, Q3Dec;

    Q3Dec = modf(Q3cal, &Q3int);

    double Q3 = a[(int)Q3int] + Q3Dec * (a[(int)Q3int + 1] - a[(int)Q3int]);

    //quartile deviatio = q3-q1/2
    float QD = (Q3 - Q1) / 2;

    cout << "Quartile Deviation is : " << QD << endl;
}

//output
/*
Enter the size of the data :8

Enter the data : 5 8 15 20 25 30 40 
18
Quartile Deviation is : 9.5
*/