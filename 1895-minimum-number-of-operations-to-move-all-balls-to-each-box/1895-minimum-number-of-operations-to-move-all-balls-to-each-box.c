/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
     int l= strlen(boxes);
     int *result = (int *)malloc((l+1)*sizeof(int));
     int k=0;
     for(int i=0;i<l;i++)
     {
        int sum=0;
        for(int j=0;j<l;j++)
        {
            if(boxes[j]=='1')
            {
                sum+=abs(j-i);
            }
        }
        result[k++]=sum;
     }
     *returnSize = l;
     return result; 
}