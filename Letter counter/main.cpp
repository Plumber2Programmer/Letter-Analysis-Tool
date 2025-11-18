#include <iostream>

using namespace std;


struct LetterData{
    char letter; // letter the struct represents
    int count; // frequency of the letter
};



int main()
{

   LetterData letters[26] {};

   // initialize each struct in loop

   for(int i = 0; i < 26; i++){
     letters[i].letter = 'a' + i;
     letters[i].count = 0;

   }

    for(int i = 0; i < 26; i++){
    cout << letters[i].letter << " : " << letters[i].count << endl;
    }

    return 0;

}
