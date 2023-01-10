// linear search means the target v want to find will find one by one element..means if my target is 56 then i will go line wise n  
// check the target is there.. first elemet 12 ..second eleemnt 2 ..third elemet 34..etc 

#include<iostream>
using namespace std;
bool linearsearch(int arr[] , int n  , int target)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==target)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[7]={12,2,34,56,76,89,98};
    int target=12;
    bool found = linearsearch(arr , 7 , 67);

    if(found)
    {
        cout<<"target u r finding of is present in an array"<<endl;
    }
    else
    {
        cout<<"target u r finding of is not present in an array"<<endl;
    }
}