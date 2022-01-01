#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
struct frame
{
    int fslno;
    char finfo[20];
};
struct frame arr[10];
int n;
void sort()
{
     int i,j,ex;   
    struct frame temp;
     for(i=0;i<n;i++)
        {
            ex=0;
            for(j=0;j<n-i-1;j++)   
         if(arr[j].fslno>arr[j+1].fslno)
                 {
                     temp=arr[j];           
          arr[j]=arr[j+1];           
            arr[j+1]=temp;            
             ex++;        
         }       
        
         if(ex==0) break;        
    }
} 

void main()
{

     int i; 
     char msg[100];
     printf("\n Enter the number of frames \n");    
     scanf("%d",&n);    
     for(i=0;i<n;i++)    
     { 
                
         printf("\n Enter the frame sequence number & data\n");
         scanf("%d",&arr[i].fslno);  
         //printf("\n Enter the frame data\n");
         gets(arr[i].finfo);
    }

     sort();    
     strcpy(msg,arr[0].finfo);
     int j=0;
     for(i=0;i<n;i++)
        {
    	   for(int k=0;k<3;k++)
    	   {
    	       msg[j++]=arr[i].finfo[k];
    	   }
    	    
        }
        msg[j]='\0';
    puts(msg);
}


