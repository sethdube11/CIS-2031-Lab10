#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;


struct List {
    string value;
    List* next;  //❓ Lab Question 2
};

//This function prints out all the values in a
//List, one on each line.
void printList( List* l ){
    cout << endl << "== The List ==" << endl;
    if ( l == NULL ){
        //If ths list is NULL, just print out empty
        cout << "[empty]" << endl;
    } else {
        //The list is not null, so...
        while ( l != NULL ){
            //As long as l is not null....
            cout << l->value << endl; //Print out it's value
            l = l->next; //Move on to the next value
        }
    }
}

//This function adds a new value to the
//start of the list.
//❓ Lab Question 3
void prepend(List* &list, string val){
    //❓ Lab Question 4
    //❓ Lab Question 5
    list = new List{val, list};
}

//This function removes the first item from the list
void removeFirst(List* &list){
    //❓ Lab Question 9
    //YOUR CODE HERE
    if ( list != NULL ){ //TODO Remove
        List* tmp = list;
        list = list->next;
        delete tmp;
    }
}

//This function returns true if the list haystck
//contains the value needle, and false otherwise.
bool contains(List* haystack, string needle){
    //❓ Lab Question 10
    while ( haystack != NULL ){ //TODO Remove
        if ( haystack->value == needle )
            return true;
        haystack = haystack->next; //Move on to the next value
    }
    return false;
}

void insertAt(List* &list, int pos, string value){
    //❓ Lab Question 11
}

void deleteAt(List* &list, int pos, string value){
    //❓ Lab Question 11
}

void main(){
    //Create an empty list and print it
    List* dinner = NULL;
    printList(dinner);

    //Add food one item at a time using the
    //prepend function, and print it
    prepend(dinner, "Pie");
    prepend(dinner, "Turkey");
    prepend(dinner, "Stuffing");
    prepend(dinner, "Mashed Potatoes");
    prepend(dinner, "Turnips"); //❓ Lab Question 7
    printList(dinner);

    //❓ Lab Question 6
    // YOUR CODE TO REMOVE TURNIPS HERE:
    List* turnip = dinner; //TODO Remove
    dinner = dinner->next;
    delete turnip;
    printList(dinner);

    //❓ Lab Question 10
    cout << endl;
    cout << "Is there Turkey? " << contains(dinner, "Turkey") << endl;
    cout << "Is there Spam? " << contains(dinner, "Spam") << endl;

}