#include<stdio.h>
#define INFINITY 99
struct node
{
    unsigned dist[20];
    unsigned from[20];
}rt[10];
int main()
{
    int costmat[20][20];
    int nodes,i,j,k,count=0;
    printf("\nEnter the number of nodes : ");
    scanf("%d",&nodes);//Enter the nodes
    printf("\nEnter the cost matrix :\n");
    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<= nodes;j++)
        {
            scanf("%d",&costmat[i][j]);
            
	    if(costmat[i][j] == 0)
		costmat[i][j] = INFINITY;

            rt[i].dist[j] = costmat[i][j];//initialise the distance equal to cost matrix
            rt[i].from[j]=j;
        }
    }
  
//We choose arbitary vertex k and we calculate the direct distance from the //node i to k using the cost matrix
 //and add the distance from k to node j
     for( i=1;i<=nodes;i++)          
         for ( j=1;j<=nodes;j++)
	    if(i==j)
		{
	                rt[i].dist[j]   =  0;
             		rt[i].from[j]   =  i;
                    	
		 }
            else
               for( k=1 ;  k <=nodes  ; k++)
                    if(  rt[i].dist[j]     >   costmat[i][k] + rt[k].dist[j]   )
                	{        
		           rt[i].dist[j]   =    costmat[i][k] +  rt[k].dist[j];
                  		  rt[i].from[j]   =  k;
                    }
     for(i=1;i<=nodes;i++)
        {
            printf("\n\n Router %d : Routing Table\n",i);
           
            for(j=1; j<=nodes;j++)
            {
               	printf("\t\nnode %d via %d Distance %d ",j,rt[i].from[j],rt[i].dist[j]);

            }
        }
    printf("\n\n");
    
}
