//client.h
#ifndef  Client_H
#define Client_H

#include <iostream>
#include <string>
using namespace std;

class CLIENT
{
private:
    static char ServerName;
    static int ClientNum;
public:
    CLIENT();
    ~CLIENT();
	int m_num;
	char m_name;

	 static int GetClientNum();
    static void ChangServerName(char name);
	 static char GetServerName();

    CLIENT(int i, char s);
};

#endif//Client_H
