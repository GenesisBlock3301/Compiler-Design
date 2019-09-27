#include<stdio.h>
int main()
{
    char str[100],s[100];
    int count=0,i,j,k=0,sp=0,vowel=0,con=0,digit=0;
    printf("Enter a string :");
    gets(str);
    puts(str);
    for(i=0; str[i] != '\0'; i++){
      count++;
    }
    printf("length of sring is :  %d\n",count);

    i=count-1;
    for(j=i; j>=0; j--)
    {
        s[k]=str[j];
        k++;
    }
    s[k]='\0';
    printf("Reverse of String :");
    puts(s);
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            sp++;
        }
        else if(str[i] >='0' && str[i]<= '9')
        {
           digit++;
        }

        else if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E'|| str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O'|| str[i]=='u' || str[i]=='U')
        {
            vowel++;
        }
        else
        {
            con++;
        }

         i++;
    }
    printf("space %d\n",sp);
    printf("vowel %d\n",vowel);
    printf("consonant %d\n",con);
    printf("digit %d\n",digit);



}
