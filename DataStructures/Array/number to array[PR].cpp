int lenNum(int n)
{
    int number_of_digits = 0;

    do {
     ++number_of_digits; 
     n /= 10;
    } while (n);
return number_of_digits;
}
void num2ar(int ar[],int n,int len)
{
    int i=0;
    while(i<len)
    {
        int temp = n%10;
        ar[len-i-1] = temp;
        n = n/10;
        i++;
    }
}