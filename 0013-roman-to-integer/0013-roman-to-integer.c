int num(char ch)
{
    if(ch=='I')
    return 1;
    else if(ch=='V')
    return 5;
    else if(ch=='X')
    return 10;
    else if(ch=='L')
    return 50;
    else if(ch=='C')
    return 100;
    else if(ch=='D')
    return 500;
    else return 1000;
}
int romanToInt(char* s) {
    int l=strlen(s);
    int n=0;

    for(int i=0;i<l;i++)
    {
        if(i<l-1 && num(s[i]) < num(s[i+1]) )
        {
            n = n- num(s[i]);
        }
        else 
        n = n+num(s[i]);
    }
    return n;
}