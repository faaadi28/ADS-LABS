
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

// Insertion
struct node* insert(struct node *root, int x) {
    if (root == NULL) {
        root = malloc(sizeof(struct node));
        root->data = x;
        root->left = root->right = NULL;
    }
    else if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

// Preorder Traversal
void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Searching
void search(struct node *root, int x) {
    if (root == NULL)
        printf("Not Found");
    else if (root->data == x)
        printf("Found");
    else if (x < root->data)
        search(root->left, x);
    else
        search(root->right, x);
}

// Deletion
struct node* deleteNode(struct node *root, int x) {
    struct node *temp;

    if (root == NULL)
        return root;

    if (x < root->data)
        root->left = deleteNode(root->left, x);

    else if (x > root->data)
        root->right = deleteNode(root->right, x);

    else {
        if (root->left == NULL) {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = root->right;
        while (temp->left != NULL)
            temp = temp->left;

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int main() {
    struct node *root = NULL;
    int ch, x;

    while (1) {
        printf("\n1. Insertion");
        printf("\n2. Searching");
        printf("\n3. Deletion");
        printf("\n4. Preorder");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &x);
                search(root, x);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &x);
                root = deleteNode(root, x);
                break;

            case 4:
                printf("Preorder: ");
                preorder(root);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }
}
