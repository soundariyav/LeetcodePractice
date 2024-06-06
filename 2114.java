class Solution {
    public int mostWordsFound(String[] s) {
        int maxcount =0;
        for(int i =0; i< s.length;i++)
        {
            String newstri = s[i];
            int count=0;
            for(int j=0; j<newstri.length();j++)
            {
                if(newstri.charAt(j)==' ')
                {
                    count= count+1;
                }
            }
            count = count+1;
            if(maxcount<count)
            {
                maxcount = count;
            }
        }
        return maxcount;
        
    }
}
