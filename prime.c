#include <stdio.h>
#include <conio.h>
int main(void) 
{
int i,n,j=0;
printf("\n Enter the no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		j++;
	}
}
if(j==2)
{
	printf("\n prime");
 
}
else
{
	printf("\n Not prime");
}
	return 0;
}
