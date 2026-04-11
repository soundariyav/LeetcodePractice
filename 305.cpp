class Solution {
public:
    int n;
    int m;
    vector<vector<int>> grid;
     vector<int>p;
     vector<int>size;
    vector<int> numIslands2(int m, int n, vector<vector<int>> positions) {
        unordered_map<int,unordered_map<int,int>>mp1;
        unordered_map<int,pair<int,int>>mp2;
        int count =0;
        p =  vector<int>(n*m);
        iota(p.begin(),p.end(),0);
        size = vector<int>(n*m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 int val = (i*n)+ j;
                // cout<< val<< " ";
                 mp1[i][j]= val;
                 mp2[val]= {i,j};
            }
        }

        // cout<<endl;
        // for (auto &it : mp2) {
        //     cout << "Key: " << it.first 
        //         << " -> [" << it.second.first 
        //         << ", " << it.second.second << "]"<< endl;
        //     }
        vector<int>grid(n*m,0);
        int sizeofgrid = grid.size();
        cout<<"the grid size "<< sizeofgrid<<endl;
        vector<int>ans;
        for(int i=0;i<positions.size();i++){
            
            int row = positions[i][0];
            int col = positions[i][1];
            cout<< "row "<< row << " and col "<< col << " and count " << count<< endl;
            int compressed = mp1[row][col];
            if(grid[compressed]==1){
                ans.push_back(count);
                continue;
            }
            grid[compressed] = 1;
            int c1=-1;
            int c2=-1;
            int c3=-1;
            int c4=-1;
            if(row-1>=0){
                 c1 = mp1[row-1][col];
                 if(grid[c1]!=1){
                    c1= -1;
                 }
            }
            if(row+1<m){
                c2 = mp1[row+1][col];
                if(grid[c2]!=1){
                    c2 =-1;
                }
            }
            if(col+1<n){
                c3 = mp1[row][col+1];
                if(grid[c3]!=1){
                    c3 =-1;
                }
            }
            if(col-1>=0){
                c4 = mp1[row][col-1];
                if(grid[c4]!=1){
                    c4 =-1;
                }
            }
            //cout<< c1 << " "<< c2 <<" "<< c3 <<" "<< c4 <<endl;
            // cout<< " the values " << "["<< mp2[c1].second.first<< ", "<< mp2[c1].second.second << " ]"<<
            //                          "["<< mp2[c2].second.first<< ", "<< mp2[c2].second << " ]" <<
            //                          "["<< mp2[c3].second.first<< ", "<< mp2[c3].second.second << " ]" <<
            //                          "["<< mp2[c4].second.first<< ", "<< mp2[c4].second.second << " ]"<< endl;
            //cout << mp2.at(c1).first << ", " << mp2.at(c1).second<< endl;
            if((c1==-1)&& (c2 ==-1)&& (c3 ==-1) && (c4 ==-1)){
                cout<<" all water "<<endl;
                 count+=1;
            }
            else{
                int p1=-1;
                int p2= -1;
                int p3 = -1;
                int p4 = -1;
                unordered_set<int>pa;
                if(c1!=-1){
                    p1 = find(c1);
                    pa.insert(p1);
                    unite(p1,p[compressed]);
                }
                if(c2!=-1){
                    p2 = find(c2);
                    pa.insert(p2);
                    unite(p2,p[compressed]);
                }
                if(c3!=-1){
                    p3 = find(c3);
                    pa.insert(p3);
                    unite(p3,p[compressed]);
                }
                if(c4!=-1){
                    p4 = find(c4);
                    pa.insert(p4);
                    unite(p4,p[compressed]);
                }
                if(pa.empty()){
                    cout<<"this is unexpected"<<endl;
                    count+=1;
                }
                else if(pa.size()==1){
                    cout<<" one land"<< endl;
                }
                else if(pa.size()==2){
                    cout<<"size 2"<<endl;
                     count-=1;
                }
                else if(pa.size()==3){
                    cout<<"size 3"<<endl;
                    count-=2;
                }
                else if(pa.size()==4){
                    cout<<"size 4"<<endl;
                    count-=3;
                }              
                

            }
            ans.push_back(count);

        }
        return ans;

    }
    int find(int x){
        if(p[x]==x){
            return x;
        }
        return p[x]= find(p[x]);
    }
    void unite(int x, int y){
        int p1 = find(x);
        int p2 = find(y);
        if(p1==p2){
            return;
        }
        int s1 = size[p1];
        int s2 = size[p2];
        if(s1<s2){
            p[p1] = p2;
            size[p2]+= s1;
        }
        else{
            p[p2]= p1;
            size[p1]+= s2;
        }
    }
    
};
