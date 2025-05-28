#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define I 5

int main(void) {
    if (I <= 0)
        return 0;

    char filename[64];
    char execname[64];
    sprintf(filename, "sully_%d.c", I - 1);
    sprintf(execname, "Sully_%d", I - 1);

    FILE *f = fopen(filename, "w");
    if (!f) return 1;

    char *code = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c%c#define I %d%c%cint main(void) {%c    if (I <= 0)%c        return 0;%c%c    char filename[64];%c    char execname[64];%c    sprintf(filename, %csully_%%d.c%c, I - 1);%c    sprintf(execname, %cSully_%%d%c, I - 1);%c%c    FILE *f = fopen(filename, %cw%c);%c    if (!f) return 1;%c%c    char *code = %c%s%c;%c    fprintf(f, code, 10,10,10,10,10,I-1,10,10,10,10,10,10,10,34,34,10,34,34,10,10,34,34,10,10,34,code,34,10);%c    fclose(f);%c%c    char cmd[128];%c    sprintf(cmd, %ccc -Wall -Wextra -Werror %%s -o %%s%c, filename, execname);%c    system(cmd);%c    if (I > 1)%c        execl(execname, execname, NULL);%c    return 0;%c}%c";
    fprintf(f, code, 10,10,10,10,10,I-1,10,10,10,10,10,10,10,34,34,10,34,34,10,10,34,34,10,10,34,code,34,10);

    fclose(f);

    char cmd[128];
    sprintf(cmd, "gcc -Wall -Wextra -Werror %s -o %s", filename, execname);
    system(cmd);

    if (I > 1)
    {
        char execpath[70];
        snprintf(execpath, sizeof(execpath), "./%s", execname);
        execl(execpath, execname, NULL);
    }

    return 0;
}
