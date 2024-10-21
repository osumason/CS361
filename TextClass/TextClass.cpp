//
// Created by mason on 10/20/2024.
//
#include "TextClass.hpp"

Link::Link(char value): value(value), next(nullptr), prev(nullptr){}//constructor

TextClass::TextClass(char value) : Link(value) { head = nullptr; tail = nullptr;} // constructor


/*TextClass::~TextClass() { //destructor

    Link* current = head;
    Link* next = nullptr;

    while (current)
    {
        next = current->getNext();
        delete current;
        current = next;
        std::cout << "deleted TextClass\n";
    }

}*/

TextClass::~TextClass()//destructor
{
    while (head)
    {
        removeHead();
    }
}



void TextClass::addHead(char value)
{
    if (head == nullptr)
    {
        head = tail = new Link(value);
    }
    else
    {
        Link* temp = new Link(value);

        head->setPrev(temp);
        head = temp;

        std::cout << "head added" << '\n';
        delete temp;
    }

}

void TextClass::removeHead()
{
    if (head == nullptr)
    {
        throw std::out_of_range ("list is empty");
    }

    Link* temp = head;

    head = head->getNext();

    if (head == nullptr)
    {
        tail = nullptr;
    }
    else
    {
        head->setPrev(nullptr);
    }

    std::cout << "removed head\n";
    delete temp;


}
