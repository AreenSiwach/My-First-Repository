#include <iostream>
using namespace std;

int main()
{
    int arr[10],max,i;
    cout<<"enter the number"<<endl;
    cin>>arr[0];
    max=arr[0];
    for (i=1;i<10;i++)
    {
        cin>>arr[i];
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"max="<<max;
}