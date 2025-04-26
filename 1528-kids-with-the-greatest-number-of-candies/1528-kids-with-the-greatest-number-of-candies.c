/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int n=candiesSize;
    int e=extraCandies;
    int max=candies[0];
    bool* ans= (bool*)malloc(n*sizeof(bool));
    for(int i=0;i<n;i++)
    {
        if(max<candies[i])
        max=candies[i];
    }
    for(int i=0;i<n;i++)
    {
       if( candies[i] + e >= max){
       ans[i]=true;
       }
       else ans[i]=false;
    }
    *returnSize = n;
    return ans;
}