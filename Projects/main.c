#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define n 128
bool solution(char STR1[n], char STR2[n]){
int counter = 0;
 for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
         if (STR1[i] == STR2[j])
         counter++;
}
}
if(counter > 1){
return true;
 }
if(counter < 1){
return false;
}
}
int main(int argc, char* argv[])
{
char S[n];
char S0[n];
gets(S);
gets(S0);
printf("%d \n", solution(S, S0));
return 0;
}
