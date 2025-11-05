#include <stdio.h>
int main()
 { int i =100;
 while( 1 )
 { i = i%100+1 ;
 printf("%4d"   ,i ) ;
25
 if ( i%10==0 ) printf ("\n") ;
 i++;
 if ( i>100) break ;
}
return 0;
}