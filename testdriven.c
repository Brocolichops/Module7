#include <stdio.h>
#include "testdriven.h"


const char* guessAnimal(int nLegs, bool bCanFly, bool blivesInWater) {

    if (blivesInWater) {
        if (nLegs == 0)
            return STR_FISH;
    }

	//more conditional statements to be added for other animals

    return STR_UNKNOWN;
}



int main() {
	return 0;
}


















//printf("%d\n", TypeOfTriangle(3, 3, 3)); // Should print 1 (Equilateral)
//printf("%d\n", TypeOfTriangle(3, 4, 4)); // Should print 2 (Isosceles)
//printf("%d\n", TypeOfTriangle(3, 4, 5)); // Should print 3 (Scalene)
//printf("%d\n", TypeOfTriangle(1, 2, 3)); // Should print 0 (Not a triangle)
//printf("%d\n", TypeOfTriangle(-1, 2, 3)); // Should print 0 (Not a triangle)
//
//if (a <= 0 || b <= 0 || c <= 0) {
//	return 0; // Not a triangle
//}
//if (a + b <= c || a + c <= b || b + c <= a) {
//	return 0; // Not a triangle
//}
//if (a == b && b == c) {
//	return 1; // Equilateral
//}
//if (a == b || b == c || a == c) {
//	return 2; // Isosceles
//}
//return 3; // Scalene
//
