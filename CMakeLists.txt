cmake_minimum_required(VERSION 3.25)
project(HuffmanCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(HuffmanCode
        include/CreatHuffmanTree.h
        include/HuffmanTreeNode.h
        src/CreatHuffmanTree.cpp
        src/HuffmanTreeNode.cpp
        src/main.cpp
        include/EncodeHuffmanTree.h
        src/EncodeHuffmanTree.cpp
        src/DecodeHuffmanTree.cpp
        include/DecodeHuffmanTree.h
        src/RandomHuffmanTree.cpp
        include/RandomHuffmanTree.h
        #        src/mainTest.cpp
        )
