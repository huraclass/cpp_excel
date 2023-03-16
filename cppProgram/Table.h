//
// Created by jinwoo Jung on 2023/03/16.
//

#ifndef CPPPROGRAM_TABLE_H
#define CPPPROGRAM_TABLE_H
#include "Cell.h"

using namespace std;
class Table {
protected:
    int max_row_size, max_col_size;

    Cell*** data_table;

public:
    Table(int max_row_size, int max_col_size);

    ~Table();

    void reg_cell(Cell* c, int row, int col);

    int to_numeric(const string& s);

    // 행 및 열 번호로 셀을 호출한다.
    int to_numeric(int row, int col);

    // 해당 셀의 문자열을 반환한다.
    string stringify(const string& s);
    string stringify(int row, int col);

    virtual string print_table() = 0;
};


#endif //CPPPROGRAM_TABLE_H
