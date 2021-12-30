//利用指针将所有元素重新赋值

#include <stdio.h>
#define a_abc 5


int main()
{
	float ff[a_abc];
	float* p;
	for (p = &ff[a_abc]; p > &ff[0];)
	{
		*--p = 0;
	}
	//不推荐使用第二种
	/*for (p = &ff[a_abc - 1]; p >= &ff[0];p--)
	{
		*p = 0;
	}*/
	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针进行比较，但不允许与指向第一个元素之前的那个内存位置的指针进行比较！！！
	return 0;
}