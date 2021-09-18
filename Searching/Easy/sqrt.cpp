class Solution {
public:
    int mySqrt(int n) {
        if(n == 0) return 0;
        if(n < 4) return 1;
        
        return binarySearch(n);
    }
    
    int binarySearch(int n)
    {
        unsigned long long l = 2, h = n / 2 + 1, mid;
        
        while(1)
        {
            mid = (l + h) / 2;
            if(mid * mid == n || mid * mid < n && (mid + 1) * (mid + 1) > n)
                return mid;
            else if(mid * mid < n)
            {
                l = mid + 1;
            }
            else h = mid - 1;
        }
        return -1;
    }
};
