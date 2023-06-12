#include <stdio.h>

int main() {
	printf("#!/bin/bash\necho \"input\" | tr -d \'cC\'\n");
	return 0;
}
