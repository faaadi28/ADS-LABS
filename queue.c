#include <stdio.h>

int main()
{
    int i, n, ch, v;

    printf("Enter size of queue: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size!\n");
        return 1;
    }

    int queue[n];

    int f = -1, r = -1;

    while (1)
    {
        printf("\nMENU\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1)   /* Enqueue */
        {
            if (r == n - 1)
            {
                printf("Queue is full!\n");
            }
            else
            {
                printf("Enter the element: ");
                scanf("%d", &v);

                r = r + 1;
                queue[r] = v;

                if (f == -1)
                {
                    f = 0;
                }
            }
        }

        else if (ch == 2)   /* Dequeue */
        {
            if (f == -1 || f > r)
            {
                printf("Queue is empty!\n");
            }
            else
            {
                printf("Deleted %d\n", queue[f]);

                f = f + 1;
            }
        }

        else if (ch == 3)   /* Display */
        {
            if (f == -1 || f > r)
            {
                printf("Queue is empty!\n");
            }
            else
            {
                printf("Queue is: ");

                for (i = f; i <= r; i++)
                {
                    printf("%d ", queue[i]);
                }

                printf("\n");
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