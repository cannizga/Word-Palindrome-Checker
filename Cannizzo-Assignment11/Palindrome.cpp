#include "Palindrome.h"

class myexception : public exception
{
    virtual const char* what() const throw()
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return "Word Is Too Long!!!!\n";
    }
} myex;

class myexception2 : public exception
{
    virtual const char* what() const throw()
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return "Hey I Said A Number Not A Letter!!!!\n";
    }
} myex2;

class myexception3 : public exception
{
    virtual const char* what() const throw()
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return "Hey I Said Pick 0 or 1!!!!\n";
    }
} myex3;

Palindrome::Palindrome() {
    index = 0;
    length = 0;
    while (appState == 'y') {
        while (cont == 'y') {
            char temp;
            try {
                display.prompt();
                cin.getline(input, 25);
                cout << endl;

                if (cin.fail()) {

                    correctInput = false;
                    throw myex;
                }
                else {
                    cin.clear();
                    cont = 'n';
                    correctInput = true;
                }
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }

            if (correctInput) {
                for (int i = 0; i < strlen(input); i++) {
                    input[i] = tolower(input[i]);
                }
                palindromeCheck(input);
            }

        }
        try {
            display.restartCheck();
            cin >> yesNo;
            cout << endl;
            if (cin.fail()) {
                throw myex2;
            }
            else {
                if (yesNo == 0) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cont = 'y';
                }
                else if (yesNo == 1) {
                    appState = 'n';
                }
                else {
                    throw myex3;
                    appState = 'y';
                }
            }
        }
        catch (exception& e) {
            cout << e.what() << endl;
        }
    }
}

char* Palindrome::palindromeCheck(char word[]) {

    length = strlen(word); 

    for (index = 0; index < length; index++) {
        if (word[index] != word[length - index - 1]) {
            isPalindrome = false;
            break;
        }
        else {
            isPalindrome = true;
        }
    }
    if (isPalindrome) { 
        display.isPalindrome(word, word);
    }
    else {
        display.notPalindrome(word, word);
    }
    return 0;
}
