int scoreOfString(char* s) {
    int i,j,sum;
    for(i=0;s[i]!='\0';i++)
    {
        sum=0;
        for(j=0;j<i;j++){
            int diff=0;
            diff=abs(s[j]-s[j+1]);
            sum+=diff;
        }
    }
    return sum;
}