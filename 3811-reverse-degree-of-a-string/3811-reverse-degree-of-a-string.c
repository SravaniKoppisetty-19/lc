int reverseDegree(char* s) {
    int l=strlen(s);
    int sum=0;
    for(int i=0;i<l;i++)
    {
        int rev='z'-s[i]+1;
        sum+= (i+1)*rev;
    }
    return sum;
}