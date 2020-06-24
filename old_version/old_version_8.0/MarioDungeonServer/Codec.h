#ifndef CODEC_H
#define CODEC_H

#include <string>
#include "request.h"
#include "MysqlServer.h"
using namespace std;
class Codec
{
public:
	Codec();
	void onConnection(const TcpConnectionPtr& conn);
	string deCodeMessage(const TcpConnectionPtr& conn,const string& recv,Timestamp time);
private:
	MysqlServer _Mysql;
};

#endif //CODEC_H
