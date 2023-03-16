//
// Created by jinwoo Jung on 2023/03/16.
//

#ifndef CPPPROGRAM_CELL_H
#define CPPPROGRAM_CELL_H


#include "Table.h"
#include <string>

using namespace std;

class Cell {
protected:
    int x, y;
    Table* table;

    string data;

public:
    virtual string stringify();
    virtual int to_numeric();

    Cell(string data, int x, int y, Table* table);
};


#endif //CPPPROGRAM_CELL_H
