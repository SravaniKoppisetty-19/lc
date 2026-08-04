class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int l = f.size();
        if(l==1)
        {
            if(n==1)
            {

    
            if(f[0]==1)
            {
                return false;
            }
            else{
                    return true;
            }
            }
            return n==0;
        }
        for(int i =0;i<l;i++)
        {
           if(i==0 )
           {
            if(f[i]==0 && f[i+1]==0){
              f[i]=1;
              n--;
            }
           }
           else if(i==l-1)
           {
              if(f[i]==0 && f[i-1]==0){
                 f[i]=1;
                 n--;
              }
           }
           else if(f[i-1]==0 && f[i]==0 && f[i+1]==0)
           {
             f[i]=1;
             n--;
           }
        }
        if(n<=0)
        {
           return true;
        }
        return false;
    }
};