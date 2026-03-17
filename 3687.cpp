class Solution {
public:
    int lateFee(vector<int>& daysLate) {
        int sum = 0;
        for(int i=0;i<daysLate.size();i++){
            if(daysLate[i] == 1){
                sum+=1;
            }
            else if((2 <= daysLate[i]) && (daysLate[i]<= 5)){
               sum+= 2 * daysLate[i];
            }
            else{
                sum+= 3 * daysLate[i];
            }
        }
        return sum;
    }
};
