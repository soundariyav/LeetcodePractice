class Solution {
public:
    int maxArea(vector<int>& h) {
        int l =0;
        
        int area = 0;
        int i = h.size()-1;
        while(l<h.size())
        {
           
            int len = i-l;
            //cout<< i << "i is "<< endl;
            int b = min(h[l],h[i]);
            //cout<< "len is " << len << "and bread is " << b << endl;
            int crarea = len*b;
            //cout<< "cr area is " << crarea<< endl;

            area = max(area,crarea);
            //cout<< area << endl;
            if(h[l]>h[i])
            {
                i--;
            }    
            else
            {
                l++;
            }        
            
        }
        return area;
    }
};
