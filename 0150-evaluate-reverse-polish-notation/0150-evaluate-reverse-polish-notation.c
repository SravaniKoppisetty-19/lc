int evalRPN(char** tokens, int tokensSize) {
    int n= tokensSize;
     int stack [10001];
       int top = -1;
    for(int i=0;i<n;i++)
    {
       char ch = tokens[i][0];
       int size = strlen(tokens[i]);
       if(( ch == '+' || ch == '-' || ch == '*' || ch == '/') && size == 1)
       {
           int op2= stack[top--];
           int op1 = stack[top--];
           int res;   
          if (ch == '+') res = op1+op2;
          else if ( ch == '-') res = op1-op2;
          else if ( ch == '*') res = op1*op2;
          else res = op1/op2;
          stack[++top] = res;
       }
       else 
    {
        stack[++top] = atoi(tokens[i]);
    }
    }
    return stack[top];
}