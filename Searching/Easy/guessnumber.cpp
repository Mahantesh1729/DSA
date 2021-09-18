/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l = 1, h = n, res;
        int mid;
        while(h >= l)
        {
            mid = (l + h) / 2;
            
            res = guess(mid);
            
            if(res == 0)
            {
                break;
            }
            else if(res == -1)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return mid;
    }
};
