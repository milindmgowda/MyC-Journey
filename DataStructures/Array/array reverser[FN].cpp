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
