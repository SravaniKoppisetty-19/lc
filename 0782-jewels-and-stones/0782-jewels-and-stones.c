int numJewelsInStones(char* jewels, char* stones) {
    int k=strlen(jewels);
    int s=strlen(stones);
    int c=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(jewels[i]==stones[j])
            {
                c++;
            }
        }
    }
    return c;
}