#include "main.h"

/**
* binary_to_uint - converts binary number to an unsigned
* @b: a string of 0 and 1 chars
* Return: the converted number or 0 if b is NULL or different from 0 or 1
*/
unsigned int binary_to_uint(const char *b) {
	// Check for NULL input
	if (b == NULL) {
		return 0;
	}

	// Initialize the result
	unsigned int result = 0;

	// Iterate over the binary string and update the result
	for (const char *p = b; *p != '\0'; p++) {
		if (*p == '0') {
			result = result << 1;
		} else if (*p == '1') {
			result = (result << 1) + 1;
		} else {
			// Invalid input, return 0
			return 0;
		}
	}

	// Return the result
	return result;
}
