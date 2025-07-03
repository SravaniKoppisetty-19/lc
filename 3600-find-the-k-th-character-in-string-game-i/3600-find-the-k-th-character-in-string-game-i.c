int CountPop(int n)
{
    int c=0;
    while(n!=0)
    {
        c += n &1;
        n >>= 1;
    }
    return c;
}
char kthCharacter(int k) {
        int l= CountPop(k-1);
        return 'a'+l;
}