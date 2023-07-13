#include <stdio.h>
    
#include <xlsxwriter.h>

void MoviesList(){
lxw_workbook *workbook = workbook_new("input.xlsx");
    if (!workbook) {
        printf("Error creating workbook\n");
        return 1;
    }

    lxw_worksheet *worksheet = workbook_get_worksheet_by_name(workbook, NULL);
    if (!worksheet) {
        printf("Error getting worksheet\n");
        return 1;
    }

    lxw_row_t row;
    lxw_col_t col;
    lxw_cell *cell;

    // Iterate through rows and columns
    for (row = 0; row < worksheet->num_rows; row++) {
        for (col = 0; col < worksheet->num_cols; col++) {
            cell = worksheet->table[row][col];
            if (cell) {
                // Get the cell value and print it
                char *value = lxw_cell_get_string(cell);
                printf("Cell[%d][%d]: %s\n", row, col, value);
            }
        }
    }

    workbook_close(workbook);



}



int main()
{
    MoviesList();
    return 0;
}