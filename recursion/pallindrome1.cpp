#include <iostream>
#include <cmath>

using namespace std;

bool pallin(int n);
int rev(int n);
int rev1(int n, int d);

int main()
{
       int n;
       cin >> n;
       cout << pallin(n);
}

bool pallin(int n)
{
       return n == rev(n);
}

int rev(int n)
{
       return rev1(n, log10(n) + 1); 
}

int rev1(int n, int d)
{
       if(n == 0)
       return 0;
       int rem = n % 10;

       return rem * pow(10, d - 1) + rev1(n / 10, d - 1);
}