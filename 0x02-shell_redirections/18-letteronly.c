#include <stdio.h>

int main() {
	printf("#!/bin/bash\ngrep \"^[A-Za-z]\" /etc/ssh/sshd_config\n");
	return 0;
}
