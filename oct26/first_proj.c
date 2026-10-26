#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// for each name[0] in names_list :
//      if name[0].id <= highest_name[0]
//          new_list.append(name)
//          highest_name == name
//          names_list.remove(name)

void _sorting_names(char names[], char ALPHABET[]) {
    char *new_list[1000];
    int count = 0;

    char *name = strtok(names, " ,\n"); // split the names

    while (name != NULL) {
        new_list[count] = name;
        count++;
        name = strtok(NULL, " ,\n"); //moves to a next one
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(new_list[i], new_list[j]) > 0) { // compares alphabetically
                char *temp = new_list[i];
                new_list[i] = new_list[j];
                new_list[j] = temp;
            }
        }
    }

    printf("Sorted names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", new_list[i]);
    }
}

int main() {
    char ALPHABET[] = "abcdefghijklmnopqrstuvwxyz";
    char names[1000];
    printf("Please enter the names ");
    fgets(names, sizeof(names), stdin);
    _sorting_names(names, ALPHABET);
    return 0;
}

//strtok
//strcmp
//pointers