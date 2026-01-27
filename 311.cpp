class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int m = mat1.size();
        int n = mat2[0].size();
        map<int,vector<int>>mp;
        for(int j=0;j<mat2[0].size();j++){
            for(int i=0;i<mat2.size();i++){
                mp[j].push_back(mat2[i][j]);
            }
        }
        unordered_map<int,vector<int>>mp1;
        vector<vector<int>>mat(m,vector<int>(n,0));
        for(int i=0;i<mat1.size();i++){
            mp1[i]= mat1[i];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int r = i;
                int c = j;
                int sum = 0;
                sum+= product(mp1[r],mp[c]);
                  
                cout<<sum <<" ";
                mat[i][j] = sum;
                
            }
           
            cout<<endl;
            
        }
        return mat;

    }
    int product(vector<int>o, vector<int>t){
        int size = o.size();
        int size1 = t.size();
        //cout<<size<< " and "<< size1<<endl;
        int sum =0;
        for(int i=0;i<size;i++){
           sum+= o[i]*t[i];
        }
        return sum;
    }
};
