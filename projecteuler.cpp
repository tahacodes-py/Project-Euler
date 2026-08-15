#include <iostream>
#include <cmath>
using namespace std;
bool is_palindrom(int num)
{
    int count = 0;
    int i = num;
    while (i != 0)
    {
        i = i/10;
        count++;
    }
    int h = count-1;
    int k = num;
    int reversed = 0;
    for(int l = 0; l< count ; l++)
    {
        reversed = reversed + ((k%10)*pow(10,h));
        k = k/10;
        h--; 
    }
    if(reversed == num){
        return true;
    }
    else 
    {
        return false;
    }
}
int main ()
{
    int num;
    int palindrom  = 0;
    for (int i = 100; i <= 999; i++)
    {
        for(int j = 100 ; j <=  999 ; j++)
        {
            num = i*j;
            if(is_palindrom(num) == true)
            {
                if(palindrom < num)
                {
                    palindrom = num;
                }
            }
            else 
            {
                continue;
            }
        }
    }
    if(palindrom == 0)
    {
        cout << "NO palindrom found" << endl;
    }
    else 
    {
        cout << endl;
        cout << "the largest palindrom that is product of 2 3 digit number is:  " << palindrom;
    }
}