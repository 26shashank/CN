#include<stdio.h>
#include<string.h>
char data[50],g[20],temp[20];
void XOR()
{
	for(int i=0;i<strlen(g);i++)
	temp[i]=(temp[i]==g[i]?'0':'1');
	printf("value of temp in XOR is %s\n",temp);
}
void CRC()
{
	int i,j;
	for(i=0;i<strlen(g);i++)
	temp[i]=data[i];
	do
	{
		if(temp[0]=='1')
			XOR();
		for(j=0;j<strlen(g)-1;j++)
		{
			temp[j]=temp[j+1];
			printf("\t\tvalue of temp in for is %s\n",temp);
		}
		temp[j]=data[i++];
		printf("\tvalue of temp outside for is %s\n",temp);
	}while(i<=strlen(data));
}
int main()
{
	int flag=0,n,m,k;
	int opt;
	while(1)
	{
		printf("\n 1.CRC12 \n 2.CRC16 \n 3.CRC CCITT \n 4.Default \n5.exit \n\n Enter your option \n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:strcpy(g,"11000000011");
			break;
			case 2:strcpy(g,"11000000000000101");
			break;
			case 3:strcpy(g,"10001000000100001");
			break;
			case 4:strcpy(g,"1101");
			break;
			case 5:return 0;
		}
		printf("\n Enter data");
		scanf("%s",data);
		n=strlen(data);
		m=strlen(g);
		printf("\n Generate polynomial is:%s",g);
		printf("length of g is %d  length of data is %d\n",m,n);
		
		for(k=n;k<n+m-1;k++)
			data[k]='0';
			
		printf("\n Modified data is %s\n",data);
		CRC();
		
		printf("\n cyclic redundancy check remainder value us%s",temp);
		int j;
		
		for(int k=n,j=0;k<n+m-1;k++,j++)
			data[k]=temp[j];
			
		printf("\n Modified code word is:%s",data);
	}
}
