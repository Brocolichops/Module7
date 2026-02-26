#pragma once
#include <stdbool.h>

/* Animal name string constants expected by testdriven.c */
#define STR_FISH	"Fish"
#define STR_FROG	"Frog"
#define STR_BIRD	"Bird"
#define STR_INSECT	"Insect"
#define STR_DOG		"Dog"
#define STR_UNKNOWN "Unknown"

#if defined(__cplusplus)
extern "C" {
#endif

/* Function prototypes from testdriven.c */
const char* guessAnimal(int nLegs, bool bCanFly, bool blivesInWater);
#if defined(__cplusplus)
}
#endif