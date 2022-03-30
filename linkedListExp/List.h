#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>

class List{
    public:
        List(){ first = 0; }
        bool empty(){ return first == 0; }
        void insert(DataType data);
        void display(std::ostream &out);
    private:
        Node *first;

};

#endif // LIST_H