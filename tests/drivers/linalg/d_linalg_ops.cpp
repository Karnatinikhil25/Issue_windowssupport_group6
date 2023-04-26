/* TESTING BASIC LINEAR ALGEBRA OPERATIONS
 * test driver program on the implementations for some basic Linear
 * Algebra operations.
 *
 * For operations on vectors (addition, subtraction) the sizes of the
 * vectors must be of equal length. This is to follow traditional
 * rules in Linear Algebra vector operations.
 */
#include "../../include/linalg/lao.hpp"
#include <cassert>
#include <iostream>
#include <stdio.h>
#include <vector>

int main() {
    mtpk::Vectors f;
    std::cout << "VECTOR/MATRIX OPERATIONS EXAMPLE" << std::endl;

    int x = f.add(1, 3);
    std::cout << "Sum = " << x << std::endl;

    return 0;
}
