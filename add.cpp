#include<iostream>
using namespace std;
int main()
{   int n =4;
    int m=5;
    int arr1[4]={ 2 , 3 , 4 , 5 };
    int arr2[5]={10,20,30,40,50};
    int sum=0;
    for(int i=0;i<n;i++)
    {   
        //int sum=0;
        sum=sum+arr1[i];
        cout<<sum<<endl;

    }
     for(int i=0;i<m;i++)
    {   
        //int sum=0;
        sum=sum+arr2[i];
        cout<<sum<<endl;

    }
}