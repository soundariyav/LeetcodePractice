class Solution {
    public String countAndSay(int n) {
        String r ="1";
        if(n == 1)
            return r;

        for(int i=2;i<=n;i++)
        {
            String s = newstring(r);
            r = s;
        }
         return r;   
    }
    public String newstring(String r) 
    {
        String m ="";
        for(int j=0;j<r.length();)
        {
            char a = r.charAt(j);
            int count = 0;
            while(j<r.length() && r.charAt(j)==a)
            {
                count = count +1;
                j++;
            }
            m = m+ Integer.toString(count)+ a;
        }
        return m;
    }
    
}
