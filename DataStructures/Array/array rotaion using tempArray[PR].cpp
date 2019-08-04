#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],d;
	for(int i=0;i<n;i++)
	cin>>a[i] ;
	cin>>d;
	d=d%n;
	int temp[d];
	for(int i=0;i<d;i++)
	temp[i] = a[i];
	for(int i=0;i<n-d;i++)
	a[i]=a[i+d];
	for(int i=1;i<=d;i++)
	a[n-i]=temp[d-i];
	for(int i = 0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}