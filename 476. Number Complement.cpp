class Solution {
    public int findComplement(int num) {
        String bn = Integer.toBinaryString(num); 
        char[] arr = bn.toCharArray();
        for(int i=0;i<arr.length;i++){
              if(arr[i]=='0'){
                 arr[i]= '1';
              }
              else{
                arr[i]='0';
              }
        }
        String res = new String(arr);
        int ans = Integer.parseInt(res,2);
        return ans;
    }
}
