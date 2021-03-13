#include "iostream"
#include "algorithm"
#include "math.h"
using namespace std;

int main(){
    int n;
    cout<<"\nEnter number of observations : ";
    cin>>n;cout<<endl;

    float r1[n+1],r2[n+1],f[n+1],fx[n+1],x[n+1],absDev[n+1],F_absDev[n+1];
          r1[0]=0;r2[0]=0;f[0]=0;fx[0]=0,x[0]=0;absDev[0]=0;F_absDev[0]=0;
        
    //taking vartiales for sum of these values
    float f1=0,fx1=0,F_absDev1=0;

          cout<<"Class\tFreq"<<endl;
          for (int i = 1; i <= n; i++)
          {
              cin>>r1[i]>>r2[i]>>f[i];
              f1+=f[i];

          }

    //creating x using x mid;
    for(int i=1;i<=n;i++){
        x[i] = (r2[i]+r1[i])/2;
    }
    
    //calculating fx
    for (int i = 1; i <=n; i++)
    {
        /* code */
        fx1+= (f[i] * x[i]);
    }
    
    float mean = 0;
    mean = fx1/f1;

    //calculating absolute deviation
    for (int i = 1; i <= n ; i++)
    {
        absDev[i] = abs(x[i]-mean);
        //calculating f * absloute deviation (f of absDev)
         F_absDev1 += f[i] * absDev[i];
    }

    float meanDeviation = F_absDev1 / f1;
    cout<<"Mean deviation is : "<<meanDeviation<<endl;    

    return 0;
}
//output
/* Enter number of observations : 4

Class   Freq
0 10 3
10 20 1
20 30 2
30 40 4
Mean deviation is : 11.6
*/