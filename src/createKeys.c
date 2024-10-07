#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (void);

int main (void)
{
    printf("Password: ");
    char password[3000];
    scanf("%2999s", password);
    if (strcmp(password, "ultima") == 0)
    {
        system("sudo cp /home/artic/key /mnt/USB/key");
    }
    else
    {
        printf("Password incorrect\n");
        printf("Contraseña incorrecta\n");
    }
}