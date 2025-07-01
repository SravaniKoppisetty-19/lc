char* reversePrefix(char* word, char ch) {
    int l= strlen(word);
    int s=-1;
    char* s1 = (char*)malloc((l+1)*sizeof(char));
    for(int i=0;i<l;i++)
    {
        if(ch==word[i])
        {
           s=i;
           break;
        }
    }
    int k=0;
    for(int i=s;i>=0;i--)
    {
        s1[k++]=word[i];
    }
    for(int i=s+1;i<l;i++)
    {
        s1[k++]=word[i];
    }
    s1[k]='\0';
    return s1;
}