#include <stdio.h>
int main(){
    int a=10;
    int *aa=&a;
    printf("%d\n",a);
    printf("%p\n",aa);
    printf("%d\n",*aa);
    printf("%p\n",&a);
}