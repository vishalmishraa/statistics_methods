#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int n;

        cout<<"Enter the size of the data :";
        cin>>n;
        cout<<endl;

    float a[n+1],median = 0;
    a[0]=0;
    
        cout<<"Enter the data : ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+(n+1));
    int OddTerm=0,EvenTerm1=0,EvenTerm2=0;
    
    if(n%2 != 0){
        OddTerm = (n+1)/2;
        median = a[OddTerm];
    }else{
        EvenTerm1 = n/2;
        EvenTerm2 = (n/2)+1;
        median = (a[EvenTerm1] + a[EvenTerm2])/2;
    }
        cout<<"median of data : "<<median<<endl;

    
}