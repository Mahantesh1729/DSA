#include <bits/stdc++.h>

using namespace std;

bool sorted(vector <int> arr);
bool helper(vector <int> arr, int n, int count);

int main()
{
       vector <int> arr{1, 2, 3, 4, 7, 6};
       cout << arr.size() << "\n";
       cout << sorted(arr);
}

bool sorted(vector <int> arr)
{
       int n = arr.size();
       if(n == 0) 
       {
              return 1;
       }
       return helper(arr, n, 0);
}

bool helper(vector <int> arr, int n, int count)
{
       if(count == n - 1)
       {
              return true;
       }

       return arr[count] < arr[count + 1] && helper(arr, n, count + 1);
}