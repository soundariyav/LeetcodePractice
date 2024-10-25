class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string s="";
        for(auto x: strs)
        {
            s += to_string(x.size())+ "/:" + x;
          //  cout<<s<<endl;
        }
        return s;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
            vector<string>ans;
            int i=0;
            while(i<s.size())
            {
                auto d = s.find("/:",i);
                int le = stoi(s.substr(i,d-i));
                string str = s.substr(d+2,le);
                ans.push_back(str);
                i = d+2+le;

            }
            return ans;

    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
