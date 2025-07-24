#include<stdio.h>
int main(void){
	int a=100;
	int *p;
	p=&a;
	printf("%d\n%p\n%p\n%d\n",a,&a,p,*p);
	return 0;
}
