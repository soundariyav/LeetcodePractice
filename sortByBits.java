class Solution {
    public int[] sortByBits(int[] arr) {
        Map<Integer,List<Integer>>mp = new HashMap<>();
        for(int i=0;i<arr.length;i++){
             var val = check(arr[i]);
             mp.computeIfAbsent(val, k -> new ArrayList<>()).add(arr[i]);
             //System.out.println(val);
        }
        int n = arr.length;
        int[] ans = new int[n];
        int j = 0;
        for(Map.Entry<Integer,List<Integer>> entry : mp.entrySet()){
            List<Integer> value = entry.getValue();
            Integer key = entry.getKey();
            System.out.println(key);
            value.sort(null);
            for(int i=0; i< value.size();i++){
                int p = value.get(i);
                ans[j]= p;
                j++;
            }  
        }
        
         return ans;
    }
    Integer check(int a){
        Integer count =0;
        while(a!=0){
            count+= a&1;
            a = a>>1;
        }
        return count;
    }
}
