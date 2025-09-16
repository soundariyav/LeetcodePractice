struct Node{
    Node* links[26];
    bool flag=false;
    Node() {
        for (int i = 0; i < 26; i++) {
            links[i] = nullptr;  // ✅ initialize all to nullptr
        }
    }
    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }
    bool contains(char ch){
        return links[ch-'a']!=nullptr;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setend(){
        flag = true;
    }
    bool isEnd(){
        return flag==true;
    }
};
class Trie {
public:
    Node* root;
    Trie() { root = new Node; }
    void insert(string word) {
        Node* node = root;
        for (char ch : word) {
            if (!node->contains(ch)) node->put(ch, new Node());
            node = node->get(ch);
        }
        node->setend();
    }
};

class Solution {
public:
    int m;
    int n;
    vector<vector<char>> board;
    vector<string>res;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m=board.size();
        n=board[0].size();
        this->board= board;
        // First building up the Trie
        Trie trie;
        for(auto x: words){
            trie.insert(x);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dfs(i,j,trie.root,"");
            }
        }
        return res;
    }
    void dfs(int i,int j,Node * node,string word){
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='#'){
            return;
        }
        char c = board[i][j];
        if(!node->contains(c)){
            return;
        }
        node = node->get(c);
        if(node->isEnd()){
            res.push_back(word+c);
            node->flag=false;
        }
        board[i][j]='#';
        dfs(i+1,j,node,word+c);
        dfs(i,j-1,node,word+c);
        dfs(i-1,j,node,word+c);
        dfs(i,j+1,node,word+c);
        board[i][j]=c;
    }
};
