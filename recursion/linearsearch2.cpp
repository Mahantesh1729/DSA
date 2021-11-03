#include <bits/stdc++.h>

using namespace std;

bool linearSearch(vector <int> arr, int target, int i);

int main()
{
       vector <int> arr{1, 2, 3, 4, 5};
       int target = 0;
       cout << linearSearch(arr, target, arr.size());
}

bool linearSearch(vector <int> arr, int target, int i)
{
       if(i == -1) return false;

       return arr[i] == target || linearSearch(arr, target, i - 1);
}