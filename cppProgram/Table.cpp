//
// Created by jinwoo Jung on 2023/03/16.
//

#include "Table.h"

int Table::to_numeric(const string& s) {
    // Cell 이름으로 받는다.
    int col = s[0] - 'A';
    int row = atoi(s.c_str() + 1) - 1;

    if (row < max_row_size && col < max_col_size) {
        if (data_table[row][col]) {
            return data_table[row][col]->to_numeric();
        }
    }
    return 0;
}
int Table::to_numeric(int row, int col) {
    if (row < max_row_size && col < max_col_size && data_table[row][col]) {
        return data_table[row][col]->to_numeric();
    }
    return 0;
}
string Table::stringify(const string& s) {
    // Cell 이름으로 받는다.
    int col = s[0] - 'A';
    int row = atoi(s.c_str() + 1) - 1;

    if (row < max_row_size && col < max_col_size) {
        if (data_table[row][col]) {
            return data_table[row][col]->stringify();
        }
    }
    return 0;
}
string Table::stringify(int row, int col) {
    if (row < max_row_size && col < max_col_size && data_table[row][col]) {
        return data_table[row][col]->stringify();
    }
    return "";
}
std::ostream& operator<<(std::ostream& o, Table& table) {
    o << table.print_table();
    return o;
}