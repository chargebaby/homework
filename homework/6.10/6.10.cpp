// 6.10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<iostream>
#include "SimpleHeader.h"
//using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*int a, b;
	
	std::cout << "������a��b��ֵ " << std::endl;
	std::cin >> a >> b;
	std::cout <<a<<'+'<<b <<'='<<sh::sum_1(a, b) << std::endl;
	std::cout << a << "+����+" << b << '=' << sh::sum_2(a, b) << std::endl;//1.10��a��b�ĺ�
	std::cout << a <<"��" << b<<"�η���"<< sh::sum_3(a, b) << std::endl;//2.11��a��b�η���ֵ
	std::cout << a<<"��" << b << "�����ֵ��" << sh::max (a,b)<< std::endl;//��a��b�����ֵ*/
	for (int i = 1000; i <= 2000; i++)//1.19��1000��2000����ÿ��10��
	{
		std::cout << i << '\t';
		if ((i + 1) % 10 == 0 )
		{
			std::cout << '\n';
		}
	}
	
	return 0;

}

