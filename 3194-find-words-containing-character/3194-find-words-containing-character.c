/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<string.h>
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int l= wordsSize;
    int* ans=(int*)malloc(l*sizeof(int));
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(strchr(words[i],x)!= NULL)
        {
            ans[c++]=i;
        }
    }
    *returnSize=c;
    return ans;
}