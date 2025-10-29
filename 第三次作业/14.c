#include <stdio.h>
int main() {
    int num, digit,  temp;
    int count=0;
    int digits[5];
    
    printf("请输入一个不多于5位的正整数: ");
    scanf("%d", &num);
    
    if (num <= 0 || num > 99999) {
        printf("输入错误!\n");
        return 1;
    }
    
   
   
    while (num >=1) {
        
        num /= 10;
        count++;
    }
     printf("位数\n");
    switch(count) {
        case 1: printf("1"); break;
        case 2: printf("2"); break;
        case 3: printf("3"); break;
        case 4: printf("4"); break;
        case 5: printf("5"); break;
    }
   
   
    printf("每一位数字: ");
    int w,q,b,s,g;
    if(count=5){
    w=num/10000;
    q=(num/1000)%10;
   b =(num/100)%10;
   s= (num/10)%10;
   g=num%10;
   printf("%d,%d,%d,%d,%d",w,q,b,s,g);
    
    printf("逆序数字: ");
    printf("%d,%d,%d,%d,%d",g,s,b,q,w);
    }
    if(count=4){
    
    q=(num/1000)%10;
   b =(num/100)%10;
   s= (num/10)%10;
   g=num%10;
   printf("%d,%d,%d,%d",q,b,s,g);
    
    printf("逆序数字: ");
    printf("%d,%d,%d,%d",g,s,b,q);
    }
    if(count=3){
   
   b =(num/100)%10;
   s= (num/10)%10;
   g=num%10;
   printf("%d,%d,%d",b,s,g);
    
    printf("逆序数字: ");
    printf("%d,%d,%d",g,s,b);
    }
    if(count=2){
   
   s= (num/10)%10;
   g=num%10;
   printf("%d,%d",s,g);
    
    printf("逆序数字: ");
    printf("%d,%d",g,s);
    }
    if(count=1){
   
   g=num%10;
   printf("%d",g);
    
    printf("逆序数字: ");
    printf("%d",g);
    }