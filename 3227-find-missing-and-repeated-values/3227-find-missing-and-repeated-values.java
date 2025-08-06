class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int freq[] = new int[n*n+1];
        for(int i =0;i<n*n+1;i++)
        {
            freq[i] =0;
        }
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                freq[grid[i][j]]++;
            }
        }
        int[] ans=new int[2];
        for(int i=1;i<=n*n;i++)
        {
            if(freq[i]==2)
            ans[0]=i;
            if(freq[i]==0)
            ans[1]=i;
        }
        return ans;
    }
}