class Solution {
    public int scoreOfString(String s) {
        
        int sum=0;
        int diff;
        for(int i=0;i<s.length()-1;i++)
        {
            diff = s.charAt(i)-s.charAt(i+1);
            if(diff<0)
            {
            int posnum= diff * -1;
            sum = sum+ posnum;
            }
            else
            {
            sum = sum+diff;
            }

        }
        return sum;
    }
}
