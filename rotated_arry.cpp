#include<iostream>
using namespace std;
int main()
{
    int k=2;
    int arr[6]={12 , 23 , 34 , 45 , 56 , 67 };
    int n=6;
    for(int i=0 ; i<n ; i++)
    {
        arr[(i+k)%n]=arr[i];
    }
}