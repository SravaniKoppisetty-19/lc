class Solution {
    public int matrixSum(int[][] nums) {
        int score = 0;
        int[] arr = new int[nums.length+1];
        int n = nums[0].length;
        while(n > 0){
        int k =0;
        for(int[] each : nums)
        {
           int max = each[0];
           int index =0;
           for(int i =0;i<each.length;i++)
           {
               if(max < each[i])
               {
                max = each[i];
                index = i;
               }
           }
           arr[k++] = max;
           each[index] = 0;
        }
        int max2 = arr[0];
        for(int each : arr)
        {
            if(each>max2)
            {
                max2 = each;
            }
        }
        score+=max2;
        n--;
        }
    return score;
    }
}