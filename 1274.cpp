/**
 * // This is Sea's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Sea {
 *   public:
 *     bool hasShips(vector<int> topRight, vector<int> bottomLeft);
 * };
 */

class Solution {
public:
    int countShips(Sea sea, vector<int> tr, vector<int> bl) {
        if(bl[0]> tr[0] || bl[1]> tr[1]){
            return 0;
        }
        if(!sea.hasShips(tr,bl)){
            return 0;
        }
        // if it is a single coordinate
        if(bl[0]==tr[0] && tr[1]== bl[1]){
            return 1;
        }
        int midx = (bl[0]+ tr[0])/2;
        int midy = (bl[1] + tr[1])/2;
        return countShips(sea,{midx,midy},bl) + countShips(sea,tr,{midx+1, midy+1}) + countShips(sea,{midx,tr[1]}, {bl[0],midy+1}) 
         + countShips(sea, {tr[0],midy}, {midx+1,bl[1]});

        
    }
};
