//
//  MergeSortedLiinkedLists.hpp
//  prep
//
//  Created by Navinderjeet Mehrok on 2/26/16.
//  Copyright © 2016 Navinderjeet Mehrok. All rights reserved.
//

#ifndef MergeLinkList_hpp
#define MergeLinkList_hpp
#include "LinkedList.h"

#include <stdio.h>

class MergeLinkList{
public:
    MergeLinkList();
    ~MergeLinkList();
    void ShowLists();
    void CreateLists();
    void MergeLists();
private:
    int val;
    LinkedList<int> *list1;
    LinkedList<int> *list2;
    LinkedList<int> *list3;
};
MergeLinkList merg;

#endif /* MergeSortedLiinkedLists_hpp */
