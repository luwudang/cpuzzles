#include <stdio.h>

typedef int (*FUNC_PTR)(int a,int b);//定义函数指针类型

int add(int x,int y)
{
	return  x + y;
}

int sub(int x,int y)
{
	return x - y;
}

int mul(int x,int y)
{
	return x * y;
}

int div(int x,int y)
{
	return x / y;
}

int mod(int x,int y)
{
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
	printf("%d\n",cal(sub,num1,num2));
	printf("%d\n",cal(mul,num1,num2));
	printf("%d\n",cal(div,num1,num2));
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
