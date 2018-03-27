#include<stdio.h>
void main()
{
int n,temp=0,n1,c;

printf("enter the no");
scanf("%d",&n);
c=n;
while(n>0)
{
n1=n%10;
temp=temp*10+n1;
n=n/10;
printf("%d\n",temp);
}
if(temp==c)
{
    printf("\n palindrome");
}
else
{
    printf("not a palindrome");
}
}
