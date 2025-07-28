
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Max 10000
int top=-1;
int stack[Max];
void push(char val)
{
    if(top == Max-1)
    {
        return;
    }
    top++;
    stack[top]=val;
}
void pop()
{
    if(top!=-1)
    top--;
}
char Top()
{
    return stack[top];
}
bool empty()
{
   return top==-1;
}
bool isValid(char* s) {
    int l=strlen(s);
    if(l%2!=0)return 0;
    top=-1;
    int i=0;
    int f=1;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            push(s[i]);
        }
       else if(!empty() && s[i]==')' && Top()=='(' )
        {
            pop();
        }
        else if(s[i]=='}' && !empty() && Top()=='{')
        {
            pop();
        }
        else if(!empty() &&s[i]==']' && Top()=='[')
        {
            pop();
        }
        else{
           f=0;
          continue;
        }
    }
   return f && empty() ;
}