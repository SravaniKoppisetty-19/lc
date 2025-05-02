int pivotInteger(int n) {
   int x=n;
   int s1=0,s2=0;
   if(n==1)return n;
   while(x!=0)
   {
     s1+=x;
     s2=(x*(x+1))/2;
     if(s1==s2)return x;
     x=x-1;
   }
   return -1;
}