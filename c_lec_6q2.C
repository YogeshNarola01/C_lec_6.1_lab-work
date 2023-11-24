#include<stdio.h>
#include<conio.h>
void main(){
int n;
int num=1;
clrscr();
printf("Enter a Number: ");
scanf("%d",&n);
while(n>=num){
	printf("%d\n",n);
	n--;
}
getch();
}
