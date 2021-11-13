//lab5_2.cpp
#include "client.h"
#include<iostream>
#include <fstream>
int CLIENT::ClientNum = 0;
char CLIENT::ServerName= 'N';

int main()
{

	ofstream of;
	of.open("test.txt");
	of << 1 << "  " << 2 << endl;
	of.close();

    CLIENT test;
	CLIENT a(4748,'r');
	CLIENT b(4847,'f');
	CLIENT c(80009, 's');

	cout << "服务器名称为：" << CLIENT::GetServerName() << endl;
	CLIENT::ChangServerName('A');
	cout << "客户机数量为：" << CLIENT::GetClientNum() << endl;
	cout << "服务器名称为：" << CLIENT::GetServerName() << endl;
	cout << b.m_name << b.m_num;
}
