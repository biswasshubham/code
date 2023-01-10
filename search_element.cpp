#include<iostream>
using namespace std;
int search(int num[] , int target , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        if(num[i]==target)
        {
            return i ;
            //break;
        }
    }
 return -1;
}

int main()
{
    int target ;
    cin>>target;
    int num[]={1 , 2 , 3 , 4 , 5 , 6 , 7 , 99};
    int n=8;
   int result= search(num , 8 , target);

   if(result==-1)
   {
    cout<<"not present"<<endl;
   }  
   else{
    cout<<"present at index"<<result<<endl;
   }
}
