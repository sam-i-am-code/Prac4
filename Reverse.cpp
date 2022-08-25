#include "Reverse.h"

Reverse::Reverse(/* args */)
{
}
int Reverse::reverseDigit(int value){
    static int total = 0;
    if(value==0){
        return total;
    }else{
        total = (total * 10) + (value % 10);
        return reverseDigit(value / 10);
    }
}
string Reverse::reverseString(string letters){
    if (letters.length() <= 0) return NULL;
    static string reverse;
    if(letters.length()==0){
        return reverse;
    }else{
        reverse.push_back(letters[letters.length()-1]);
        letters.pop_back();
        return reverseString(letters);
    }
}

Reverse::~Reverse()
{
}
