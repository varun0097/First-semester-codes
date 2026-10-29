#include <stdio.h>
#include <string.h>

void main() {
	int choice, n;
	char str1[100], str2[100], ch, sub[50];
	
	while(n != 10) {
		printf("\n===== String Operations menu =====\n");
		printf("1. Find length (strlen)\n");
		printf("2. Copy String (strcpy)\n");
		printf("3. Concatenate Strings (strcat)\n");
		printf("4. Compare strings (strcmp)\n");
		printf("5. Find Character (strchr)\n");
		printf("6. Find Substring (strstr)\n");
		printf("7. Tokenize String (strtok)\n");
		printf("8. Convert to Uppercase\n");
		printf("9. Convert to Lowercase\n");
		printf("10. Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		getchar(); //to consume newline
	
	switch(choice) {
		case 1:
			printf("Enter String: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")] = "\0";
			printf("Length = %lu\n", strlen(str1));
			break;
		case 2:
			printf("Enter Source String: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")] = "\0";
			strcpy(str2, str1);
			printf("Copied String: %s\n", str2);
			break;
		case 3:
			printf("Enter First String: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")] = "\0";
			printf("Enter Second String: "); fgets(str2, 100, stdin);
			str2[strcspn(str2, "\n")] = "\0"; strcat(str1, str2);
			printf("Concatenated String: %s\n", str1); 
			break;
		// case 4 to 9
		case 10:
			printf("Exiting...\n"); 
		default: printf("Invalid Choice!\n");
	}
	}	
	return 0;
}
