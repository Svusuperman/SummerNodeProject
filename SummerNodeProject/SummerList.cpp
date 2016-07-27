//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 Henrichsen, Cody. All rights reserved.
//

#include "SummerList.hpp"
#include <assert.h>

template <class Type>
SummerList<Type> :: SummerList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index >= 0 && index <= size);
    DataNode<Type> * indexPointer = front;
    
    DataNode<Type> * newNode = new DataNode<Type>(data);
    
    if(index==0)
    {
        newNode->setNoPointer(indexPointer);
        front - newNode;
    }
    else if(index == size - 1)
    {
        end->setNewNodePointer(newNode);
        end = newNode;
    }
    else
    {
        for(int position = 0; position < index - 1; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
        DataNode<Type> * temp = indexPointer->getNodePointer();
        newNode->setNodePinter(temp);
        
        indexPointer->setNodePointer(newNode);
    
        }
}
