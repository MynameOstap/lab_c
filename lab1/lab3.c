#include <stdio.h>

int main(){
    int i = 0;
    int s = 0;
    while (i<21)
    {
        i += 3;
        s += i;
        
    }
    printf("%d\n",s);
    i = 0;
    s = 0;
    do  {
        printf("input a number:");
        scanf("%d",&s);
        i += s;

    }while(i<100);
    printf("%d\n",i);

    i = 0;
    s = 0;
     while (i<36)
    {
        i += 4;
        s += i;
    }
    printf("%d\n",s);
    i = 0;
    s = 0;
    do  {
        printf("input a number:");
        scanf("%d",&s);
        i += s;

    }while(i<50);
    printf("%d\n",i);
    i = 0;
    s = 0;
    printf("input amount:");
    scanf("%d",&i);
    for (int d = 0; d<i; d++) {
        s = (d+1)*5;
    }
    printf("%d",s);
    return 0;
}