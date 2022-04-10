#include <iostream>
using namespace std;

int main()
{
    int arr[5],sum,avg,i;

    cout<<"enter the number"<<endl;
    cin>>arr[0];
    sum=arr[0];
    for (i=1;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg = sum/5;
    cout<<"avg="<<avg;
    cout<<"sum="<<sum;
}