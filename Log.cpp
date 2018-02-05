#include<iostream>
using namespace std;

class Log
{
public:
	int LogLevelError=0, LogLevelWarning=1, LogLevelInfo=2;

private:
	int m_LogLevel=LogLevelInfo;

public:
	void SetLevel(int level)
	{
		m_LogLevel=level;
	}
	void Error(char* message)
	{
		if(m_LogLevel=LogLevelError)
			cout<<"[ERROR]: "<<message <<endl;
			
	}
	void Warn(char* message)
	{
		if(m_LogLevel=LogLevelWarning)
			cout<<"[WARNING]: "<<message <<endl;
	}
	void Info(char* message)
	{
		if(m_LogLevel=LogLevelInfo)
			cout<<"[INFO]: "<<message <<endl;
	}
	
};

int main()

{
Log oLog;
oLog.LogLevelWarning;
oLog.Warn("HELLO!!!");
	
std::cin.get();
	
}
