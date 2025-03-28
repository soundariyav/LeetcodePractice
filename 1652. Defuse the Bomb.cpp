class Solution {
public:
    vector<int> decrypt(vector<int>& cod, int k) {
        int n= cod.size();

        vector<int>code=cod;
        vector<int>codes=cod;
        //cout<<code.size()<<endl;
        vector<int>ans;
    if(k>0){
        code.insert(code.end(),code.begin(),code.end());
        //cout<<code.size()<<endl;
        for(int i=0;i<n;i++){
            int sum=0;
           for(int j=1;j<=k;j++){
             sum+= code[i+j];
             
           }
            ans.push_back(sum);
        }
        return ans;
    }
    if(k<0){
        k=abs(k);
        codes.insert(codes.begin(),codes.begin(),codes.end());
        cout<<codes.size()<<" and "<< k<< endl;
        for(int i=n;i<n+n;i++){
            int sum=0;
           for(int j=1;j<=k;j++){
            //cout<<"j is "<<j<< " i is "<< i <<endl;
             sum+= codes[i-j];
             
           }
            ans.push_back(sum);
        }
        return ans;
    }
    vector<int>an(n,0);
    return an;

    }
};
