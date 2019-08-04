#include<iostream>
using namespace std;
void rev(int ar[],int start,int end)
{
    while(start<end)
    {
        int temp = ar[end];
        ar[end] = ar[start];
        ar[start] = temp;
        end--;start++;
    }
}
void rotate(int ar[],int times)
{
    int n = sizeof(ar)/sizeof(ar[1]);
    rev(ar,0,times-1);
    rev(ar,times,n-1);
    rev(ar,0,n-1);
}
int main()
{
    int ar[]= {1,2,3,4,5,6};
    rotate(ar,3);
    for(int i=0;i<6;i++)
    cout<<ar[i]<<" ";
}