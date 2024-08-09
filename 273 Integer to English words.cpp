class Solution {
public:
    unordered_map<int, string> m = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
        {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
        {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, 
        {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}, 
        {20, "Twenty"},  {30, "Thirty"},  {40, "Forty"},  {50, "Fifty"},  {60, "Sixty"}, 
        {70, "Seventy"},  {80, "Eighty"},  {90, "Ninety"},  
        {100, "Hundred"},  {1000, "Thousand"}, {1000000, "Million"}, {1000000000, "Billion"}
    };
    string three(int x){
        string res;
        int hundreds = x/100;
        if(hundreds){
            res+=m[hundreds]; res+=" Hundred";
            x-=hundreds*100;
        }
        auto unitsandtens = x%100;
        if(hundreds&&unitsandtens) res+=" ";
        if(!unitsandtens) return res;
        else if(m.find(unitsandtens)!=m.end()) res+=m[unitsandtens];
        else {
            auto tens = x/10;
            x-=(tens*10);
            auto units = x%10;
            res+=m[tens*10]; res+=" "; res+=m[units];
        }
        return res;
    }
    string numberToWords(int x) {
            if(!x) return "Zero";
            string res;
            auto billions = x/1000000000;
            if(billions) {res+=three(billions); res+=" Billion "; x-=(billions*1000000000); }
            auto millions = x/1000000;
            if(millions) {res+=three(millions); res+=" Million "; x-=(millions*1000000); }
            auto thousands = x/1000;
            if(thousands) {res+=three(thousands); res+=" Thousand "; x-=(thousands*1000); }
            if(!x) res.pop_back();//x was a multiple thousand
            res += three(x);
            return res;
    }
};
