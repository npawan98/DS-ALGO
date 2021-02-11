// C++ program to output the maximum occurring character in a string
#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
 
char getMaxOccuringChar(char* str)
{
    int count[ASCII_SIZE] = {0};//create an array to keep character count and initialize it to 0
    
    int len = strlen(str);   //length of string
    for (int i=0; i<len; i++)  //loop for character count
        count[str[i]]++;
 
    int max = -1;  // Initialize max count
    char result;   // Initialize result
 
    for (int i = 0; i < len; i++) 
   {
        if (max < count[str[i]])  //comparing a maximum count with each character count
        {
            max = count[str[i]]; //assign character count to max value if condition is true
            result = str[i];    //assign maximum character count character to result
        }
    }
 
    return result;
}
 
int main()
{
    char str[] = "sample string";
    cout << "Max occurring character is " << getMaxOccuringChar(str);
}