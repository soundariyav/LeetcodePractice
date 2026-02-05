class Solution {
public:
    long long flowerGame(int n, int m) {
        long long of = 0;
        long long ef = 0;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ef++;
            }
            else{
                of++;
            }
        }
        long long os=0;
        long long es=0;
        for(int i=1;i<=m;i++){
            if(i%2==0){
                es++;
            }
            else{
           
                os++;
            }
        }
        
        cout<< of<< " and "<< ef<<endl;
        cout<<os << " and " << es << endl;
        long long p1=0;
        if(of!=0 && es!=0){
             p1 = of*es;
        }
        long long p2 = 0;
        if(ef!=0 && os!=0){
             p2 = ef*os;
        }
        return p1+p2;
    }
};
