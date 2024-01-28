#include <stdio.h>
#include <stdlib.h>
struct adj
{
    char ele;
    struct adj *next;
};
struct node
{
    char ele;
    struct adj *Av;
    struct node *next;
};
// define method for create vertice for adjacent lisst
struct adj *create_adv()
{
    struct adj *nn, *temp;
    nn = (struct adj *)malloc(sizeof(struct adj));
    nn->next = NULL;
    printf("Enter adjacent =\n");
    fflush(stdin);
    scanf("%c", &nn->ele);

    return nn;

} // end of method

// define method create vertice for backbon
void create_node()
{
    struct adj *temp;
    struct node *nn;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->Av = NULL;
    nn->next = NULL;
    fflush(stdin);
    printf("enter data for node =\n");
    scanf("%d", &nn->ele);

    char ch;
    do
    {
        fflush(stdin);
        printf(" %c have adjacent vertice =\n", nn->ele);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'y')
        {
            if (nn->Av == NULL)
            {
                nn->Av = create_adv();
            }
            else
            {

                temp = nn->Av;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = create_adv();
            }
        }
        else
        {
            nn->Av = NULL;
            exit(0);
        }
    } while (1);

} // end of method

int main()
{
do
{
    
} while (1);

    create_node();

    return 0;
}