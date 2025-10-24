class Solution {
    public int waysToSplitArray(int[] nums) {
        ArrayList<Long>ar = new ArrayList<>();
        ar.add((long)nums[0]);
        long prev = nums[0];
        // prefix sum;
        for(int i=1;i<nums.length;i++){
            long v = prev +nums[i];
            ar.add(v);
            prev = v;
        }
        ArrayList<Long>sr = new ArrayList<>();
        sr.add((long)nums[nums.length -1]);
        long p = nums[nums.length-1];
        for(int i= nums.length-2;i>=0;i--){
            long v = nums[i]+ p;
            p= v;
            sr.add(v);
        }
        Collections.reverse(sr);
        int count=0;
        for(int i=0;i<ar.size()-1;i++){
            //System.out.println(" i is "+ i + " and ar[i] s "+ ar.get(i)+ " sr [i+1] " + sr.get(i+1));
            if(ar.get(i)>=sr.get(i+1)){
                //System.out.println("yes");
                count++;
            }
        }
        
        return count;
    }
}
