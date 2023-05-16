//
// Created by FanBig on 2023/5/14.
//

#include "../include/HuffmanTreeNode.h"

HuffmanTreeNode::HuffmanTreeNode(char data, double weight, bool isLeaf) {
    this->data = data;
    this->leftChide = nullptr;
    this->rightChide = nullptr;
    this->isLeaf = isLeaf;
    this->weight = weight;
}

void HuffmanTreeNode::setChild(HuffmanTreeNode *leftChild, HuffmanTreeNode *rightChide) {
    this->leftChide = leftChild;
    this->rightChide = rightChide;
}
