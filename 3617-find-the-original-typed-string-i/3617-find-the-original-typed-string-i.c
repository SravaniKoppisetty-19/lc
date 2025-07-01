int possibleStringCount(char* word) {
    int l =strlen(word),sum = 1;
    for(int i=1;i<l;++i)
    {
        if(word[i-1]== word[i])
        {
            ++sum;
        }
    }
    return sum;
}