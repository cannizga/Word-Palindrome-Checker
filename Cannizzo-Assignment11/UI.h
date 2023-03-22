#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class UI {
public:
	void prompt();
	char* isPalindrome(char* reverse, char* normal);
	char* notPalindrome(char* reverse, char* normal);
	void restartCheck();
};

