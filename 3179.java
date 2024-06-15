class Solution {
    public int valueAfterKSeconds(int n, int k) {
        int [] arr = new int[ n ]; 
       // System.out.println(arr.length);
        for(int i=0;i<n;i++)
        {
            arr[i]=1;
        }
       // System.out.println(Arrays.toString(arr));
        int mod= 1000000000+7;
        int sum =1;
        while(k>0)
        {
            sum=1;
            for(int i =1;i<n;i++)
            {
                arr[i] = (sum + arr[i])%mod;
                sum= arr[i];
                
            }
           // System.out.println(Arrays.toString(arr));
            k--;
        
        }
        int result = arr[n-1];
        return result;
    }
}

    
        
        
  
