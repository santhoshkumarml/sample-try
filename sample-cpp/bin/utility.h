#include<iostream>

class PrintMessage {
private:
	const char* msg;
public:
  PrintMessage(const char* msg);
  void printMsg();
};
