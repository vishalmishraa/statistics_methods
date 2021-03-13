#include "iostream"
#include "algorithm"
#include "math.h"
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the size of the observations :";
    cin>>n;
    cout<<endl;
    
    int a[n+1],f[n+1],cf[n+1];
    a[0]=0;f[0]=0;cf[0]=0;
    
    cout<<"Enter X : ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter F : ";
    for (int i = 1; i <= n; i++)
    {
        cin>>f[i];
    }
    
    //sorting x and f;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[i] > a[j])
            {
                int temp =  a[i];
                a[i] = a[j];
                a[j] = temp;
                
                int tempf =  f[i];
                f[i] = f[j];
                f[j] = tempf;
                
            }
        }
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
    double Q1cal = ((double)N+1)/4;
    double Q1int , Q1Dec;
    
    Q1Dec = modf(Q1cal,&Q1int);
    
    //organiuzing the value of terms according to CF term
    
    int Q1int_term1=0;
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q1int) {
            Q1int_term1 = i;
            break;
        }
    }
    
    int Q1int_term2 = (Q1int+1);
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q1int_term2) {
            Q1int_term2 = i;
            break;
        }
    }
    
    double Q1 = a[(int)Q1int_term1] + Q1Dec * (a[(int)Q1int_term2] - a[(int)Q1int_term1]);
    
    //finding q3
    double Q3cal = 3 * ((double)N+1)/4;
    double Q3int , Q3Dec;
    
    Q3Dec = modf(Q3cal,&Q3int);
    
    //organiuzing the value of terms according to CF term
    int Q3int_term1=0;
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q3int) {
            Q3int_term1 = i;
            break;
        }
    }
    
    int Q3int_term2 = (Q3int+1);
    for (int i=1; i<=n; i++) {
        if (cf[i]>=Q3int_term2) {
            Q3int_term2 = i;
            break;
        }
    }
    
    double Q3 = a[(int)Q3int_term1] + Q3Dec * (a[(int)Q3int_term2] - a[(int)Q3int_term1]);
    
    //quartile deviatio = q3-q1/2
    float QD = (Q3-Q1)/2;
    
    cout<<"Quartile Deviation is : "<<QD<<endl;
    
    
}

//output
/*
 Enter the size of the data :5

 Enter X : 5 9 2 10 15
 Enter F : 2 2 1 5 3
 Quartile Deviation is : 2.75
 */
