//
// Created by Ahmad Hossain on 4/16/24.
//

#ifndef UNTITLED_BFSSTRATEGY_H
#define UNTITLED_BFSSTRATEGY_H

#include "GraphTraversalStrategy.h"

class BfsStrategy : public GraphTraversalStrategy {
public:
    void traverse(vector<vector<char>> &matrix, unsigned long r, unsigned long c, unsigned long width, unsigned long height) override;
};



#endif //UNTITLED_BFSSTRATEGY_H
