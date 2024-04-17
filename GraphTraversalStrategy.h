//
// Created by Ahmad Hossain on 4/16/24.
//

#ifndef UNTITLED_GRAPHTRAVERSALSTRATEGY_H
#define UNTITLED_GRAPHTRAVERSALSTRATEGY_H

#include <iostream>

using namespace std;

class GraphTraversalStrategy {
public:
    virtual void traverse(vector<vector<char>> &matrix, unsigned long r, unsigned long c, unsigned long width, unsigned long height) = 0;

    virtual ~GraphTraversalStrategy() = default;
};


#endif //UNTITLED_GRAPHTRAVERSALSTRATEGY_H
