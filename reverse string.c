#include <stdio.h>

int main()
{
    char st[500];
    gets(st);
    
    int i = 0,c = 0;
    while(st[i]!=NULL){
        
        i++;
    }
    int n = i;
    // printf("%d",n);
    
    int j = n-1;
    while (st[j] != NULL)
    {
        printf("%c",st[j]);
        j--;
    }

    return 0;
}
