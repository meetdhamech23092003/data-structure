#include <stdio.h>
#define n 20
int top = -1;
char stack[n];

void push(char ch)
{
    if (top == n-1)
    {
        printf("\n Stack is overflow. ");
    }
    else
    {
        stack[++top] = ch;
    }
}
char pop(void)
{
    if (top==-1)
    {
        printf("\n Stack is underflow. ");
    }
    else
        return (stack[top--]);
    
}
int main()
{
    char infix[n];
    char postfix[n];
    int i, j;
    char ch;
    printf("\n Enter Infix expression : ");
    scanf("%s", infix);
    i = 0;
    j = 0;
    while (infix[i] != '\0')
    {
        ch = infix[i];
        switch (ch)
        {
        case '+':
        while(stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')
            {
                postfix[j++] = pop();
            }
            push(ch);
            break;
        case '-':
            while(stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')
            {
                postfix[j++] = pop();
            }
            push(ch);
            break;
        case '*':
        while(stack[top] == '*' || stack[top] == '/')
            {
                postfix[j++] = pop();
            }
              push(ch);
            break;
        case '/':
            while(stack[top] == '*' || stack[top] == '/')
            {
                postfix[j++] = pop();
            }
              push(ch);
            break;
        default:
            postfix[j++] = infix[i];
        }
        i++;
    }
    while(top!=-1)
    {
        postfix[j++] =pop();
    }
    postfix[j] = '\0';
    printf("\n Infix to postfix : %s", postfix);
    return 0;
}