#include<stdio.h>
#include<stdbool.h>
int main()
{
  char arr1[100] , arr2[100];
  gets(arr1);
  int i = 0 ;
  while (arr1[i] !='\0')
  {
  i++;
  }
  printf("\n");
int len = i;
int j = 0;
for (i = len-1 ; i>=0 ; i--){
arr2[i] = arr1[j];
j++;
}
arr2[j] = '\0';
int k = 0;
 while (arr2[k] != '\0')
 {
 printf("%c",arr2[k]);
 k++;
 }
 printf("\n");

 int m = 0;
 bool flag = true;

 while (arr1[m] != NULL && arr2[m] != NULL)
 {
    if (arr1[m] != arr2[m]){
    flag = false;
    }
    m++;
 }
 if (flag == true){
 printf("Pelindrom");
 }
 else{
 printf("Not palindrom");
 }


}
