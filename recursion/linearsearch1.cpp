#include <bits/stdc++.h>

using namespace std;

bool linearSearch(vector <int> arr, int target, int i);

int main()
{
       vector <int> arr{1, 2, 3, 4, 5};
       int target = 0;
       cout << linearSearch(arr, target, 0);
}

bool linearSearch(vector <int> arr, int target, int i)
{
       if(i == arr.size())
       {
              return false;
       }
       return arr[i] == target || linearSearch(arr, target, i + 1);
}