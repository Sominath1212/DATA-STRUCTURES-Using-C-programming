#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main( ) {

    struct node* head;
    struct node* first;
    struct node* second;
    struct node* thard;
    struct node* forth;
    head = ( struct node* ) malloc( sizeof( struct  node ) );
    first = ( struct node* ) malloc( sizeof( struct  node ) );
    second = ( struct node* ) malloc( sizeof( struct  node ) );
    thard = ( struct node* ) malloc( sizeof( struct  node ) );
    forth = ( struct node* ) malloc( sizeof( struct  node ) );

    head->data = 70;
    head->next = first;

    first->data = 70;
    first->next = second;

    second->data = 70;
    second->next = thard;

    thard->data = 70;
    thard->next = forth;

    forth->data = 70;
    forth->next = NULL;


    printf( "%d \t" , head->data );
    printf( "%u \n" , head->next );

    printf( "%d \t" , first->data );
    printf( "%u \n" , first->next );

    printf( "%d \t" , second->data );
    printf( "%u \n" , second->next );

    printf( "%d \t" , thard->data );
    printf( "%u \n" , thard->next );



    printf( "%d \t" , forth->data );
    printf( "%u \n" , forth->next );
    return 0;
}