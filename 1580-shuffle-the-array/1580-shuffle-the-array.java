class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] arr = new int[2*n];
        int k=0;
        int i =0;
        while(i<n)
        {
            arr[k]=nums[i];
            arr[k+1] = nums[i+n];
            k+=2;
            i++;
        }
        return arr;
    }
}