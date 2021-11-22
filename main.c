#include<stdio.h>
int sum(int a, int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int main(){
	int no;
	int a,b;
	printf("Enter a first number:");
	scanf("%d",&a);
	printf("\nEnter a second number:");
	scanf("%d",&b);
	printf("\nenter a operation like:\n1 for add\n2 for sub\n3 for mul\n4 for div\n");
	scanf("%d",&no);
switch(no){
	case 1 :
	printf("Add a and b is : %d\n",sum(a,b));
	break;
	case 2 :
	printf("Sub a and b is : %d\n",sub(a,b));
	break;
	case 3 :
	printf("Mul a and b is : %d\n",mul(a,b));
	break;
	case 4 :
	printf("Div a and b is : %d\n",div(a,b));
	break;
}

	return 0;
}

