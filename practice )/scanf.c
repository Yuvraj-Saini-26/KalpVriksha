#include <stdio.h>
#include<string.h>

int main(){
    // int a;
    // scanf("%d",&a);
    // printf("%d",a);
    // char name[30];
    // printf("please enter your name :) \n");
    // scanf("%s",name);
    // printf("is your name %s",name);
    // printf("the length of chars of your name is %d",strlen(name));
    char exp[]="321";
    int number =0;
    for(int i=0;i<strlen(exp);i++){
        number=number*10+(exp[i]-'0');
    }
    printf("%d",number);

}