#include "String.h"
#include <iostream>
using namespace std;

String::String() {
	size = 80;
	str = new char[size + 1];
	str[size] = '\0';
}

String::String(int new_size) {
	size = new_size;
	str = new char[size + 1];
	str[size] = '\0';
}

String::String(const char* new_str) {
	if (new_str != nullptr) {
		size = strlen(new_str);
		str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			str[i] = new_str[i];
		}
		str[size] = '\0';
	}
	else {
		str = nullptr;
	}
}

int String::getSize() {
	return size;
}

char* String::getStr() {
	return str;
}

void String::setSize(int new_size) {
	size = new_size;
}

void String::setStr(const char* new_str) {
	if (new_str != nullptr) {
		size = strlen(new_str);
		str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			str[i] = new_str[i];
		}
		str[size] = '\0';
	}
	else {
		str = nullptr;
	}
}

void String::Strcpy(String& obj) {
	if (obj.str != nullptr) {
		size = strlen(obj.str);
		this->str = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			this->str[i] = obj.str[i];
		}
		this->str[size] = '\0';
	}
	else {
		this->str = nullptr;
	}
}

bool String::strStr(const char* str) {
	int size = strlen(str);
	for (int i = 0; i < this->size; i++) {
		int score = 0;
		if (this->str[i] == str[0]) {
			for (int j = 0; j < size; i++) {
				if (this->str[i + j] == str[j]) {
					score++;
				}
				else {
					break;
				}
			}
		}
		if (score == size) {
			return true;
		}
	}
	return false;
}


int  String::Chr(char c) {
	for (int i = 0; i < size; i++) {
		if (this->str[i] == c) {
			return i;
		}
	}
	return -1;
}

int String::strLen() {
	return size;
}

void String::strCat(String& b) {
	int new_size = this->size + b.size;
	char* new_str = new char[new_size + 1];
	for (int i = 0; i < this->size; i++) {
		new_str[i] = this->str[i];
	}
	for (int i = 0; i < new_size; i++) {
		new_str[i + this->size] = b.str[i];
	}
	new_str[new_size] = '\0';
	delete[] this->str;
	this->str = new_str;
	this->size = new_size;
}

void String::delChr(char c) {
	int new_size = 0;
	int cell = 0;
	for (int i = 0; i < this->size; i++) {
		if (this->str[i] == c) {
			continue;
		}
		else {
			++new_size;
		}
	}
	char* new_str = new char[new_size+1];
	for (int i = 0; i < this->size; i++) {
		if (this->str[i] == c) {
			++cell;
		}
		else if (this->str[i] == '\0') {
			break;
		}
		else {
			new_str[i-cell] = this->str[i];
		}
	}
	new_str[new_size] = '\0';
	delete[] this->str;
	this->str = new_str;
	this->size = new_size;
}

int String::StrCmp(String& b) {
	if (this->size < b.size) {
		return -1;
	}
	else if (this->size > b.size) {
		return 1;
	}
	else {
		return 0;
	}
}

String::~String() {
	if (str != nullptr) {
		delete[] str;
	}
}
