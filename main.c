#include<stdio.h>
#include<stdlib.h>

int main(){

char path[100];
char com[100];

printf("enter file to move\n");
gets(path);

strcpy(com, "mv ");
strcat(com, path);
system(com);

return 0;
}