#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (void)
{
    int resultCode = 0;
    resultCode = system("sudo mount /dev/sda1 /mnt/USB");
    if (resultCode == 0)
    {
        printf("Device connected\n");
    }
    else
    {
        printf("Device not connected\n");
    }
}