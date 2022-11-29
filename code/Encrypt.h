class Encrypt {
	protected :
		std::string _plain;
		std::string _cipher;
	public:
		virtual void encode() = 0;
		virtual void decode() = 0;
		std::string plain();
		std::string cipher();
};