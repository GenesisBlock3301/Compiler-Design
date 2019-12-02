#include<stdio.h>

int main()
{
  char arr[100];
  int i = 0 ;
  gets(arr);
  while (arr[i]!='\0')
  {
  i++;
  }
  int len = i;
  int j,c=0;
  for(j = 0 ; j < len ;)
  {
    if(arr[j] == 'a' && arr[j+1] == ' '){
    c++;
    j+=2;
    }
    else if (arr[j] == 'a' && arr[j+1] == 'n' && arr[j+2] == ' ')
    {
       c++;
       j+=3;
    }
    else if (arr[j] == 't' && arr[j+1] == 'h' && arr[j+2] == 'e' && arr[j+3] == ' ')
    {
       c++;
       j+=4;
    }
    else{
    j++;
    }
  }
  printf("%d\n",c);
}
