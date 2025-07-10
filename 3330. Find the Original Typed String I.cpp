class Solution {
public:
    int possibleStringCount(string word) {
        char prev = word[0];
        int count = 1;
        int sum=0;
        for(int i=1;i<word.size();i++){
            if(prev== word[i]){
                count++;
            }
            else{
                if(count>=2){
                    int c= count-1;
                    sum+= c;
                }
                count=1;
                prev = word[i];
            }
        }
        if(count>=2){
            int c= count-1;
            sum+= c;
        }
        return sum+1;
    }
    
};
