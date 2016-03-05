//
//  MergeSortedLiinkedLists.cpp
//  prep
//
//  Created by Navinderjeet Mehrok on 2/26/16.
//  Copyright © 2016 Navinderjeet Mehrok. All rights reserved.
//

#include "MergeLinkList.hpp"
#include <random>

MergeLinkList::MergeLinkList():val(0){
    list1 = new LinkedList<int>();
    list2 = new LinkedList<int>();
    list3 = new LinkedList<int>();
    CreateLists();
    ShowLists();
    MergeLists();
    list3->Print();
}

MergeLinkList::~MergeLinkList(){
   delete(list1);
    delete(list2);
    delete(list3);
}

void MergeLinkList::ShowLists(){
    
    list1->Print();
    list2->Print();
}

void MergeLinkList::CreateLists(){
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,99);
    for(int i=0; i< 5;i++){
        list1->Insert(distribution(generator));
        list2->Insert(distribution(generator));
    }
    
}

void MergeLinkList::MergeLists(){

}