<<<<<<< Updated upstream
/*
    File Name : Flashcard.h
    Author Name : Michael Cates
    Date Created : 10/4/2024 
    Purpose of File : Header file for the flashcard "Set" class 
*/

#ifndef SET_H
#define SET_H 

#include "Flashcard.h"
#include <list>

class Set{

    private:
        string setName, setCourse, setNotes;
        list<Flashcard>* cards;//pointer to a list of cards 

    public:
        Set(){
            this->setName = "N/A";
            this->setCourse = "N/A";
            this->setNotes = "N/A";
        }

        Set(string n, string c, string notes, list<Flashcard> ll);

        //overloaded output:
        friend ostream& operator<<(ostream& out, Set& s);

        //overloaded input:
        friend istream& operator>>(istream& out, Set& s);

        //setter functions:
        void updateName(string n);
        void updateCourse(string c);
        void updateNotes(string n);

        //getter functions:
        string getName();
        string getCourse();
        string getNotes();


};//end of Set class

=======
/*
    File Name : Flashcard.h
    Author Name : Michael Cates
    Date Created : 10/4/2024 
    Purpose of File : Header file for the flashcard "Set" class 
*/

#ifndef SET_H
#define SET_H 

#include "Flashcard.h"
#include <list>

class Set{

    private:
        string setName, setCourse, setNotes;
        list<Flashcard>* cards;//pointer to a list of cards 

    public:
        Set(){
            this->setName = "N/A";
            this->setCourse = "N/A";
            this->setNotes = "N/A";
        }

        Set(string n, string c, string notes, list<Flashcard> ll);

        //overloaded output:
        friend ostream& operator<<(ostream& out, Set& s);

        //overloaded input:
        friend istream& operator>>(istream& out, Set& s);

        //setter functions:
        void updateName(string n);
        void updateCourse(string c);
        void updateNotes(string n);

        //getter functions:
        string getName();
        string getCourse();
        string getNotes();


};//end of Set class

>>>>>>> Stashed changes
#endif