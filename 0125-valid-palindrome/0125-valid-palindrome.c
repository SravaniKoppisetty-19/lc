bool isPalindrome(char* s) {
    int l= strlen(s);
    char * string = (char*)malloc((l+1)*sizeof(char));
    int k=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]>= 'a' && s[i]<= 'z')
        {
              string[k++]=s[i];
        }
        else if(s[i]>='A' && s[i] <= 'Z')
        {
            string[k++] = s[i] +32;
        }
        else if(s[i] >= '0' && s[i]<= '9')
        {
            string[k++] = s[i];
        }

    }
    string[k]='\0';
    int start = 0,end =k-1;
    while(start<=end)
    {
        if(string[start] != string[end])
        {
            free(string);
            return false;
        }
        start++;
        end--;
    }
    free(string);
    return true;
}