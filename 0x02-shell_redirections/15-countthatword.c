#include <stdio.h>

int main() {
	printf("#!/bin/bash\ngrep -c \"bin\" /etc/passwd\n");
	return 0;
}
