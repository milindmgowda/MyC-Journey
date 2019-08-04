#include <iostream>
using namespace std;
void revar(int ar[],int start,int end)
{
    while(start<end)
    {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;end--;
    }
}
void rotator(int ar[],int d,int n)
{
    revar(ar,0,d-1);
    revar(ar,d,n-1);
    revar(ar,0,n-1);
}
void printer(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main() {
	int ar[]={1,2,3,4,5,6,7};
	int n=sizeof(ar)/sizeof(ar[1]);
	rotator(ar,2,n);
	printer(ar,n);
	return 0;
}
