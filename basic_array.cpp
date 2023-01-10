#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    cout<<"taking i/p"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"displaying o/p "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;;
    }

    //considering all to b zero
    int num[100]={0};
    cout<<"all zereos"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<endl;;
    }

    //considering 2 values given
    cout<<"2 values given"<<endl; 
    int basic[10]={2 , 4 };
    for(int i=0;i<10;i++)
    {
        cout<<basic[i]<<endl;
    }

    
}