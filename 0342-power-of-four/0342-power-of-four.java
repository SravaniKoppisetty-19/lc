class Solution {
    public boolean isPowerOfFour(int n) {
        
        while(n>0 && n%4 == 0)
        {
            n = n/4;
        }
        if(n==1){
        return true;
        }
        return false;
    }
}