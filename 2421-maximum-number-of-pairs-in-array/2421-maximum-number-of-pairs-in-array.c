/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int frequency[101] = {0};
    int* result = (int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        frequency[nums[i]]++;
    }
    int pair_count =0;
    int single_count = 0;
    for(int i=0;i<101;i++)
    {
         pair_count += frequency[i] / 2;
         single_count += frequency[i] % 2;
    }
    result[0] = pair_count;
    result[1] = single_count;
    *returnSize = 2;
    return result;
}