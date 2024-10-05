/*
    File Name : Flashcards!.cpp
    Author Name : Michael Cates
    Date Created : 10/4/2024
    Purpose : Run the flashcards program
    ->allow user to either enter terms and definitions individually for a set of flashcards for their
    courses or add a text file with terms and definitions for the program to create flashcards with

    ->will involve a list structure of sets for each course or lecture they are studying for

    Program flow:
    1. have the user create any number of sets they want, adding each one to the list of sets
    2. have the user choose to simply study the flashcards or test them over the flashcards
        -> each flashcard will have a face(term) and a back(definition)
        -> the user will choose whether they want the face or the back to show first

        ->either the term or the definition will show, and when the user is ready to turn the card, 
        a CLS is called to imitate a card flip - i.e. term is showing, screen clears and definition is shown
        ex: ***********************
            *                     *
            *        Term         *
            *                     *
            *                     * 
            ***********************

            ***********************
            *                     *
            *      Backside       *
            *                     *
            *                     * 
            ***********************
*/
#include "Functions.h"//-->functions includes set.h, which includes flashcard.h

//main function:
int main(){

    //Variable Declarations:
    list<Flashcard> flashcards;

    string userName;
    char choice;//whether to begin the program or not

    int option;//option from the menu the user would like to perform

    //Ask the user if they would like to begin:

    //while loop:
    while(choice == 'y' || choice == 'Y'){

        //Display the menu of options

        //Switch case based on the user's chosen option

    }//end of while loop

}//end of main function




