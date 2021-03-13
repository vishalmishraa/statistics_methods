#include "iostream"
#include "algorithm"
#include "math.h"
using namespace  std;

int main(){
    int n;
    cout<<"\nEnter number of observations : ";
    cin>>n;cout<<endl;
    
    float x[n+1],x1 =0,mean=0;
          x[0]=0;

    cout<<"Enter X :";
    for (int i = 1; i <=n; i++)
    {
        /* code */
        cin>>x[i];
        x1+=x[i];
    }
    cout<<endl;
    
    mean = x1/(float)n;

    //now find absolute deviation
    float ab[n+1],absDev=0;
          ab[0]=0;

    for (size_t i = 1; i <=n; i++)
    {
        absDev += abs(x[i]-mean);
    }

    float MeanDev = absDev/n;
    cout<<"Mean Deviation is : "<<MeanDev<<endl;   



    return 0;
}