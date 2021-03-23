#include "iostream"
#include "math.h"
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the size of the observations :";
    cin>>n;
    cout<<endl;
    
    int r1[n+1],r2[n+1],f[n+1],cf[n+1];
    r1[0]=0;r2[0]=0;f[0]=0;cf[0]=0;
    
    cout<<"class\t"<<"Freq\t\n";
    for (int i = 1; i <= n; i++)
    {
        cin>>r1[i]>>r2[i]>>f[i];
    }
    
    //find cf
    for(int i=1;i<=n;i++)
    {
        if(i==0)
        {
            cf[i]=f[i];
        }
        else
        {
            cf[i]= cf[i-1]+f[i];
        }
    }
    
    int N =cf[n];
    
    
    //finding Q1
    double Q1cal = (double)(N)/4;
    int Q1_term=0;
   
    
    //organiuzing the value of terms according to CF term
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q1cal) {
            Q1_term = i;
            break;
        }
    }
    
    int l=0,ucf=0,h=0,fq=0;
    l = r1[Q1_term];
    ucf = cf[Q1_term-1];
    h= (r2[Q1_term]-r1[Q1_term]);
    fq = f[Q1_term];
    
    
    
    double Q1 = l + ((Q1cal-ucf)/fq) * h;
    
    //finding q3
    double Q3cal = 3 * ((double)N)/4;
    int Q3_term=0;
    
    //organiuzing the value of terms according to CF term
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q3cal) {
            Q3_term = i;
            break;
        }
    }
    
    l = r1[Q3_term];
    ucf = cf[Q3_term-1];
    h= (r2[Q3_term]-r1[Q3_term]);
    fq = f[Q3_term];
    
    
   
    double Q3 = l + (((3*((double)N/4))-ucf)/fq) * h;
    //quartile deviatio = q3-q1/2
    float QD = (Q3-Q1)/2;
    
    cout<<"Quartile Deviation is : "<<QD<<endl;
    
    
}

//output
/*
 Enter the size of the observations :7

 class    Freq
  0 10 4
  10 20 8
  20 30 11
  30 40 15
  40 50 12
  50 60 6
  60 70 3
 Quartile Deviation is : 11.3542
 */
