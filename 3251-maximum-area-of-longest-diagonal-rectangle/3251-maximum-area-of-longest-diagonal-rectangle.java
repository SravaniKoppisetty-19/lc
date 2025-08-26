class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int n =dimensions.length;
        double[] arr = new double[n+1];
        int k=0;
        for(int[] element : dimensions)
        {
            arr[k++] = Math.sqrt((element[0]*element[0]) + (element[1]*element[1]));
        } 
        arr[k] = '\0';
        double max = arr[0];
        int index =0;

        for(int i=0;i<n;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
                index = i;
            }
            else if(max == arr[i])
            {
                int currarea = dimensions[i][0]*dimensions[i][1];
                int maxarea = dimensions[index][0]*dimensions[index][1];
                if(currarea>maxarea)
                {
                    index = i;
                }
            }
        }
        return (dimensions[index][0]*dimensions[index][1]);
    }
}