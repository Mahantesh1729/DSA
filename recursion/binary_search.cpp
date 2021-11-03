#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int search(int k, int h, int l,vector <int> arr);

int main()
{
       vector <int> arr{1 , 2, 3, 4, 5, 6, 7, 8, 9};

       sort(arr.begin(), arr.end());

       int h = arr.size() - 1;
       int l = 0;
       int k = 0;
       cout << search(k, h, l, arr);
}

int search(int k, int h, int l,vector <int> arr)
{
       int m = (l + h) / 2;

       if(h < l)
       {
              return -1;
       }
       
       if(arr[m] == k)
       {
              return m;
       }
       else if(k > arr[m])
       {
              return search(k, h, m + 1, arr);
       }
       
       return search(k, m - 1, l, arr);
}