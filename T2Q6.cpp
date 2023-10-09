#include<iostream>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() 
{
    int count = 0;
    for (int i = 2; count < 5; i++) 
    {
        if (isPrime(i)) 
        {
            cout << i << " ";
            count++;
        }
    }
    return 0;
}