//
// Created by FanBig on 2023/5/14.
//

#ifndef DATASTRUCTURE_HUFFMANTREENODE_H
#define DATASTRUCTURE_HUFFMANTREENODE_H


class HuffmanTreeNode {
public:
    char data;
    HuffmanTreeNode *leftChide;
    HuffmanTreeNode *rightChide;
    bool isLeaf;
    double weight;

    HuffmanTreeNode(char data, double weight, bool isLeaf);

    void setChild(HuffmanTreeNode *leftChild, HuffmanTreeNode *rightChide);
};


#endif //DATASTRUCTURE_HUFFMANTREENODE_H
