#include <stdio.h>

int main()
{
    int stack[100];
    int top = -1;
    int n, ch, val, i;

    printf("Enter the size of stack: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size!\n");
        return 1;
    }

    while (1)
    {
        printf("\nSTACK OPERATIONS\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1)   /* Push */
        {
            if (top == n - 1)
            {
                printf("Stack overflow\n");
            }
            else
            {
                printf("Enter value: ");
                scanf("%d", &val);

                top++;
                stack[top] = val;

                printf("%d Pushed\n", val);
            }
        }

        else if (ch == 2)   /* Pop */
        {
            if (top == -1)
            {
                printf("Stack underflow\n");
            }
            else
            {
                printf("%d Popped\n", stack[top]);
                top--;
            }
        }

        else if (ch == 3)   /* Display */
        {
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack elements are:\n");

                for (i = top; i >= 0; i--)
                {
                    printf("%d\n", stack[i]);
                }
            }
        }

        else if (ch == 4)   /* Exit */
        {
            break;
        }

        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}