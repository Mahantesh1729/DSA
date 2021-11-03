// program to print numbers from 1 to 10 using recursion

#include <iostream>

using namespace std;

void print(int);

int main()
{
       print(1);
}

void print(int n)
{
       if(n > 10) return;
       cout << n << "\n";
       //since this the last function call
       // this is called tail recursion
       print(n + 1);
}