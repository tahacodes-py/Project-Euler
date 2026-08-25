#include <iostream>
#include <cmath>
using namespace std;
bool isprime(long long y)
{
    for(long long i=2; i <= sqrt(y); i++)
    {
        if( y % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    long long sum  = 2;
    for(long long i = 3; i <= 2000000; i++)
    {
        if(isprime(i))
        {
            sum = sum +i;
        }
    }
    cout << "sum of all prime numbers is:  " << sum;
}