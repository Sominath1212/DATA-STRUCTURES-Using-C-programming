// #include<stdio.h>
// int main( ) {
//     int i = 3;
//     printf( "\nAddress of i=%u" , &i );
//     printf( "\nvalue of i=%d" , i );
//     printf( "\nvalue of i=%d" , *( &i ) );


//     return 0;
// }

//second onece is
// #include<stdio.h>
// int main( ) {
//     int i = 3;
//     int* j;
//     j = &i;
//     printf( "\naddress of i=%u" , &i );
//     printf( "\naddress of i=%u" , j );
//     printf( "\naddress if j=%u" , &j );

//     printf( "\nvalue of j=%u" , j );
//     printf( "\nvalue of i=%d" , i );
//     printf( "\nvalue of i=%d" , *j );
//     printf( "\nvalue of i=%d" , *( &i ) );

//     return 0;
// }
#include<conio.h>

#include<stdio.h>
int main( ) {
    int i = 3 , * j , ** k;
    j = &i;
    k = &j;
    printf( "\naddress of i=%u" , &i );
    printf( "\naddress of i=%u" , *k );
    printf( "\naddress of j=%u" , &j );
    printf( "\naddress of j=%u" , *k );
    printf( "\naddress of k=%u" , &k );
    printf( "\nvalue of j=%u" , j );
    printf( "\nvalue of k=%u" , k );
    printf( "\nvalue of i=%d" , i );
    printf( "\nvalue of i=%d" , *( &i ) );
    printf( "\nvalue of i=%d" , *j );
    printf( "\nvalue of value of i=%d" , **k );

    return 0;
}