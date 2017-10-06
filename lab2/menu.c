#include <stdio.h>
#include <stdlib.h>

int main(){
    char cmd[128];
    while(1){
        scanf("%s",cmd);
        if(!strcmp(cmd,"help"))
        {
            printf("This is help cmd\n");
        }
        else if(!strcmp(cmd,"A"))
        {
            printf("a");
        }
        else if(!strcmp(cmd,"B"))
        {
            printf("b");
        }
        else if(!strcmp(cmd,"C"))
        {
            printf("c");
        }
        else if(!strcmp(cmd,"D"))
        {
            printf("d");
        }
        else if(!strcmp(cmd,"E"))
        {
            printf("e");
        }
        else if(!strcmp(cmd,"F"))
        {
            printf("f");
        }
        else if(!strcmp(cmd,"quit"))
        {
            exit(0);
        }
        else
        {
            printf("Wrong cmd!\n");
        }
    }
}
