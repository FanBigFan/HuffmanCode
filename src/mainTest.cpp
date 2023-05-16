//
// Created by FanBig on 2023/5/16.
//

#include<iostream>
#include <ctime>

#define MAX_SIZE 10

using namespace std;

int main() {
    srand((unsigned int) time(nullptr));
    char randomChar[MAX_SIZE];
    double randomWeight[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; ++i) {
        char ch = (char) ('a' + rand() % 26);
        randomChar[i] = ch;
        double wei = (double) (rand() % 5000) / 100;
        randomWeight[i] = wei;
    }

    for (int i = 0; i < 10; ++i) {
        cout << randomChar[i] << " " << randomWeight[i] << endl;
    }

    return 0;
}