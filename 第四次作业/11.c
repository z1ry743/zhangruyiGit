#include <stdio.h>
int main() 
 { int k=1;
 while(k<=100)
 { printf( "%d,",k);

 if (k%10==0)printf("\n"); 
 k++;
}
 return 0; 
 }