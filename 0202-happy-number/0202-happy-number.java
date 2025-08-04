class Solution {
    public boolean isHappy(int n) {
        int sum=0;
        Set<Integer>seen = new HashSet<>();
        while(n!=1)
        {
           if(seen.contains(n)) return false;
           seen.add(n);
           sum =0;
            while(n!=0)
            {
                int r =n%10;
                sum+=r*r;
                n=n/10;
            }
            n=sum;
        
        }
      return true;
    }
}