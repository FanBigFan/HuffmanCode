//
// Created by FanBig on 2023/5/15.
//

#include "DecodeHuffmanTree.h"

void DecodeHuffmanTree::decodeHuffmanTree(HuffmanTreeNode *root, const std::string &toDecode, std::string &decoded) {
    HuffmanTreeNode *curr = root;
    string str;

    for (char ch: toDecode) {
        if (ch == '0') {
            curr = curr->leftChide;
            str += "0";

            if (curr->isLeaf) {
//                cout << curr->data << ": " << str << " ";
                decoded.push_back(curr->data);
                str = "";
                curr = root;
            }
        } else {
            curr = curr->rightChide;
            str += "1";

            if (curr->isLeaf) {
//                cout << curr->data << ": " << str << " ";
                decoded.push_back(curr->data);
                str = "";
                curr = root;
            }
        }
    }
}