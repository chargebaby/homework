#include "SimpleHeader.h"
#include "stdafx.h"
namespace sh
{

	int sum_1(int a, int b)
	{
		return a + b;
	}

	int sum_2(int a,int b)//��a��b������֮��ĺ�
	{
		int min = ((a <= b ? a : b));
		int max = ((a >= b ? a : b));
		int sum_2 = 0;
		int i = min;
		while (i <= max)
		{
			sum_2 = sum_2 + i;
			i++;
		}
		return sum_2;
	}

	int sum_3(int a, int b)//��a��b�η�
	{
		int i;
		int sum_3 = 1;
		for (i = 1; i <= b; ++i)
		{
			sum_3 *= a;


		}
		return sum_3;
	}
	int max(int a, int b)//��a��b�����ֵ
	{
		 
		return(a >= b ? a : b);
	}
	

}