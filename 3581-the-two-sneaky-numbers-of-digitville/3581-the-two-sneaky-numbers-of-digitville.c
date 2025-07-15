/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int frequency[100];
    int *array = (int*)malloc(numsSize*sizeof(int));
    for(int i = 0; i<numsSize ; i++)
    {
        frequency[nums[i]]++;
    }
    int k =0;
    for(int i =0;i<100;i++)
    {
        if(frequency[i] == 2)
        {
           array[k++] = i;
        }
    }
    *returnSize = k;
    return array;
}