//
//  LinkedList.cpp
//  prep
//
//  Created by Navinderjeet Mehrok on 2/25/16.
//  Copyright © 2016 Navinderjeet Mehrok. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList()
:root(NULL),
size(0){};

template<class T>
LinkedList<T>::~LinkedList(){
    /*
    Node<T> *temp = root;
    while(temp){
        temp = temp->next;
        delete root;
        root = temp;
    }
    size = 0;
*/
}

template<class T>
void LinkedList<T>::Insert(T value){
    Node<T> *newNode = new Node<T>();
    newNode->next = root;
    newNode->data = value;
    root = newNode;
    size++;
}

template<class T>
void LinkedList<T>::Print(){
    if(root == NULL){
        std::cout<<"List is empty"<<std::endl;
        return;
    }
    Node<T> *temp = root;
    while(temp){
        std::cout<<temp->data<<std::endl;
        temp = temp->next;
    }
}

template<class T>
int LinkedList<T>::Size(){
    return size;
}

template <class T>
bool LinkedList<T>::Remove() {
    if(!root)
        return false;
    Node<T> *temp = root;
    if(temp->next){
        root = root->next;
        
    }
    else{
        root = NULL;
    }
    delete temp;
    return true;
}

template <class T>
bool LinkedList<T>::IsEmpty() {
    return (root == NULL)?true:false;
}

template <class T>
void LinkedList<T>::operator=(LinkedList & rhs) {
    
    while(rhs.next)
    {
        Node<T> temp = this->root;
        while(temp)
        {
            
        }
    }
}
