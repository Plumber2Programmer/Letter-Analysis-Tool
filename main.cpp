#include <iostream>
#include <string>

using namespace std;


struct Letter{
    char letter; // letter the struct represents
    int count; // frequency of the letter
};


    // This function initializes the variables letter and count instances inside of the struct letter.
    // (Starts them at the first position of the array, and starts the counter at 0.
void initletters(Letter letters[], int size){
    for(int i = 0; i < size; i++){
    letters[i].letter = 'a' + i;
    letters[i].count = 0;
    }
}

    // This function is the counting loop. It only counts within the indexes 0-25 (a-z)
void countletters(Letter letters[], const std::string& text){
    for(char c: text){
        if(c >= 'a' && c <= 'z')
        letters[c - 'a'].count++;
    }
}

    // This function loops the printing operation until all of the values inisde of the array have been printed.
void printletters(const Letter letters[], int size){
    for(int i = 0; i < size; i++){
    std::cout << letters[i].letter << " : " << letters[i].count << endl;
    }
}



int main()
{
   // This assigns the memory size that gets passed to the functions. (Proper memory allocation)
   /* We use const int Letter_count = 26 because we want to ensure that the integers making up the data
   is not changed or modified. Those are our constants that we are analyzing.*/
   // We then assign the size to the array using the variable instead of a hardcoded 26 for flexibility.
   const int Letter_count = 26;
   Letter letters[Letter_count];


   // Initialize all letters
   initletters(letters, Letter_count);


   std::cout << "Enter line of text:";
   string text;
   getline(cin, text);


   // Count letters inside the input
   countletters(letters, text);


   // Print processed data
   printletters(letters, Letter_count);



    return 0;

}
