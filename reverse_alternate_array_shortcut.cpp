    //alternate yani ki ek chd ek ko swap karo

#include<iostream>
using namespace std ;
void reverseArray(int arr[] , int n )
{
    for(int i =0 ; i<n ;i+=2) //2 se aage badana padega bcoa alternate hai 
    {
        int start = 0 ;
        int end = n-1 ;
        swap(arr[i] , arr[i+1]);
        
    }
}
int main()
{
    int arr[6] = {1 , 2 , 3  , 4 , 5 , 7};
    int n =6 ;
    reverseArray(arr , n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}