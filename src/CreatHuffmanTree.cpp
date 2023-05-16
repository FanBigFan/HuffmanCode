//
// Created by FanBig on 2023/5/14.
//

#include "../include/CreatHuffmanTree.h"

HuffmanTreeNode *CreatHuffmanTree::creatHuffmanTree(int count, char *data, double *weights) {
    // 创建森林
    vector<HuffmanTreeNode *> vec_Forest;
    vec_Forest.reserve(count);

    // 遍历叶子结点
    for (int i = 0; i < count; ++i) {
        vec_Forest.push_back(new HuffmanTreeNode(data[i], weights[i], true));
    }

    // 找到最小权重的两个叶子结点，然后合并。
    for (int i = 0; i < count - 1; ++i) {
        HuffmanTreeNode *minNode1 = nullptr;
        HuffmanTreeNode *minNode2 = nullptr;

        int index = 0;
        double minWeight = 999999;

        for (int j = 0; j < count - i; ++j) {
            if ((vec_Forest.at(j)->weight) < minWeight) {
                minWeight = vec_Forest.at(j)->weight;
                minNode1 = vec_Forest.at(j);
                index = j;
            }
        }
        vec_Forest.erase(vec_Forest.begin() + index);

        index = 0;
        minWeight = 999999;
        
        for (int j = 0; j < count - i - 1; ++j) {
            if ((vec_Forest.at(j)->weight) < minWeight) {
                minWeight = vec_Forest.at(j)->weight;
                minNode2 = vec_Forest.at(j);
                index = j;
            }
        }
        vec_Forest.erase(vec_Forest.begin() + index);

        auto mergeNode = new HuffmanTreeNode('#', minNode1->weight + minNode2->weight, false);
        mergeNode->leftChide = minNode1;
        mergeNode->rightChide = minNode2;

        vec_Forest.push_back(mergeNode);
    }

    return vec_Forest[0];
}