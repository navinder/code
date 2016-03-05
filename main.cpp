//
//  main.cpp
//  prep
//
//  Created by Navinderjeet Mehrok on 2/25/16.
//  Copyright © 2016 Navinderjeet Mehrok. All rights reserved.
//

#include <iostream>
#include "MergeLinkList.hpp"
#include "MergeLinkList.cpp"
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <vector>

class samp{
public:
    samp(){}
    samp(const int value){val = value;}
    ~samp(){std::cout<<"destructor called \n";}
    
private:
    int val;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    LinkedList<int> *list = new LinkedList<int>();
    list->Insert(3);
    list->Insert(5);
    list->Insert(1);
    list->Remove();
    list->Insert(9);
    list->Print();
    
    std::cout << "Hello, World!\n";
    
    //samp ss[10];
    std::vector<std::string> *svec = new std::vector<std::string>();
    delete svec;
    //delete []ss;
    std::cout << "Hello, World!\n";
    return 0;
}
