//
// Created by FanBig on 2023/5/14.
//

#ifndef HUFFMANCODE_ENCODEHUFFMANTREE_H
#define HUFFMANCODE_ENCODEHUFFMANTREE_H

#include "HuffmanTreeNode.h"

#include <string>
#include <iostream>

using namespace std;

class EncodeHuffmanTree {
public:
    static string &encodeHuffmanTree(HuffmanTreeNode *root, string &toEncode, string &encode);
};


#endif //HUFFMANCODE_ENCODEHUFFMANTREE_H
