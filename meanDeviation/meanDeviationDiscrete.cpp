#include "iostream"
#include "algorithm"
#include "math.h"
using namespace  std;

int main(){
    int n;
    cout<<"\nEnter number of observations : ";
    cin>>n;cout<<endl;
    
    float x[n+1],f[n+1],fx[n+1],fx1 =0,f1=0,mean=0;
          x[0]=0;f[0]=0;fx[0]=0;

    cout<<" X\t"<<"F\t\n";
    for (int i = 1; i <=n; i++)
    {
        /* code */
        cin>>x[i]>>f[i];
        f1+=f[i];
    }
    cout<<"\n";

    //creating FX;
    for (int i = 1; i <= n;i++)
    {
        fx[i] = x[i]*f[i];
        fx1+=fx[i];

    }
    
    
    mean = fx1/f1;

    //now find absolute deviation
    float absDev[n+1],F_absDev=0;
    absDev[0]=0;
    for (int i = 1; i <=n; i++)
    {
        absDev[i] = abs(x[i] - mean);
        F_absDev += (f[i] * absDev[i]);
    }

    float MeanDev = F_absDev/f1;
    cout<<"Mean Deviation is : "<<MeanDev<<endl;



    return 0;
}

//output
/*
 Enter number of observations : 6

  X    F
 1 3
 2 2
 3 1
 8 4
 7 7
 4 3

 Mean Deviation is : 2.435
 */
