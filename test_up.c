//本程序进行联系的更新迭代
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


////计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	printf("计算n的阶乘,请输入n：");
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d的阶乘为：%d", n, i);
//	return 0;
//}

////计算前n个数的阶乘之和
//int main()
//{
//	int n = 0; //首先创建整数型n
//	int i = 0;
//	int ret = 1;//初始化阶乘
//	int sum = 0;//初始化阶乘之和
//	printf("计算前n个数的阶乘之和，请输入n：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	if (i > n)
//		printf("所得结果为：%d", sum);
//
//	return 0;
//}

////在一个n维有序数组中查找所需要的数字x，并返回其下标
////首先建立一个自动建立多维数组的函数
//int multidi(int n,int v[])
//{
//	int i = 0;
//	for (i; i < n; i++)
//		v[i] = i;
//	return v[i-1];
//}
//
////对所建数组进行循环查找x
//int search(int x,int v[])
//{
//
//}
//
//int main()
//{
//	int v[] = { 0 };
//	int n = 0;
//	int sz = sizeof(v) / sizeof(v[0]);
//	printf("创建n维有序数组，请输入n:");
//	scanf("%d", &n);
//	multidi(n, v);
//	
//	return 0;
//}

/*
//对一个数组中的数字进行从大到小排列
int main()
{
	int arr[] = { 0,50,3,12,4,89,52,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int m = 0;//创建一个变量保存每次判断的最大值
	int ms = 0;//创建一个变量保存每次判断的最大值在数组中的地址
	int i = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		i = left;
		m = arr[left];
		for (i; i <=right; i++)
		{
			
			if (m < arr[i])
			{
				m = arr[i];
				ms = i;//保存替换后数组中的位置
			}
		}
		arr[ms] = arr[left];//将最初的放到最大数值位置
		arr[left] = m;//将最大值放在最左方
		left++;
	}
	if (left == right)
	{
		for (i = 0; i < sz; i++)
			printf("%d ", arr[i]);
	}
}*/


//输出用户输入的数字内的所有能被3整除的数值
int main()
{
	int num = 0;
	int time = 3;
	int bin = 0;
	int out = 0;
	printf("请输入数字，将输出该数字内所有能被3整除数值：");
	scanf("%d", &num);
	do
	{
		out = bin * 3;
		printf("%d ", out);
		bin++;
	} while (out<=num-3);
	
	return 0;
}