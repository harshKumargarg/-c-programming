// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,y,max;
    printf("enter two number");
    scanf("%d %d", &x,&y);
    max= x>y ? x:y;
    
    printf("greater number is %d",max);
    
    return 0;
}
