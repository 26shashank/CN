#include<stdio.h>
#include<string.h>
int main() 
{
    int  h, i, fl, sl, m = 1, n = 0;
    char a[100], b[100];
printf("Enter the string:\n");
        scanf("%[^\n]s",a);
    h = strlen(a);
sl = h;
    b[0] = 's';
    while (sl> 0) 
{
printf("Enter the curent frame length: ");
scanf("%d", &fl);
        for (i = 0; i<fl; i++) 
{
            if (a[n] == 's' || a[n] == 'd' || a[n] == '*') 
{
                b[m] = '*';
                m++;
            }
            b[m] = a[n];
            n++;
            m++;
        }
sl = sl - fl;
        b[m] = fl + '0';
        m++;
        }
    b[++m] = 'd';
    b[++m] = '\0';
    printf("\nString After Framing %s",b);
    
}
