#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
   int i, x;
   char str[100];
   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   //using switch case statements
   switch(x)
   {
   case 1:
   printf("\nPlease enter a string:\t");
   //fgets(str,100,stdin);
   scanf("%s",str);
   int length=strlen(str);
   for (int i=0;i<length;i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(str[i]))
            str[i]= (str[i]+3-65)%26 +65;
 
    // Encrypt Lowercase letters
    else
        str[i]= (str[i]+3-97)%26 +97;
    }
      //for(i = 0; (i < 100 && str[i] != '\0'); i++)
       // str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
     
   printf("\nPlease enter a string:\t");
   //fgets(str,100,stdin);
   scanf("%s",str);
   length=strlen(str);
   for (int i=0;i<length;i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(str[i]))
            str[i]= (str[i]-3-65)%26 +65; ////the key for decryption is 3 that is substracted to ASCII value
     // Encrypt Lowercase letters
else
        str[i]= (str[i]-3-97)%26 +97;
    }
     printf("\nDecrypted string: %s\n", str);
      break;
   default:
      printf("\nError\n");
   }
   return 0;
}
