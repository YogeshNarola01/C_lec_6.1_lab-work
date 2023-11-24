#include<stdio.h>
#include<conio.h>
void main(){
int n;
int num=2;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
while(n>=num){
	printf("%d\n",num);
	num+=2;
}
getch();
}
