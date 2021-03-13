#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the data :";
    cin>>n;cout<<endl;

    float x[n+1],f[n+1],x2[n+1],fx[n+1],x_mean[n+1],x_mean2[n+1];
          x[0]=0;f[0]=0;x2[0]=0;fx[0]=0;x_mean[0]=0;x_mean2[0] = 0;


    //variable for sums of values
    float f1=0,fx1=0,f_X_mean_2=0;

    cout<<" X \t F\t\n";
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i]>>f[i];
        f1+=f[i];
        fx[i] = (x[i] * f[i]);
        fx1+=fx[i];
    }

    float mean = fx1/f1;

    //now create x - mean
    for (int i = 1; i <=n; i++)
    {
        x_mean[i] = (x[i] - mean);
        //fiving value x - mean squaree
        x_mean2[i] = pow(x_mean[i],2);
        //multiplying f * x - mean power 2
        f_X_mean_2+= (f[i] * x_mean2[i]);
    }
    
    
    float meanDeviation = sqrt(f_X_mean_2/f1);

    cout<<"Mean deviation is : "<<meanDeviation<<endl;
    
}
//output
/*
 Enter the size of the data :5

  X      F
 2 5
 3 4
 4 3
 5 7
 6 1
 Mean deviation is : 1.29904
 */
