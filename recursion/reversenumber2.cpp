#include <iostream>
#include <cmath>

using namespace std;

int rev1(int n);
int rev2(int n, int d);

int main()
{
       int n;
       cin >> n;
       cout << rev1(n);
}

int rev1(int n)
{
       return rev2(n, log10(n) + 1);
}

int rev2(int n, int d)
{
       if(n == 0) return 0;
       int rem = n % 10;
       return rem * pow(10, d - 1) + rev2(n / 10, d - 1);
}