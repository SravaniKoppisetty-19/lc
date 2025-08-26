class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        int k=0;
         Arrays.sort(nums);
     for(int i=0 ; i<n ; i++){
        if(nums[0]<0 &&nums[1]<0){
             k = nums[0]*nums[1];
        }
     }
     int z = nums[n-1]*nums[n-2]*nums[n-3];
     int q = nums[n-1]*k;
     if(z>=q){
        return z;
     }
     else{
        return q;
     }
     
    }
}