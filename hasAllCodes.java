class Solution {
    public boolean hasAllCodes(String s, int k) {
       double result = Math.pow(2,k);
       int ways = (int)result;
       //System.out.println(ways);
       Set<String> set = new HashSet<>();
       for(int i=0;i<s.length()-k+1;i++){
            StringBuilder sb = new StringBuilder();
            for(int j=i;j<i+k;j++){
                 sb.append(s.charAt(j));
            }
            String r = sb.toString();
            //System.out.println(r);
            set.add(sb.toString()); 
       }
       int count = set.size();
       //System.out.println("Count is " + count);
       return count==ways;
        
        
    }
}
