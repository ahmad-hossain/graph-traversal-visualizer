//
// Created by Ahmad Hossain on 4/16/24.
//

#ifndef UNTITLED_DFSSTRATEGY_H
#define UNTITLED_DFSSTRATEGY_H


#include "GraphTraversalStrategy.h"

class DfsStrategy : public GraphTraversalStrategy {
public:
    void traverse(vector<vector<char>> &matrix, unsigned long r, unsigned long c, unsigned long width, unsigned long height) override;
};


#endif //UNTITLED_DFSSTRATEGY_H
