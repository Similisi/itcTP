#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
class Encrypt {
	protected :
		std::string _plain;
		std::string _cipher;
	public:
		Encrypt(std::string message,std::string messagecrypte);
		virtual void encode() = 0;
		virtual void decode() = 0;
		std::string plain();
		std::string cipher();
};
