//
// Created by FanBig on 2023/5/15.
//

#ifndef HUFFMANCODE_RANDOMHUFFMANTREE_H
#define HUFFMANCODE_RANDOMHUFFMANTREE_H

#include "CreatHuffmanTree.h"

#include <iostream>
#include <ctime>

#define MAX_SIZE 10

using namespace std;

class RandomHuffmanTree {
public:
    static HuffmanTreeNode *getRandomHuffmanTree();
};


#endif //HUFFMANCODE_RANDOMHUFFMANTREE_H
