#include <stdio.h>

int main() {
	printf("#!/bin/bash\ngrep -v \"bin\" /etc/passwd\n");
	return 0;
}
