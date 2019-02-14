#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int i, j, k, int1, int2;
	int matrix[4][4];// initializing the matrix

	//initial position of the space
	scanf("%d", &int1);
	scanf("%d", &int2);

	//fills the rest of the 15 spots with integers fomr user input
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			if (j == int1 && i == int2) {
			}
			else {
				scanf("%d", &matrix[j][i]);
			}
		}
	}

	//prints the initial array
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			if (j == int1 && i == int2) {
				printf("    ");
			}
			else {
				printf("%-4d", matrix[j][i]);
			}
		}
		printf("\n");
	}

	char command[2];// the array to hold the user commands

	/*	Actions to perform depending on user input command
		(u,d,l,r) each moves the white space accordingly, prints out the resulting array, 
		and then requires the user to input another command.
		q quits the loop.
	*/

	while (1) {
		scanf("%s", command);
		if ((strcmp(command, "u") == 0) || (strcmp(command, "d") == 0) || (strcmp(command, "l") == 0) || (strcmp(command, "r") == 0) || (strcmp(command, "q") == 0)) {
			if (strcmp(command, "u") == 0) {
				if (int2 - 1 < 0) {
					printf("Not a valid move\n");
				}
				else {
					matrix[int1][int2] = matrix[int1][int2 - 1];
					--int2;
					for (i = 0; i < 4; ++i) {
						for (j = 0; j < 4; ++j) {
							if (j == int1 && i == int2) {
								printf("    ");
							}
							else {
								printf("%-4d", matrix[j][i]);
							}
						}
						printf("\n");
					}
				}
			}
			else if (strcmp(command, "d") == 0) {
				if (int2 + 1 > 3) {
					printf("Not a valid move\n");
				}
				else {
					matrix[int1][int2] = matrix[int1][int2 + 1];
					++int2;
					for (i = 0; i < 4; ++i) {
						for (j = 0; j < 4; ++j) {
							if (j == int1 && i == int2) {
								printf("    ");
							}
							else {
								printf("%-4d", matrix[j][i]);
							}
						}
						printf("\n");
					}
				}
			}
			else if (strcmp(command, "l") == 0) {
				if (int1 - 1  < 0) {
					printf("Not a valid move\n");
				}
				else {
					matrix[int1][int2] = matrix[int1-1][int2];
					--int1;
					for (i = 0; i < 4; ++i) {
						for (j = 0; j < 4; ++j) {
							if (j == int1 && i == int2) {
								printf("    ");
							}
							else {
								printf("%-4d", matrix[j][i]);
							}
						}
						printf("\n");
					}
				}
			}
			else if (strcmp(command, "r") == 0) {
				if (int1 + 1 > 3) {
					printf("Not a valid move\n");
				}
				else {
					matrix[int1][int2] = matrix[int1 + 1][int2];
					++int1;
					for (i = 0; i < 4; ++i) {
						for (j = 0; j < 4; ++j) {
							if (j == int1 && i == int2) {
								printf("    ");
							}
							else {
								printf("%-4d", matrix[j][i]);
							}
						}
						printf("\n");
					}
				}
			}
			else if (strcmp(command, "q") == 0) {
				break;
			}
		}
		else {
			printf("No such command\n");
		}
	}
return 0;
}
	