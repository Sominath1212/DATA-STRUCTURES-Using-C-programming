#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
int i = 0;
void print_link( struct node* ptr )
{
    while ( ptr != NULL )
    {
        printf( "Element =%d\t" , ptr->data );
        ptr = ptr->next;
        i++;
    }

}

int main( ) {
    struct node* head;
    struct node* second;
    struct node* thard;
    struct node* forth;
    struct node* fifth;
    struct node* sixth;
    struct node* seventh;
    struct node* eightth;
    struct node* nineth;
    struct node* tenth;
//dynamic memory allocation
    head = ( struct node* ) malloc( sizeof( struct node ) );
    second = ( struct node* ) malloc( sizeof( struct node ) );
    thard = ( struct node* ) malloc( sizeof( struct node ) );
    forth = ( struct node* ) malloc( sizeof( struct node ) );
    fifth = ( struct node* ) malloc( sizeof( struct node ) );
    sixth = ( struct node* ) malloc( sizeof( struct node ) );
    seventh = ( struct node* ) malloc( sizeof( struct node ) );
    eightth = ( struct node* ) malloc( sizeof( struct node ) );
    nineth = ( struct node* ) malloc( sizeof( struct node ) );
    tenth = ( struct node* ) malloc( sizeof( struct node ) );


    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = thard;

    thard->data = 30;
    thard->next = forth;

    forth->data = 40;
    forth->next = fifth;

    fifth->data = 50;
    fifth->next = sixth;

    sixth->data = 60;
    sixth->next = seventh;

    seventh->data = 70;
    seventh->next = eightth;

    eightth->data = 80;
    eightth->next = nineth;

    nineth->data = 90;
    nineth->next = tenth;

    tenth->data = 100;
    tenth->next = NULL;

    print_link( head ,);
    printf( "total nodes in a linked list %d" , i );
    return 0;
}