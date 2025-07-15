class Solution {
    public int largestAltitude(int[] gain) {
        int arr[] = new int[gain.length+4];
        int sum =0;
        arr[0]=0;
        arr[1]=gain[0];
        int k =2;
        for(int i= 0;i<gain.length;i++ )
        {
            sum+=gain[i];
            arr[k++] = sum;
        }
        int max = arr[0];
        for(int i = 0;i<gain.length+4;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }
}