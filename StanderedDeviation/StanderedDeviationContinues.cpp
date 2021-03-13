#include "iostream"
#include "algorithm"
#include "math.h"
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the observations : ";
    cin>>n;cout<<endl;
    
    float r1[n+1],r2[n+1],f[n+1],x[n+1],dx[n+1],dx_dash[n+1],dx_dash_sqr[n+2];
    r1[0]=0;r2[0]=0;f[0]=0;x[0]=0;dx[0]=0;dx_dash[0]=0;dx_dash_sqr[0]=0;

    //variable for sums;
    float sumofF=0,sum_f_dx_dash_sqr = 0, sum_f_dx_dash = 0;
    
    cout<<"class\t"<<"Freq\t\n";
    for (int i = 1; i <= n; i++)
    {
        cin>>r1[i]>>r2[i]>>f[i];
        sumofF+=f[i];
        x[i] =  (r1[i]+r2[i])/2;

    }

    int AsumMean = x[n/2];
    
    //creting dx; dx = x(mid) - Asumed mean;
    //cretaing dx dash  = dx/class interval;
    //class inter val
    int c = r2[2]-r1[2];
        for (int i = 1; i <= n; i++)
        {
            /* code */
            dx[i] = (x[i]-AsumMean);
            dx_dash[i] = dx[i]/c;
            dx_dash_sqr[i] = pow(dx_dash[i],2);
            sum_f_dx_dash_sqr += (f[i] * dx_dash_sqr[i]);
            sum_f_dx_dash += (f[i] * dx_dash[i]);
        }
    
    float standeredDeviation = sqrt(((sum_f_dx_dash_sqr)/sumofF) - (pow(((sum_f_dx_dash)/sumofF),2))) * c;
    
    cout<<"Standered Deviation is : "<<standeredDeviation<<endl;

    return 0;

}
//output
/*
Enter the size of the observations : 8

class   Freq
0 10 5
10 20 10 
20 30 20 
30 40 40
40 50 30
50 60 20
60 70 10
70 80 4
Standered Deviation is : 15.691
*/
