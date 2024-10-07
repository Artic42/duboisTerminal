#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (void);
int isKeyOnUSB (void);
int isKeyUSB (void);
int pathExists (const char* path);

int main (void)
{
    if (isKeyUSB() == 0)
    {
        printf("No activation key found\n");
        printf("No se encontró clave de activación\n");
        return 0;
    }
    int resultCode = 0;
    resultCode = system("sudo rm -rf /mnt/USB/key");
    if (isKeyOnUSB() == 1)
    {
        printf("Keys deleted\n");
        printf("Claves borradas\n");
    }
    else
    {
        printf("Keys not deleted\n");
        printf("Claves no borradas\n");
    }
    return 0;
}

int isKeyOnUSB (void)
{
    const char* path = "/mnt/USB/key";
    return pathExists(path);
}

int isKeyUSB (void)
{
    const char* path = "/mnt/USB/activationKey";
    return pathExists(path);
}

int pathExists (const char* path)
{
    if (access(path, F_OK) == 0) { return 1;}
    else { return 0; }
}