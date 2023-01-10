#include<iostream>
using namespace std;
void printarray(int num[] , int size)
{
    cout<<"printing .."<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<num[i]<<endl;
    }
}

int main()
{
   int num[8]={2 , 5 , 6 };
   int size=8;
   printarray(num , 8); //In function it is necessary to give size. Especially in array.
   int num1[4]={0};
   printarray(num1 , 4);
} 
