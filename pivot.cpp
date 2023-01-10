                            // L-14 (BINARY SEARCH)
                            // Q.) PIVOT ELEMENT IN ANA ARRAY..
                            //or v can say that sorted n rotated 

#include<iostream>
using namespace std;
int getPivot(int arr[] , int n)
{
    int start = 0;
    int end = n-1 ; 
    int mid = (start+end)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid = (start+end)/2;
    }
    return mid ;
}

int main()
{
    int arr[5]={7,9,1,2,3};
    cout<<"pivot element present in index is::"<<getPivot(arr , 5)<<endl;
}