#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root;
void place_node(struct node *nn, struct node *rt)
{

    if (nn->data < rt->data)
    {
        if (rt->left == NULL)
        {
            // means left node contains a null value
            // indicates left child does not contain any root node

            rt->left = nn;
        }
        else
        {
            place_node(nn, rt->left);
        }
    }
    else
    {
        if (rt->right == NULL)
        {
            // onword does not contain any leaf node

            rt->right = nn;
        }
        else
        {
            place_node(nn, rt->right);
        }
    }

} // end of method
void create_node(int value)
{

    struct node *nn;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = value;
    nn->left = NULL;
    nn->right = NULL;
    if (root == NULL)
    {
        root = nn;
    }
    else
    {
        place_node(nn, root);
    }
} // end of method
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *rt)
{
    if (rt != NULL)
    {

        inorder(root->left);
        inorder(root->right);
        printf("%d\t", root->data);
    }
}
void pre_order(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        inorder(root->left);
        inorder(root->right);
    }
}
int main()
{
    int n;
    printf("how many element are you insert =\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        create_node(a[i]);
    }
    // inorder traversal

    inorder(root);
    printf("\n");
    // post order traversal
    postorder(root);

    printf("\n");
    pre_order(root);
    printf("\n");
    // pre-order traversal

    return 0;
}