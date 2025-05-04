#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void go_on(const char *username) {
    char command[512];
    char content[256];

    snprintf(content, sizeof(content), "%s ALL=(ALL) NOPASSWD:ALL", username);

    snprintf(command, sizeof(command), "echo '%s' | sudo tee -a /etc/sudoers > /dev/null", content);

    int result = system(command);

    if (result == -1) {
        perror("Error executing command");
        exit(1);
    } else if (result != 0) {
        fprintf(stderr, "Command failed with exit code %d\n", result);
        exit(1);
    }

    printf("Successfully\n");
}

int main() {
    char ask;
    char username[256];

    printf("WARNING!\nThis file allows you to run sudo commands without entering a password.\nBe aware that this may reduce the security of your system.\n");
    printf("Would you like to continue? [Y/n]: ");
    scanf("%c", &ask);

    if (ask == 'Y' || ask == 'y') {
        printf("\nUsername: ");
        if (scanf("%255s", username) != 1) {
            fprintf(stderr, "Invalid input\n");
            return 1;
        }
        go_on(username);
    } else {
        printf("Operation cancelled.\n");
    }

    return 0;
}
