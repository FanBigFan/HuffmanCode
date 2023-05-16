//
// Created by FanBig on 2023/5/15.
//

#ifndef HUFFMANCODE_DECODEHUFFMANTREE_H
#define HUFFMANCODE_DECODEHUFFMANTREE_H

#include "HuffmanTreeNode.h"

#include <string>

using namespace std;

class DecodeHuffmanTree {
public:
    static void decodeHuffmanTree(HuffmanTreeNode *root, const string &toDecode, string &decoded);
};


#endif //HUFFMANCODE_DECODEHUFFMANTREE_H
