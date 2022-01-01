#include<stdio.h>
#include<string.h>
char a[50];
char b[50];
char flag[10] = "01111110";
int main() 
{
    int i = 0, j = 8, n, k;
    printf("Enter the message:\n");
    scanf("%s",a);
    strcpy(b,flag);
    n = strlen(a);
    for (k = 0; k < n; k++) 
{
        if (a[k] == '0' &&a[k + 1] == '1' && a[k + 2] == '1' && a[k + 3] == '1' && a[k + 4] == '1' && a[k + 5] == '1') 
  {
b[j] = '0';
b[j + 1] = '1';
b[j + 2] = '1';
b[j + 3] = '1';
b[j + 4] = '1';
b[j + 5] = '1';
b[j + 6] = '0';
i = i + 6;
 j = j + 7;
   }
        b[j++] = a[i++];
 }
    strcat(b, flag);
printf("\nMessage after bit Stuffing");
    printf("%s",b);
}

