#include<stdio.h>  
#include<conio.h>  

main()  
{  
int n,r,sum=0,bientam;  

printf("Nhap mot so bat ky = ");  
scanf("%d",&n);  
bientam=n;  
while(n>0)  
{  
r=n%10;  
sum=sum+(r*r*r);  
n=n/10;  
}  
if(bientam==sum)  
printf("\nSo da cho la so Armstrong ");  
else  
printf("\nSo da cho khong phai la so Armstrong");  
}