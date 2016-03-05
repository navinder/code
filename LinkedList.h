//
//  LinkedList.h
//  prep
//
//  Created by Navinderjeet Mehrok on 2/25/16.
//  Copyright © 2016 Navinderjeet Mehrok. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

template<class T>
struct Node{
    T data;
    Node* next;
};

template<class T>
class LinkedList{
public:
    LinkedList();
    ~LinkedList();
    void operator=(LinkedList& rhsList);
    void Insert(T addNode);
    bool Remove();
    int Size();
    bool IsEmpty();
    void Print();
    
private:
    Node<T> *root;
    int size;
    
};

#endif /* LinkedList_h */
