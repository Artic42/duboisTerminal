#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main (void);
int fileActivationKeyOnUSB (void);
int fileAgentListOnUSB (void);
int pathExists (const char* path);
int keyOnUSB (void);

int main (void)
{
    int activationKey, agentList, key;

    activationKey = fileActivationKeyOnUSB();
    agentList = fileAgentListOnUSB();
    key = keyOnUSB();

    if (activationKey == 1 && key == 1)
    {
        printf("Device is an activation device, keys are ready to use\n");
        printf("Dispositivo es un dispositivo de activación, las claves están listas para usar\n");
    }
    else if (activationKey == 1 && key == 0)
    {
        printf("Device is an activation device but keys have been removed\n");
        printf("Dispositivo es un dispositivo de activación pero las claves han sido borradas\n");
    }
    else if (agentList == 1)
    {
        printf("Device is a list of identities of agents\n");
        printf("Dispositivo es una lista de identidades de agentes\n");
    }
    else
    {
        printf("Device is unknown\n");
        printf("Dispositivo es desconocido\n");
    }
}

int fileActivationKeyOnUSB (void)
{
    const char* path = "/mnt/USB/activationKey";
    return pathExists(path);
}

int fileAgentListOnUSB (void)
{
    const char* path = "/mnt/USB/agentList";
    return pathExists(path);
}

int keyOnUSB (void)
{
    const char* path = "/mnt/USB/key";
    return pathExists(path);
}

int pathExists (const char* path)
{
    if (access(path, F_OK) == 0) { return 1;}
    else { return 0; }
}