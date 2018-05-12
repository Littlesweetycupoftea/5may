#include <stdio.h>
#include <string.h>

main () {
	const int string_count = 20;

	char file_name[] = "one.txt";
	FILE* file = fopen(file_name,"r");

	if (file == NULL){
		return 0;
	}

	char buffer[255];
	int counter = 0;

	while (!feof(file)) {
		counter++;
		fgets(buffer, sizeof(buffer), file);
		printf("%s", buffer);

		if (counter == string_count) {
			char command = getch();
			if (command == 'q'){
				return 0;
			}
			counter = 0;
		}
	}

}
