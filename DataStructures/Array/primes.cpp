#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int isprime(int n,vector<int> primes,int count)
{
    int flag=1;
    float sq = sqrt(n);
    for(int i=0;i<count;i++)
    {
        if(n%primes[i]==0)
        {
            flag=0; 
            break;
        }
        else if(primes[i] > sq && flag == 1)
        {
            break;
        }
    }
    return flag;
}
int allprime(int n)
{
    int r=1,sum=5;
    vector<int> primes;
    int count = 2;
    primes.push_back (2);
    primes.push_back(3);
    for(int i=4;i<n;i++)
    {
        
        if(isprime(i,primes,count))
        {
            primes.push_back(i);
            sum+=i;
            count++;
        }
    }
    return sum;
    
}

int main() {
cout<<allprime(2000000);
return 0;
}