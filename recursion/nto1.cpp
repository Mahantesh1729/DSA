#include <iostream>

using namespace std;

void print_1_to_n(int n);

int main()
{
       int n;
       cin >> n;
       print_1_to_n(n);
}

void print_1_to_n(int n)
{
       if(n == 1)
       {
              cout << 1 << "\n";
              return;
       }
       cout << n << "\n";

       return print_1_to_n(n - 1);

}