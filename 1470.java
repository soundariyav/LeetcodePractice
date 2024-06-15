class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] arr = new int[nums.length];
        int i;
        int j;
        int k;
        //arr.add(nums[i]);
        for (i=0,k= 0;i<n;i++, k= k+2)
        {
            arr[k]=nums[i];
            System.out.println("I am writing " + i +  " value at kth place" + k );
        }
        for (j=n,k=1;j<nums.length;j++,k=k+2)
           {
            arr[k]=nums[j];
            System.out.println("I am writing " + j +  " value at kth place" +k);
           }

        
        return arr;
        
    }
}
