/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    long long low=1;
    long long high=0;
    int guessNumber(int n) {
        high=n;
       // cout<<n<<endl;
        while(low<=high)
        {
            long long mid = (high+low)/2;
            cout<<mid<<endl;
            if(guess(mid)==0){
                return mid;
            }
            if(guess(mid)==1){
                low=mid+1;
            }
            if(guess(mid)==-1){
                high = mid-1;
            }
        }
        return {};
    }
};
