#include <iostream>

using namespace std;

void print_both(int n);

int main()
{
       int n;
       cin >> n;
       print_both(n);
}

void print_both(int n)
{
       if (n == 0)
       {
              return;
       }

       cout << n << "\n";
       print_both(n - 1);
       cout << n << "\n";
}