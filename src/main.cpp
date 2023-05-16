//
// Created by FanBig on 2023/5/14.
//
//# pragma once

#include "CreatHuffmanTree.h"
#include "EncodeHuffmanTree.h"
#include "DecodeHuffmanTree.h"
#include "RandomHuffmanTree.h"

int main() {
    char data[] = {'A', 'B', 'C', 'D', 'E'};
    double weights[] = {10, 20, 35, 30, 5};

    HuffmanTreeNode *root = CreatHuffmanTree::creatHuffmanTree(5, data, weights);

//    root = RandomHuffmanTree::getRandomHuffmanTree();

    string str;
    string encoded;
    EncodeHuffmanTree::encodeHuffmanTree(root, encoded, str);
    cout << "\nHuffman Encode: " << encoded << endl;

    string toDecode = "11100000010100001001111000000000000111";
    cout << "\nTo Decode: " << toDecode << endl;

    string decoded;
    DecodeHuffmanTree::decodeHuffmanTree(root, toDecode, decoded);
    cout << "Huffman Decode: " << decoded << endl;

    return 0;
}