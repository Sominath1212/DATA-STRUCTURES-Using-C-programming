#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void traversal( struct node* hade )
{
    while ( hade != NULL )
    {
        printf( "Elements =%d\t" , hade->data );

        hade = hade->next;
    }

}
int main( ) {
    struct node* head;
    struct node* second;
    struct node* thard;
    struct node* forth;
    struct node* fifth;
    head = ( struct node* ) malloc( sizeof( struct node ) );
    second = ( struct node* ) malloc( sizeof( struct node ) );
    thard = ( struct node* ) malloc( sizeof( struct node ) );
    forth = ( struct node* ) malloc( sizeof( struct node ) );
    fifth = ( struct node* ) malloc( sizeof( struct node ) );
    head->data = 9;
    head->next = second;

    second->data = 12;
    second->next = thard;

    thard->data = 23;
    thard->next = forth;

    forth->data = 34;
    forth->next = fifth;

    fifth->data = 45;
    fifth->next = NULL;
    traversal( head );

    return 0;
}