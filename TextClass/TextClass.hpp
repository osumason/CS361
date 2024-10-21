//
// Created by mason on 10/20/2024.
//
#include <iostream>

#ifndef TEXTCLASS_TEXTCLASS_HPP
#define TEXTCLASS_TEXTCLASS_HPP

class Link
{
    char value;
    Link* next;
    Link* prev;

public:
    Link(char value);


    Link* getNext() {return this->next;}
    char getValue() {return this -> value;}
    void setNext(Link* next) {this -> next = next;}
    void setPrev(Link* prev) {this -> prev = prev;}
};

class TextClass:public Link
{
    Link* head;
    Link* tail;

public:
    TextClass(char value);
    ~TextClass();

    void addHead(char value);
    void removeHead();

    char getHead(){return head->getValue();}

};


#endif //TEXTCLASS_TEXTCLASS_HPP
