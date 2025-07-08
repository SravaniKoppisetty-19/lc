char* toLowerCase(char* s) {
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}