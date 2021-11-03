#include <iostream>

using namespace std;

int zeroCount(int n);
int helper(int n, int c);

int main()
{
       int n;
       cin >> n;

       cout << zeroCount(n);
}

int zeroCount(int n)
{
       if(n == 0) return 1;

       return helper(n, 0);
}

int helper(int n, int c)
{
       if(n == 0)
       {
              return c;
       }
       if(n % 10 == 0)
       {
              return helper(n / 10, c + 1);
       }
       
       return helper(n / 10, c);
}