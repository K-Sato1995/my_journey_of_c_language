#include <stdio.h>

int main() {
  // Initialize Multidimentional array
  // This two-dimensional array can be considered as a table which will have [3] number of rows and [4] number of columns.
  int m_array[3][4] = {
    {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
    {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
    {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
  };

  // Accessing Two-Dimensional Array Elements
  printf("%d", m_array[1][2]); //=> 6
  return 0;
};
