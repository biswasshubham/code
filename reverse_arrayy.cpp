//reverse an array means to swap it ..    L-20 SERIES
#include<iostream>
using namespace std;
void reverse(int arr[] , int size )
{   
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start] , arr[end]);
        {
            start++;
            end--;
        }
    }
}
void printreversearray(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int size ;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the elements::"<<endl;
    for(int i=0;i<size;i++)
    {    
       
        cout<<arr[i]<<endl;
    }
    reverse(arr , size);
    printreversearray(arr  ,size);
    
}