class Solution {
public:
int finalPositionOfSnake(int n, vector<string>& c) {
    int i =0;
    int arr[n][n];
    int count=0;
    int j=0;
    for(int m=0;m<n;m++)
	{
		for(int o=0;o<n;o++)
		{
			
            arr[m][o]=count;
            count++;
		}
		//cout<<endl;
	}
    for(int k =0;k<c.size();k++)
    {
        if(c[k]=="UP") 
        {
            i= i-1;

        }
        if(c[k]=="DOWN")
        {
            i=i+1;
        }
        if(c[k]=="LEFT")
        {
            j=j-1;
        }
        if(c[k]=="RIGHT")
        {
            j=j+1;
        }
    

    }
    cout<< "i is " << i ;
    cout<< "j is " <<j;
    auto val = arr[i][j];
    
    return val;
    



}


};
