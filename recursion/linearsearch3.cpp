#include <bits/stdc++.h>

using namespace std;

void linearSearch(vector<int> arr, int target, int i);

vector<int> ans;

int main()
{
       vector<int> arr{1, 2, 3, 4, 4, 4, 5};
       int target = 4;
       linearSearch(arr, target, 0);

       for (int i = 0; i < ans.size(); i++)
       {
              cout << ans[i] << " ";
       }
}

void linearSearch(vector<int> arr, int target, int i)
{
       if (i == arr.size())
              return;

       if (arr[i] == target)
       {
              ans.push_back(i);
       }

       return linearSearch(arr, target, i + 1);
}