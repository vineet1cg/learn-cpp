#include <iostream>
using namespace std;
// always check with a boolean value for more clarity!!
void checkIfVowel(char ch)
{
    int code = (int)ch;
    int vowels[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};
    bool isVowel = false;

    for (int i = 0; i < 10; i++)
    {
        if (code == vowels[i])
        {
            isVowel = true;
            break;
        }
    }

    if (isVowel)
        cout << ch << " is a Vowel" << endl;
    else
        cout << ch << " is a Consonant" << endl;
}
int main()
{
    checkIfVowel('a');
    checkIfVowel('b');
    return 0;
}