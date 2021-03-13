#include<iostream>

using namespace std;

void display(int arr[],int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int n;
	cout<<"Enter total no of item: "<<endl;
	cin>>n;

//taking input of X
cout<<"enter X"<<endl;
	int arrx[n];
	for(int i=0;i<n;i++)
	{
		cin>>arrx[i];
	}

//taking input of F
cout<<"enter F"<<endl;
	int arrf[n];
	for(int i=0;i<n;i++)
	{
		cin>>arrf[i];
	}


	  // Array Sorting - Asensding Order
	//sorting X and F
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arrx[i] > arrx[j])
            {
               int temp =  arrx[i];
                arrx[i] = arrx[j];
                arrx[j] = temp;

                int tempf =  arrf[i];
                arrf[i] = arrf[j];
                arrf[j] = tempf;

            }
        }
    }

    //cummulative frequency 
    int arrcf[n];
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			arrcf[i]=arrf[i];
		}
		else
		{
		arrcf[i]= arrcf[i-1]+arrf[i];
		}
	}

	//displaying sorted items
	cout<<"\nX :";
	display(arrx,n);

	cout<<"\nF :";
	display(arrf,n);

	cout<<"\nCF:";
	display(arrcf,n);

	float sumF= arrcf[n-1];

	float median= (sumF + 1) / 2;
	
	int key;
	for(int i=0;i<n;i++)
	{
		if(arrcf[i]>median)
		{
			key=i;
			break;
		}
	}
	cout<<endl;
	cout<<"\nMedian: \n"<<arrx[key];
	return 0;
}