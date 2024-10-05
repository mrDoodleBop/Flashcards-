/*
    File Name : Flashcard.h
    Author Name : Michael Cates
    Date Created : 10/4/2024
    Purpose of File : Header file for the "Flashcard" class 
*/

#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std; // i understand that this is not good practice, but it should not be a major issue in a program this small :)

class Flashcard{

    private:
        string term, definition;

    public:
        Flashcard(){
            this->term = "N/A";
            this->definition = "N/A";
        }

        Flashcard(string t, string d);

        //overloaded output:
        friend ostream& operator<<(ostream& out, Flashcard& f){
            //output the term and definition
        }

        //overloaded input:
        friend istream& operator>>(istream& in, Flashcard& f){
            //take in the term and definition
        }

        //setter functions:
        void updateTerm(string t);

        void updateDef(string d);

        //getter functions:
        string getTerm();
        string getDef();

};//end of flashcard class

#endif