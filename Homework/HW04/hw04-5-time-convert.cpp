/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>

int main(){
    int day ;
    printf( "Input Days :\n" );
    scanf( "%d", &day ) ;

    int total ;
    total = day * 24 * 60 * 60 ;
    
    printf( "%d days = %d seconds", day, total );

    return 0 ;
}