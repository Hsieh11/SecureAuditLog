#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main (int argc, char *argv[]) {
 	
	//int maxBufSize = 256;
	char buffer[256];


	while(1) {
		// Get the next command to run
		scanf("%s", buffer);

		// Create log cmd
		if (strncmp(buffer, "createlog", 9) == 0) {
			//TODO
		} 

		// Add log message cmd
		else if (strncmp(buffer, "add", 3) == 0) {
			//TODO
		}

		// Close log cmd
		else if (strcmp(buffer, "closelog") == 0) {
			//TODO
		}

		// Verify entry_no cmd
		else if (strncmp(buffer, "verify", 6) == 0) {
			//TODO
		}

		// Verify all cmd
		else if (strncmp(buffer, "verifyall", 9) == 0) {
			//TODO
		}

		else if (strcmp(buffer, "exit") == 0) {
			exit(0);
		}

		// Clean the buffer for new input
		memset(buffer,0,sizeof(buffer));
	}

 }