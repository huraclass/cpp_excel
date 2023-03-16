//
// Created by jinwoo Jung on 2023/03/16.
//

#include "Cell.h"

Cell::Cell(string data, int x, int y, Table* table)
        : data(data), x(x), y(y), table(table) {}

string Cell::stringify() { return data; }
int Cell::to_numeric() { return 0; }