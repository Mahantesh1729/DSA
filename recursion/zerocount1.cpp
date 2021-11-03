#include <iostream>

using namespace std;

int zeroCount(int n);

int main()
{
       int n;
       cin >> n;
       int ans =  zeroCount(n);

        cout << ans;
}

int zeroCount(int n)
{
       if(n % 10 == n)
       {
              if(n == 0) return 1;
              return 0;
       }
       int temp = (n % 10 == 0) + zeroCount(n / 10); 
       return temp;
}