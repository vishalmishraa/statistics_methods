#include<iostream>
using namespace std;

int main()
{
	int l,u;
	int total=0;
	cout<<"Enter range of numbers: "<<endl;
	cin>>l>>u;

	for(int i=l+1; i<u; i++)
	{

		int count=0;
		for(int j=2;j<= i/2;j++)
		{
			if(i%j==0)
			{  
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
			total++;
		}
	}
	cout<<endl<<"total numbers: "<<total<<endl;

}