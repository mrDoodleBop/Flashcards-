/*
    File Name : Flashcard.cpp
    Author Name : Michael Cates
    Date Created : 10/4/2024
    Purpose : function definitions for Flashcard class
*/

#include "Flashcard.h"

//Function Definitions:

Flashcard::Flashcard(string t, string d){
    this->term = t;
    this->definition = d;
}


//overloaded output:
ostream& operator<<(ostream& out, Flashcard& f){
    //output the term and definition
}

//overloaded input:
istream& operator>>(istream& in, Flashcard& f){
    //take in the term and definition
}

//setter functions:
void Flashcard::updateTerm(string t){
    this->term = t;
}

void Flashcard::updateDef(string d){
    this->definition = d;
}

//getter functions:
string Flashcard::getTerm(){
    return this->term;
}

string Flashcard::getDef(){
    return this->definition;
}