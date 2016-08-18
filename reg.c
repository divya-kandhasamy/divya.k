#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count=0;
int reg[10];
printf("Enter the number of register numbers");
scanf("%d",&n);
printf("Enter the register numbers");
for(i=0;i<n;i++){
scanf("%d",&reg[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(reg[i]==reg[j])
{
count++;
a[j]='\0';
}
if(count>0)
{
printf("%d",reg[i]);
c=0;
}
getch();
}
