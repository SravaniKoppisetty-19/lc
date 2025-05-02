int numberOfSteps(int num) {
    int c=0;
    int n=num;
    while(n!=0)
    {
       
        if(n%2==0)
        {
            c++;
            n=n/2;
        }
        if(n%2!=0)
        {
            c++;
            n=n-1;
        }
    }
    return c;
}