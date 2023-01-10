#include<iostream>
using namespace std;
//reverse alternate array means ek swap 1 n 2 element  , then swap 3 n 4 element  , then swap 5 n 6 element with each other.
//algorithm:- 1) traverse the array using for loop ..if v will do i++ then we will swap all the elements but we dont want that..
//               we want to swap alternate array for that we will do i=i+2  means after swaping 1st element with 2nd element we will not go to 3rd element we will go to 4th element.
//            2)then w will check (i+1 < n )--if it is then swap the 1st element with 2nd element.

// where i---> index(0,1,2,3,4,5) ; n--->size which is 6..

void reverseAlternate(int arr[] , int n )
{
    for(int i=0 ; i<n ; i+=2)
    {
        if(i+1 < n) //n=6(size of an array)...
        {
            swap(arr[i] , arr[i+1]) ; 
        }
    }
}
//printing function
void printarray(int arr[] , int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[6]={1, 2 , 3 , 4 , 5 , 6};
    reverseAlternate(arr , 6);
    printarray(arr , 6);
}