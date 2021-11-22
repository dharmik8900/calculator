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
	int a=10,b=8;
	printf("add a and b is : %d",sum(a,b));
	printf("sub a and b is : %d",sub(a,b));
	printf("mul a and b is : %d",mul(a,b));
	printf("div a and b is : %d",div(a,b));
	return 0;
}

