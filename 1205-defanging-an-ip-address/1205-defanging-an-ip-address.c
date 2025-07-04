

char * defangIPaddr(char * address){
      int l = strlen(address);
      int c=0;
      char * add = (char*)malloc((l*3+1)*sizeof(char));
      for(int i=0;i<l;i++)
      {
        if(address[i]=='.')
         {
            add[c++] = '[';
            add[c++] = '.';
            add[c++] = ']';
         }
         else {
            add[c++] = address[i];
         }
      }
      add[c] = '\0';
      return add;
}