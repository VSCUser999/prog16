#include <stdio.h>

int main (void){
    char x[100],y[100];
    int i,j;

    gets(x);

    j = 0;
    while(j < 100){
        if (x[j] == '\0') break;
        else j++;
    }

    j--;
    for(i = 0; i <= j; i++){
        y[j-i] = x[i];
    }
    y[j + 1] = '\0';

    puts(y);
}