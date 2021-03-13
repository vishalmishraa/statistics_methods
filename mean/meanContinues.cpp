#include "iostream"
#include "algorithm"
using namespace std;


int main(){
    
    int n;
    float sumOFfx=0,sumofF=0;
    cout<<"Enter number of Observation : ";
    cin>>n;

    int r1[n+1],r2[n+1],f[n+1],x[n+1],fx[n+1];
        r1[0]=0;r2[0]=0;x[0]=0;f[0]=0;fx[0]=0;

    cout<<"Class\t"<<"Frequency\t\n";
    for (int i = 1; i <=n; i++)
    {
        cin>>r1[i]>>r2[i]>>f[i];
        sumofF+=f[i];
    }

    //creating x(mid) = (r1+r2)/2
    for (int i = 1; i <= n; i++)
    {
        x[i] = (r1[i]+r2[i])/2;
    }

    //cretaing fx
    for (int i = 1; i <= n; i++)
    {
        fx[i] = f[i]*x[i];
        sumOFfx+=fx[i];
    }

    float mean = sumOFfx/sumofF;
    cout<<"Mean is : "<<mean<<"\n";
   
    return 0;
}