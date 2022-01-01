
#include<stdio.h>
#include<string.h>
int main()
{
    int fl, i, j, n = 0, m = 0;
    char msg[50], str[50];
    printf("Enter the string:\n");
    scanf("%[^\n]s",msg);
    printf("Enter the frame length:\n");
    scanf("%d",&fl);
    str[m] ='s';
    for (i = 0; msg[i] != '\0'; i++) 
{
        if (msg[i] == 's' || msg[i] == 'd' || msg[i] == '*') 
{
            str[++m] = '*';
                    }

        str[++m] = msg[n++];
                    if (n % (fl) == 0) 
{
            str[++m] = '$';
            
        }
    }
    str[++m] = 'd';
    str[++m]='\0';
    printf("Print the message \n");
printf("%s",str);
    }
