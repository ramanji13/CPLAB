#include<stdio.h>
#define pi 3.14
int main(){
	int a=5,b;
	b = a++;
	printf("%d ",b);
	b= ++a;
	printf("%d",b);
}
