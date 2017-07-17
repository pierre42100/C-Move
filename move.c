/**
 * This programm is a kind of clone of "mv" function, without expression support (on purpose)
 *
 * @author Pierre HUBERT
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Main programm function
 */
int main(int argc, char *argv[]){
	
	//Check for arguments
	if(argc < 3){
		printf("Move usage: move [src] [dst]\n\n");
		exit(EXIT_FAILURE);
	}

	//Inform user about what is happening
	printf("Moving from %s to %s\n", argv[1], argv[2]);
	
	//Try to move file
	if(rename(argv[1], argv[2]) != 0){
		printf("Couldn't move file ! \n");
		exit(EXIT_FAILURE);
	}
	
	//Success
	return EXIT_SUCCESS;
}
