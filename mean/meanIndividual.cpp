#include "iostream"
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "Enter the size of the data :";
    cin >> n;
    cout << endl;
    float a[n];
    cout << "Enter the data : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    float mean = sum / n;
    cout << "mean of the data : " << mean << endl;
}