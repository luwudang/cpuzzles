#include <stdio.h>
 #  define LEN (sizeof(arr) / sizeof(arr[0]))

 int main(void)
 {
 	int i,arr[] = {1,2,3,4,5,6,7,8,9,10};

	for(i = -1; i < LEN + 1; i++)
		printf("%d\n",arr[i]);

	return 0;
}
