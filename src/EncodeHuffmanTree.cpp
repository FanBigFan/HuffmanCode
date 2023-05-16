//
// Created by FanBig on 2023/5/14.
//

#include "EncodeHuffmanTree.h"

string &EncodeHuffmanTree::encodeHuffmanTree(HuffmanTreeNode *root, string &toEncode, string &encode) {
    HuffmanTreeNode *curr = root;

    if (curr == nullptr) {
        return toEncode;
    }

    if (curr->leftChide != nullptr) {
        encode += "0";
        encodeHuffmanTree(curr->leftChide, toEncode, encode);
    }

    if (curr->data != '#') {
        cout << curr->data << "[" << curr->weight << "," << encode << "]  ";
        toEncode.append(encode);
        if (!encode.empty()) {
            encode.pop_back();
        }
    }

    if (curr->rightChide != nullptr) {
        encode += "1";
        encodeHuffmanTree(curr->rightChide, toEncode, encode);
        if (!encode.empty()) {
            encode.pop_back();
        }
    }
    return encode;
}
