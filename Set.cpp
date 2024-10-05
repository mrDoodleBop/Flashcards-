/*
    File Name : Set.cpp
    Author Name : Michael Cates
    Date Created : 10/4/2024
    Purpose : Function definitions for Set class
*/

#include "Set.h"

//function definitions:

Set::Set(string n, string c, string notes, list<Flashcard> ll){
    this->setName = n;
    this->setCourse = c;
    this->setName = notes;

    this->cards = &ll;
}

//overloaded output:
ostream& operator<<(ostream& out, Set& s){
    //output the information in Set
}

//overloaded input:
istream& operator>>(istream& out, Set& s){
    //take in the information for Set
}

//setter functions:
void Set::updateName(string n){
    this->setName = n;
}

void Set::updateCourse(string c){
    this->setCourse = c;
}

void Set::updateNotes(string n){
    this->setNotes = n;
}

//getter functions:
string Set::getName(){
    return this->setName;
}

string Set::getCourse(){
    return this->setCourse;
}

string Set::getNotes(){
    return this->setNotes;
}