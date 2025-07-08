int countOperations(int num1, int num2) {
    long long operation = 0;
    if( num1 ==0 || num2 == 0)
    {
        return 0;
    }
    while( num1 != 0 && num1 != 0)
    {
        if(num2 > num1)
        {
            num2 = num2 - num1;
            operation++;
        }
        else if(num1 > num2)
        {
            num1 = num1 - num2;
            operation++;
        }
        else {
            num1 = num1 - num2;
            operation++;
        }

    }
    return operation;
}