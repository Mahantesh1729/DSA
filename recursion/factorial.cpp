#include <iostream>

using namespace std;

int fib(int n);

int main()
{
       int n;
       cin >> n;
       cout << fib(n);
}

int fib(int n)
{
       if(n <= 1) return 1;

       return n * fib(n - 1);
}