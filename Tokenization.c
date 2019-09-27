#include<stdio.h>
int main()
{
    char string[200],container[200];
    printf("Please Enter your string: ");
    gets(string);
    puts(string);
    int i,k=0,j=0;

    printf("\nTokenization : \n");
    i=0;
    while(string[i] != '\0')
    {

        if(string[i] != ' ')
        {
            container[k]=string[i];
             k++;
        }
        if(string[i] == ' ')
        {
                container[k]='\0';
                puts(container);

        k=0;

        }
        i++;
}
container[k]='\0';
puts(container);

}
