int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int n= hoursSize;
    int t= target;
    int c=0;
    for(int i=0;i<n;i++){
        if(hours[i]>=t)
        {
            c++;
        }
    }
    return c;
}