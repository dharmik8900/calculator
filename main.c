#include<stdio.h>
int sum(int a, int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int main(){
	int a=10,b=8;
	printf("add a and b is : %d",sum(a,b));
	printf("add a and b is : %d",sub(a,b));
	return 0;
}

