// 6.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
#include "SimpleHeader.h"
//using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*int a, b;
	
	std::cout << "请输入a和b的值 " << std::endl;
	std::cin >> a >> b;
	std::cout <<a<<'+'<<b <<'='<<sh::sum_1(a, b) << std::endl;
	std::cout << a << "+……+" << b << '=' << sh::sum_2(a, b) << std::endl;//1.10求a到b的和
	std::cout << a <<"的" << b<<"次方是"<< sh::sum_3(a, b) << std::endl;//2.11求a的b次方的值
	std::cout << a<<"和" << b << "的最大值是" << sh::max (a,b)<< std::endl;//求a、b的最大值*/
	for (int i = 1000; i <= 2000; i++)//1.19把1000到2000排序，每行10个
	{
		std::cout << i << '\t';
		if ((i + 1) % 10 == 0 )
		{
			std::cout << '\n';
		}
	}
	
	return 0;

}

