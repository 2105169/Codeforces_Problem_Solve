#include<stdio.h>
#include<stdlib.h>
int subfunction();
int main(){
    int i;
    i = subfunction();
    printf("%d", i);
    exit(0);
}