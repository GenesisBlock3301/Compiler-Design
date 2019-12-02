#include <stdio.h>

int main()
{
    char st[500];
    gets(st);
    
    int i = 0,c = 0;
    while(st[i]!=NULL){
        
        if (st[i] == ' '){
           c++; 
        }
        i++;
    }
    printf("%d",c);

    return 0;
}
