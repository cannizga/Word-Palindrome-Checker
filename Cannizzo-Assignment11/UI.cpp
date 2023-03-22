#include "UI.h"

void UI::prompt() {
	cout << "Enter the word you want to check" << endl;
}

char* UI::isPalindrome(char* reverse, char* normal) {
	cout << normal << " is indeed a palindrome!!!!!\n" << endl;
	return normal;
}

char* UI::notPalindrome(char* reverse, char* normal) {
	cout << normal << " is not a palindrome\n" << endl;
	return normal;
}

void UI::restartCheck() {
	cout << "Do You Want To Check Another Word To See If It's A Palindrome\n(0) yes\n(1) no" << endl;
}
