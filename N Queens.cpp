class Solution {
public:
    int size;
    unordered_set<int>col;
    unordered_set<int>dia;
    vector<vector<string>>solutions;
    unordered_set<int>antidia;
    vector<vector<string>> solveNQueens(int n) {
        size = n;
        vector<vector<char>>b(n,vector<char>(n,'.'));
        backtrack(0, b);
        return solutions;

        
    }
    void backtrack(int row,vector<vector<char>>b){
        if(row==size){
            solutions.push_back(createboard(b));
        }
        for(int i=0;i<size;i++){
            int d = row - i;
            int ad = row+i;
            if(col.count(i) || dia.count(d) || antidia.count(ad)){
                continue;
            }
            col.insert(i);
            dia.insert(d);
            antidia.insert(ad);
            b[row][i]= 'Q';
            backtrack(row+1,b);
            // we want to erase in
            col.erase(i);
            dia.erase(d);
            antidia.erase(ad);
            b[row][i]='.';


        }
    }
    vector<string>createboard(vector<vector<char>>b){
        vector<string>ans;
        for(int i=0;i<b.size();i++){
            string r(b[i].begin(),b[i].end());
            ans.push_back(r);
        }
        return ans;
    }
};
