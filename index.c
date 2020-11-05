#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifndef PUB
#define PUB
const int arr[] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
const char header[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
#endif

void program_main(char *s){
    int sum=0;
    int i=0,j=8,check;
    for(i=0;s[i]!='\n'&&s[i]!='\0';i++,j--){
        check = (s[i]-'0');
        sum+=((s[i]-'0')*j);
    }
    check = check==0?10:check;
    for(i=0;i<26;i++){
        if((10-((arr[i]/10)+((arr[i]%10)*9)+sum)%10)==check){
            printf("%c",header[i]);
        }
    }
    printf("\n");
}
int main(){
    char keyin[10];
    while(scanf("%s",keyin)!=EOF){
        program_main(keyin);
    }
    return 0;
}