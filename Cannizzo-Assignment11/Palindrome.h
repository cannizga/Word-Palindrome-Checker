#include <string>
#include "UI.h"
using namespace std;
class Palindrome
{
private:
	char input[25], cont = 'y', appState = 'y';
	int length, index, yesNo;
	bool isPalindrome = false, correctInput = false;
	UI display;
public:
	Palindrome();
	char* palindromeCheck(char word[]);
};

