#include <stdio.h>

int main() {
	printf("#!/bin/bash\ngrep -A 3 \"root\" /etc/passwd\n");
	return 0;
}
