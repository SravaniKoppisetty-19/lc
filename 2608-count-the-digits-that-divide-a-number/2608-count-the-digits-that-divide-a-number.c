int countDigits(int num) {
    int count = 0;
    int n = num;
    while(n != 0)
    {
        int r = n % 10;
        if(num % r == 0)
        {
            count++;
        }
        n = n/10;
    }
    return count;
}