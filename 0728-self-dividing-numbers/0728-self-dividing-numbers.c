/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int l = left;
    int r = right;
    int q = r-l;
    int* result = (int*)malloc((q+1)*sizeof(int));
    int s = 0;
    for(int i = l ; i <= r; i++)
    {
        int digit=0;
        int k = i;
      
        int c =0;
        while(k !=0)
        {
            int re = k % 10;
            digit++;
            if( re !=0 && i % re == 0 )
            {
                 c++;
            }
            k = k/10;
        }
        if( c == digit)
        {
            result[s++] = i;
        }
    } 
    *returnSize = s;
    return result;
}