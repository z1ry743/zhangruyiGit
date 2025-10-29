#include<stdio.h>
int main()
{
  int i=1;
  switch (i)
  {
    case 1:printf("%d\t",i++);
    break;
    case 2:printf("%d\t",i++);  //1 2 3 4   i=5
    case 3:printf("%d\t",i++);   //break  1   i=2
    case 4:printf("%d\t",i++);
    break;
  
 
   
  }

  printf("\ni=%d\n",i);
  return 0;



}