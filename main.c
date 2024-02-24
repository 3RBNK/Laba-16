#include <stdio.h>

#include "data_structures/matrix/matrix.h"
#include "algorithms/algorithms.h"





int main() {
    matrix a = create_matrix_from_array((int[]) {6, 12, 9, 2,
                                                 7, 1, 3, 4,
                                                 10, 11, 5, 1}, 3, 4);

    int v = get_min_in_area(a);

    printf("%d", v);


    return 0;
}
