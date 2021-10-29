#include <stdio.h>

void Swap(char [], int);

int main (void){
    char cStrings[100];
    int iCnt;

    gets(cStrings);
    iCnt = 0;
    while(iCnt < 100 && cStrings[iCnt] != '\0'){
        iCnt++;
    }
    Swap(cStrings, iCnt);
}

void Swap(char x[], int j){
    char y[100];
    int i;

    j--;
    for(i = 0; i <= j; i++){
        if (x[i] == '\0') break;
            y[j-i] = x[i];
    }
    y[j + 1] = '\0';
    puts(y);
}