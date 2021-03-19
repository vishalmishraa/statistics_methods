#include "iostream"
#include "algorithm"
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the size of the data :";
    cin >> n;
    cout << endl;

    float x[n + 1], f[n + 1], x2[n + 1], fx[n + 1], x_mean[n + 1], x_mean2[n + 1];
    x[0] = 0;
    f[0] = 0;
    x2[0] = 0;
    fx[0] = 0;
    x_mean[0] = 0;
    x_mean2[0] = 0;

    //variable for sums of values
    float f1 = 0, sumof_FX = 0, f_X_mean_2 = 0;

    cout << " \n Enter the values of X : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    cout << endl;
    cout << " \n Enter the values of F : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
        f1 += f[i];
        sumof_FX += (f[i] * x[i]);
    }

    float mean = sumof_FX / f1;

    //now create x - mean
    for (int i = 1; i <= n; i++)
    {
        x_mean[i] = (x[i] - mean);
        //finding value x - mean squaree
        x_mean2[i] = pow(x_mean[i], 2);
        //multiplying f * x - mean power 2
        f_X_mean_2 += (f[i] * x_mean2[i]);
    }

    float meanDeviation = sqrt(f_X_mean_2 / f1);

    cout << "\nMean deviation is : " << meanDeviation << endl;
}

/*

OUTPUT

Enter the size of the data :5

 
 Enter the values of X : 2 3 4 5 6 

 
 Enter the values of F : 5 4 3 7 1

Mean deviation is : 1.29904
 */
