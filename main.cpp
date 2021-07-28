
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
 char sentence[200]; // declare a new array
 int i;

 cout << "Enter a sentence ending in a period:" << endl;

 cin.getline(sentence, 200);            //input from cin becomes array size

sentence[0] = toupper(sentence[0]);     // makes first letter uppercase
for (i=1; sentence[i]; i++) {
     sentence[i] = tolower(sentence[i]);    //makes all other letters lower case
     }

 for (i=0; sentence[i]; i++){          // loop to find empty spaces

     if (isspace(sentence[i]))
        sentence[i] = ' ';              //replace spaces with a single space
  }


 i=0;
 while (sentence[i]!='\0'){

     if (sentence[i]==' ' && sentence[i+1]==' ')        // loop to remove extra spaces between words
        for (int j=i; sentence[j]; j++){

         sentence[j] = sentence[j+1];
 }
    else
        i++;
 }
    cout << "This is your formatted sentence:" << endl;         //output
    cout << sentence << endl;
}
