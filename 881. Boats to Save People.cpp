class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count = 0;
        int sum =0;
        int boat = 0;
        int i=0;
        int j=people.size()-1;
        while(i<=j){
            int sum = people[i]+ people[j];
            if(sum>limit){
                boat++;
                j--;
            }
            else if(sum<=limit){
                boat++;
                i++;
                j--;
            }
        }
        return boat;
    }
    // 1 2 2 3

};
