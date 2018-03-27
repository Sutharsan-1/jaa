#include<stdio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c>='b' && c<='z')
{
printf("%c alphabet",c);
}
else
{
printf("%c not alphabet",c);
}
getch();
}
