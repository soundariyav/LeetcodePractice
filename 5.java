class Solution {
    public String longestPalindrome(String s) {
        int size = s.length();
        int [][] grid = new int [size][size];
        int start = 0;
        int end = 0;
        // all one length palindrome
        for(int i=0;i<grid.length;i++){
            grid[i][i] = 1;
        }
        // two length palindrome
        for(int i=0;i<grid.length-1;i++){
             int j = i+1;
             if(s.charAt(i)== s.charAt(j)){
                 grid[i][j]= 1;
                 start = i;
                 end = j;
             }
             else{
                grid[i][j]=0;
             }
        }
        // for all remaining length
        for(int diff = 2;diff<s.length();diff++){
            for(int i=0;i<s.length()-diff; i++){
                  int j = i+diff;
                  if((s.charAt(i)== s.charAt(j)) && (grid[i+1][j-1]==1)){
                        grid[i][j]= 1;
                        start = i;
                        end = j;
                  }
            }
        }
        System.out.println("the start "+ start);
        System.out.println("the end "+ end);
        return s.substring(start, end+1);
    }
}
