                                      //L-20 SERIES (BINARY SEARCH)

#include<iostream>
using namespace std;
void mergeArray(int arr1[] , int n , int arr2[] , int m  , int arr3[]) // n Where N is the size of the array 1.And where M is the size of the array 2.
{
    int i = 0; // arr1 ka starting index 
    int j=0; // arr2 ka starting index 
    int k=0;

    while(i<n && j<m) //Comparing I with its size and J with its size(m).
    {
        if(arr1[i] < arr2[j]) //Comparing array 1.starting index with array 2 starting index.
        {
            arr3[k] = arr1[i];
            k++; 
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n) //Just copying the extra elements of array 1.
    {
       arr3[k]=arr2[j];
            k++;
            j++; 
    }
    while(j<m)//Just copying the extra elements of array 2
    {
        arr2[k] = arr2[j];
        k++;
        j++;
    }
    
}
//Just for printing.
void print(int ans[] , int n )
    {
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<endl;
        }
    }

int main()
{ 
    int arr1[4]={1 , 3 , 5 , 7};
    int arr2[5]={0 , 2 , 4 , 6 , 8};
    int arr3[9];
    mergeArray(arr1, 4 , arr2 , 5 , arr3);
    print(arr3 , 9);
}