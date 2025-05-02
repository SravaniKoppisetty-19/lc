int differenceOfSums(int n, int m) {
    int i=1,sum=0,sum1;
    while(m*i<=n){
        sum+=(m*i);
        i++;
    }
    sum1=n*(n+1)/2;
int r=sum1-sum;
return r-sum;
}