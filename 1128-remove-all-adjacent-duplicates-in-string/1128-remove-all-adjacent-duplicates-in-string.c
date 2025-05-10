#include<stdlib.h>
#define MAX 100
char stack[100];
int top=-1;
void push(char val)
{
    if(top==MAX)
    {
        return ;
    }
    top++;
    stack[top]=val;
}
void pop()
{
    top--;
}
int isempty()
{
    return top==-1;
}
char Top()
{
    return stack[top];
}
char* removeDuplicates(char* s) {
    int n = strlen(s);
    char* stack = (char*)malloc((n + 1) * sizeof(char)); // Stack to store characters
    int top = -1; // Stack pointer

    for (int i = 0; i < n; i++) {
        // Check if the stack is not empty and top element is the same as current character
        if (top >= 0 && stack[top] == s[i]) {
            top--; // Remove the last element from the stack (duplicate removal)
        } else {
            stack[++top] = s[i]; // Push current character onto the stack
        }
    }

    // Null terminate the final string
    stack[top + 1] = '\0';

    return stack;
}