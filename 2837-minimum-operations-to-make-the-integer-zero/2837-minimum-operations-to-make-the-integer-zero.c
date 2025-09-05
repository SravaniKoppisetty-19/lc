int makeTheIntegerZero(int num1, int num2) {
    int k =1;
    while(1)
    {
        long long val = (long long)num1 - (long long)num2 *k;
        if(val<k)
        {
            return -1;
        }
        if( k>= __builtin_popcountll(val)){
            return k;
        }
        k++;
    }
    return -1;
}