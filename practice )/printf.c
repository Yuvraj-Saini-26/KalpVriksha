//this is detailed explaination about printf m use hone wale placeholders
// where %d-> integrs , %f -> float , %c -> character , %s -> string :)
# include <stdio.h>
int main(){
    int age =20;
    float weight = 94.8;
    char sex = 'M';
    char name[] = "YUVRAJ";
    printf("My name is -> %s\nMy age is -> %d\nMy gender is -> %c \nMy current weight is -> %.2f.\n",name,age,sex,weight);
    int *add=&age;
    printf("age via pointer -> %d\n", *add);
    printf("poiner address -> %p",*add);


}