#include <iostream>

using namespace std;

void fun(int n);

int main()
{
       int n;
       cin >> n;
       
       fun(n);
}

void fun(int n)
{
       if(n == 0) return;
       cout << n << "\n";
       // return fun(n--);
       return fun(--n);
       //n-- vs --n
}