class Solution {
public:
 unordered_map<int, int>u_map;
    bool lemonadeChange(vector<int>& bills) {
        int size = bills.size();
        for(int i = 0;i<size;i++)
        {
            u_map[bills[i]]++;
        /*for(const auto&[k,v]:u_map)
        {
            cout<<k<< " " << v << endl;
        }*/
           int change1 =  bills[i] - 5;

           if(change1>0)
           {
            cout<<change1<< "change is" <<endl;
           int res = change(change1);
           if(res!= 0)
           {
            return false;
           }
           }
        }

        return true;
    }
    int change(int n)
    {
        
        int tw = n/20;
       // cout<< tw << " when divided by 20" << endl;
        int a = u_map[20];
        if(u_map[20]>=tw)
        {
            n = n - (20*tw);
            cout<<n<< "the n in 20" <<endl;
            u_map[20] = u_map[20]-tw;
        }
        else
        {
            n = n-(20*a);
            cout<<n<<endl;
            u_map[20]-=a;
        }
        cout<<"Step2 check for 10"<< endl;
        int te = n/10;
        int b = u_map[10];
        cout<<b<<endl;
        if(u_map[10]>=te)
        {
            n = n - (10*te);
            cout<<n <<endl;
            u_map[10] = u_map[10]-te;
        }
        else
        {
            n = n-(10*b);
            cout<<n<<endl;
            u_map[10]-=b;
        }
        cout<<"Step3 check for 5"<< endl;
        int fi = n/5;
        int c = u_map[5];
        if(u_map[5]>=fi)
        {
            n = n - (5*fi);
            cout<<n<<endl;
            u_map[5]= u_map[5]-fi;
            int d = u_map[5];
            cout<<d << "the value 5 in u_map is" << endl;
        }
        else
        {
            n = n-(5*c);
            cout<<n <<endl;
            u_map[5]-=c;
            int d = u_map[5];
            cout<<d << "the value 5 in u_map is" << endl;
        }
        return n;
    }

};
