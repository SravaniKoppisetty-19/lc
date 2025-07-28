int SumOfDigits(int num)
{
    int sum=0;
    while(num>0)
    {
        int r = num%10;
        sum+=r;
        num = num/10;
    }
    return sum;
}
int countLargestGroup(int n) {
    int freq[101]={0};
    int max_count =0;
    for(int i=1;i<=n;i++)
    {
        int sum = SumOfDigits(i);
        freq[sum]++;
        if(freq[sum] > max_count){
        max_count = freq[sum];
        }
    }
    int groups =0;
    for(int i=0;i <101;i++){
        if(freq[i]==max_count)
        groups++;
    }
    return groups;
}