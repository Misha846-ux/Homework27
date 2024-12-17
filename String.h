#pragma once
class String {
private:
	int size;
	char* str;
public:
	String();
	String(int new_size);
	String(const char* new_str);
	int getSize();
	char* getStr();
	void setSize(int new_size);
	void setStr(const char* new_str);
	void Strcpy(String& obj);
	bool strStr(const char* str);
	int  Chr(char c);
	int strLen();
	void strCat(String& b);
	void delChr(char c);
	int StrCmp(String& b);
	~String();
};

