#include <iostream>
#include "String.h"
using namespace std;





int main()
{
	String str;
	cout << "Str: " << str.getStr() << endl;
	cout << "Size: " << str.getSize() << endl;
	String str2{ 10 };
	cout << "Str2: " << str2.getStr() << endl;
	cout << "Size: " << str2.getSize() << endl;
	String str3{ "Hello" };
	cout << "Str3: " << str3.getStr() << endl;
	cout << "Size: " << str3.getSize() << endl;
	String str4{ " God" };
	str3.strCat(str4);
	cout << "Str3: " << str3.getStr() << endl;
	cout << "Size: " << str3.getSize() << endl;
	cout << "Str3: " << str3.strStr("ll") << endl;
	str3.delChr('l');
	cout << "Str3: " << str3.getStr() << endl;
	cout << "Size: " << str3.getSize() << endl;

	return 0;
}