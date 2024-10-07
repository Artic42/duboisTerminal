#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (void)
{
    int resultCode = 0;
    resultCode = system("sudo umount /dev/sda1");
    if (resultCode == 0)
    {
        printf("Device disconnected\n");
    }
    else
    {
        printf("Device not disconnected\n");
    }
}