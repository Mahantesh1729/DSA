// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

// Approach 1

class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int m = arr.size(), sum = 0;
        for(int i = 0; i < m; i++)
       {
              sum += search(arr[i], -1);
       }

       return sum;
        
    }
    int search(vector <int> arr, int k)
{
       int n = arr.size();
        if(arr[0] <= -1)
        {
            return n;
        }
       int h = n - 1, l = 0, mid, ans = 0;

       while(h >= l)
       {
              mid = (h + l) / 2;
              if(arr[mid] <= -1)
              {
                     ans = n - mid;
                     h = mid - 1;
              }
              else
              {
                     l = mid + 1;
              }
       }
        if(arr[mid] > -1) mid++;
        if (!ans)
              return 0;
       else
              return n - mid;
       return 0;
}
};


// 2nd Approach

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), r = 0, c = grid[0].size() - 1, count = 0;
        
        while(r < n && c >= 0)
        {
            if(grid[r][c] < 0)
            {
                count += n - r;
                c--;
            }
            else
            {
                r++;
            }
        }
        
        return count;
    }
};
