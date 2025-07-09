char findTheDifference(char* s, char* t) {
    int l= strlen(s);
    int m = strlen(t);
    int count[26]={0};
    for(int i=0; i< l ;i++)
    {
        count[s[i] - 'a']++;
    }
    for(int i =0; i<m ;i++)
    {
        count[t[i] - 'a']--;
        if(count[t[i] - 'a'] < 0)
        {
            return t[i];
        }
    }
    return 0;
}