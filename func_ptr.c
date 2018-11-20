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


//下面是js版本

function print(x) {
    document.write(x);
}

function println(x) {
    print(x + "<br />");
}

function add(x,y) {
    return x + y;
}

function sub(x,y) {
    return x - y;
}

function mul(x,y) {
    return x * y;
}

function  div(x,y) {
    return x / y;
}

function mod(x,y) {
    return x % y;
}

function cal(f,x,y) {
    return f(x,y);
}

var a = 100;
var b = 30;
println(cal(add,a,b));
println(cal(sub,a,b));
println(cal(mul,a,b));
println(cal(div,a,b));
println(cal(mod,a,b));
