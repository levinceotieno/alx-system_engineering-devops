#include <stdio.h>

int main() {
	printf("#!/bin/bash\nsort -u < input.txt | tr ' ' '\\n'\n");
	return 0;
}
