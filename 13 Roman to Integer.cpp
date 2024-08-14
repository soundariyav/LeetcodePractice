class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char, int> umap; 
        int diff = 0;
        char w;
        char w1;
        int q;
        int q1;
        vector<int>res;
      
  
// inserting values by using [] operator 
        umap['I'] = 1; 
        umap['V'] = 5; 
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
       // cout<<"Value of key mp['I'] = " <<umap.at(s[0])<<endl;

        for(int i = n-1; i>=0;i--)
        {

            if(i==0)
            {
                char m = s[i];
                auto t = umap.at(m);
                cout<< t << endl;
                res.push_back(t);

            }
            else if((s[i]=='V') && (s[i-1]=='I'))
            {
                 w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                 cout<< diff << endl;
                 res.push_back(diff);
                 i--;
            }
            else if((s[i]=='X') && (s[i-1]=='I'))
            {
                w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                  cout<< diff << endl;
                 res.push_back(diff);
                i--;
            }
            else if((s[i]=='C') && (s[i-1]=='X'))
            {
                w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                  cout<< diff << endl;
                 res.push_back(diff);
                 i--;

            }
            else if((s[i]=='L') && (s[i-1]=='X'))
            {
                w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                  cout<< diff << endl;
                 res.push_back(diff);
                 i--;

            }
            else if((s[i]=='M') && (s[i-1]=='C'))
            {
                w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                  cout<< diff << endl;
                 res.push_back(diff);
                 i--;
            }
            else if((s[i]=='D') && (s[i-1]=='C'))
            {
                w = s[i];
                 q = umap.at(w);
                 w1 = s[i-1];
                 q1 = umap.at(w1);
                 diff= q-q1;
                  cout<< diff << endl;
                 res.push_back(diff);
                 i--;
            }
            else
            {
                char v = s[i];
                auto r = umap.at(v);
                 cout<< r << endl;
                res.push_back(r);
                
            }
            

        }
        int count=0;
        for(int i =0;i<res.size();i++)
        {
            count = count + res[i];
            
        }
        

       return count; 
    }
};
