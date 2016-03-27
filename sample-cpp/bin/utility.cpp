#include "utility.h"
using namespace std;


PrintMessage::PrintMessage(const char* msg) {
	this->msg = msg;
}


void PrintMessage::printMsg() {
	cout<< "Message being Printed" << this->msg;
}
