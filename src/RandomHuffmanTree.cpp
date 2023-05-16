//
// Created by FanBig on 2023/5/15.
//

#include "RandomHuffmanTree.h"

HuffmanTreeNode *RandomHuffmanTree::getRandomHuffmanTree() {
//        char data[] = {'A', 'B', 'C', 'D', 'E'};
//        double weights[] = {10, 20, 35, 30, 5};
//
//        HuffmanTreeNode *root = CreatHuffmanTree::creatHuffmanTree(5, data, weights);

    srand((unsigned int) time(nullptr));
    char randomChar[MAX_SIZE];
    double randomWeight[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; ++i) {
        char ch = rand() % 26 + 65 + rand() % 2 * 32;
        randomChar[i] = ch;
        double wei = (double) (rand() % 5000) / 100;
        randomWeight[i] = wei;
    }

    HuffmanTreeNode *rand = CreatHuffmanTree::creatHuffmanTree(MAX_SIZE, randomChar, randomWeight);

    return rand;
}