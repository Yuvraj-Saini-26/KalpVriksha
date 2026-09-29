#include <stdio.h>
#include <string.h>

int isDigit(char ch){
    if(ch>='0' && ch <='9'){
        return 1;
    }
    else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 0;
    }
    else if(ch==' '){
        return 2;
    }
    return -1;
}

int parser(char exp[]){
    int expectNumber = 1;   
    for(int i=0; i<strlen(exp); i++){
        int type = isDigit(exp[i]);
        if(type == 2){
            continue;                 
        }
        else if(type == 1){
            expectNumber = 0;         
        }
        else if(type == 0){
            if(expectNumber == 1){
                return 0;             
            }
            expectNumber = 1;         
        }
        else{
            return 0;                 
        }
    }
    if(expectNumber == 1){
        return 0;
    }
    return 1;
}

int main(){
    char exp[] ="3-2+1";
    int number =0;
    // char exp[100];
    // scanf("%s",exp);

    if(parser(exp)==0){
        printf("invalid expression(parsing error :)");
        return 1;
    }

    int val[100];
    int valTop =-1;

    int opr[100];
    int oprTop =-1;

    int i=0;
    while(i<strlen(exp)){
        if(isDigit(exp[i])==1){
            number = number*10+exp[i]-'0';
            i++;
        }
        else if(isDigit(exp[i])==0){
            valTop+=1;
            val[valTop]=number;
            number =0;

            oprTop+=1;
            opr[oprTop]=exp[i];
            
            i++;
        }
        else if(isDigit(exp[i])==2){
            i++;
        }
        else{
            printf("invalid expression :)");
            break;
        }
    }




}