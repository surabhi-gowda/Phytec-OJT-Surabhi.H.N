#include <stdio.h>
int main()

{
  
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if(num%2==0){
       printf("The number is even\n"); 
    }else {
        printf("The number is odd\n");
    }
}
