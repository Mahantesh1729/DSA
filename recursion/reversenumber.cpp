#include <iostream>

using namespace std;

void reverse(int n);

int sum = 0;

int main()
{
       int n;
       cin >> n;
       reverse(n);
       cout << sum << "\n";
}

void reverse(int n)
{
       if(n == 0)
       return;
       sum *= 10;
       int rem = n % 10;
       sum += rem;
       reverse(n / 10);
}