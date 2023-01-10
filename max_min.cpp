#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getMax(int num[] , int n )
{
    //int max = 0 ;
    
    int maxi =0;

    for(int i=0 ; i<n ; i++)
    {
        // if(num[i]>max)
        // {
        //     max=num[i];
        // }

        maxi = max(maxi , num[i]); //this statmenet is predefined function ..above 3 steps in 1 steps (STL)
    }
    return maxi;
}

int getMin(int num[] , int n)
{    
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}

int main()
{
     int num[5]={1 , 2 ,3 ,4 , 6 };
    cout<<getMax(num , 5 )<<endl;
     cout<<getMin(num , 5 )<<endl;

}