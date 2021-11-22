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
	int a=10,b=8;
	printf("enter a operation like:\n1 for add\n2 for sub\n3 for mul\n4 for div");
	scanf("%d",&no);
switch(no){
	case 1 :
	printf("add a and b is : %d",sum(a,b));
	break;
	case 2 :
	printf("sub a and b is : %d",sub(a,b));
	break;
	case 3 :
	printf("mul a and b is : %d",mul(a,b));
	break;
	case 4 :
	printf("div a and b is : %d",div(a,b));
	break;
}

	return 0;
}

