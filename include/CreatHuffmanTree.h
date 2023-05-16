//
// Created by FanBig on 2023/5/14.
//

#ifndef DATASTRUCTURE_CREATHUFFMANTREE_H
#define DATASTRUCTURE_CREATHUFFMANTREE_H

#include "HuffmanTreeNode.h"

#include <vector>

using namespace std;

class CreatHuffmanTree {
public:
    static HuffmanTreeNode *creatHuffmanTree(int count, char *data, double *weights);
};


#endif //DATASTRUCTURE_CREATHUFFMANTREE_H
