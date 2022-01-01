#include<stdio.h>
#include<string.h>

int main() {
    int m = 0, n = 0, i, sl, j;
   char a[50], b[50], c[10] = {'d', 'l', 'e', 's', 't', 'x'}, d[10] = {'d', 'l', 'e', 'e', 't','x'};
    printf("Enter a string:\n");
    scanf("%s",a);
    sl = strlen(a);
    for (i = 0; i< 6; i++) 
{
        b[m] = c[i];
        m++;
    }
i = 0;
    while (i<sl) 
{
        if (a[n] == 'd' &&a[n + 1] == 'l' && a[n + 2] == 'e') 
{
b[m] = 'd';
b[m + 1] = 'l';
b[m + 2] = 'e';
b[m + 3] = 'd';
b[m + 4] = 'l';
b[m + 5] = 'e';
            m = m + 6;
            n = n + 3;
i = i + 6;
        }
        b[m] = a[n];
        m++;
        n++;
i++;
    }
    for (j = 0; j < 6; j++) 
{
        b[m] = d[j];
        m++;
    }
    for (j = 0; j < m; j++) 
{
printf("%c", b[j]);
    }
}

