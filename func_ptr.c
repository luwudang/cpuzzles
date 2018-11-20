#include <stdio.h>

typedef int (*FUNC_PTR)(int a,int b);//定义函数指针类型

int add(int x,int y){
	return  x + y;
}

int substract(int x,int y){
	return x - y;
}

int multiply(int x,int y){
	return x * y;
}

int division(int x,int y){
	return x / y;
}

int mod(int x,int y){
	return x % y;
}

int cal(FUNC_PTR fun_ptr,int x,int y)
{
	return fun_ptr(x,y);//函数指针指向哪个函数就调用哪个函数
}

int main(void)
{	
	int num1 = 100,num2 = 250;
	printf("%d\n",cal(add,num1,num2));
	printf("%d\n",cal(substract,num1,num2));
	printf("%d\n",cal(multiply,num1,num2));
	printf("%d\n",cal(division,num1,num2));
	printf("%d\n",cal(mod,num1,num2));

	return 0;
}

/* Result:
	  350
	  -150
	   25000
	   0
	   100
 */
