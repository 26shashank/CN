#include<stdio.h>
int main() 
{
    int nodes, links, ports, choice;
printf("\nNumber of links required for simplex is:n*(n-1),where n is the number of nodes\n");
 printf("Enter the nummber of nodes:\n");
scanf("%d", &nodes);
        links = nodes * (nodes - 1);
        ports = links * 2;
printf("Enter your choice:\n1.simplex 2.duplex 3.exit\n");
scanf("%d", &choice);
        switch (choice) 
{
            case 1: printf("Links: %d \n Ports: %d\n", (links), (ports));
                break;
            case 2: printf("Links: %d \n Ports: %d\n", (links / 2), (ports / 2));
                break;
    }
}

