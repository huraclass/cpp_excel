//
// Created by jinwoo Jung on 2023/03/16.
//

#ifndef CPPPROGRAM_TXTTABLE_H
#define CPPPROGRAM_TXTTABLE_H

#include <string>
#include "Table.h"

class TxtTable : public  Table{
    std::string reqeat_char(int n, char c);
    std::string col_num_to_str(int n);

public:
    TxtTable(int row, int col);

    std::string print_table();
};


#endif //CPPPROGRAM_TXTTABLE_H
