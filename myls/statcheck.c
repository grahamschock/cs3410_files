#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>

int main (int argc, char **argv) 
{
    struct stat directory;
    char *type, *readok;

    stat(argv[1], &directory);
    if (S_ISREG(directory.st_mode))     /* Determine file type */
  type = "regular";
    else if (S_ISDIR(directory.st_mode))
  type = "directory";
    else
        type = "other";
    if ((directory.st_mode & S_IRUSR)) /* Check read access */
  readok = "yes";
    else
        readok = "no";

    printf("type: %s, read: %s\n", type, readok);
    exit(0);
}
