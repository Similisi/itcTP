#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <fstream>
#include <unistd.h>
class Encrypt {
	public:
		Encrypt(std::string message,std::string messagecrypte);
		virtual void encode() = 0;
		virtual void decode() = 0;
		std::string plain();
		std::string cipher();
		void setplain(std::string text);
		void setcipher(std::string text);
	protected :
		std::string _plain;
		std::string _cipher;
};
