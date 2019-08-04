#include <iostream>
using namespace std;
void arrange(int ar[],int ans[],int len)
{
    int first = 0,i=0;
    int last = len-1;
    while(first < last)
    {
        ans[i] = ar[first];i++;first++;
        ans[i] = ar[last];i++;last--;
    }
}
int main() {
	int ar[] = {1,2,3,4,5,6};
	int len = sizeof(ar)/sizeof(ar[0]);
	int ans[6];
	arrange(ar,ans,len);
	for(int i=0;i<6;i++)
	cout<<ans[i]<<" ";
	return 0;
}