int totalFruit(int* fruits, int fruitsSize) {
    int max =0;int left =0;
    int count[100000]={0};
    int types = 0;
    for(int i =0;i<fruitsSize;i++)
    {
        if(count[fruits[i]] == 0)
        types++;
        count[fruits[i]]++;
        while(types>2)
        {
            count[fruits[left]]--;
            if(count[fruits[left]] == 0)
            types--;
            left++;
        }
        int windowSize = i-left+1;
        if(windowSize>max)
        {
            max = windowSize;
        }
    }
    return max;
}