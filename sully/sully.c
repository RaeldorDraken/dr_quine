#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define I 5

int main(void) {
    int i = I;
    if (i <= 0)
        return 0;

    char filename[64];
    char execname[64];
    snprintf(filename, sizeof(filename), "sully_%d.c", i - 1);
    snprintf(execname, sizeof(execname), "Sully_%d", i - 1);

    FILE *f = fopen(filename, "w");
    if (!f) return 1;

    char *code =
"#include <stdio.h>%c"
"#include <stdlib.h>%c"
"#include <unistd.h>%c%c"
"#define I %d%c%c"
"int main(void) {%c"
"    int i = I;%c"
"    if (i <= 0)%c"
"        return 0;%c%c"
"    char filename[64];%c"
"    char execname[64];%c"
"    snprintf(filename, sizeof(filename), %csully_%%d.c%c, i - 1);%c"
"    snprintf(execname, sizeof(execname), %cSully_%%d%c, i - 1);%c%c"
"    FILE *f = fopen(filename, %cw%c);%c"
"    if (!f) return 1;%c%c"
"    char *code = %c%s%c;%c"
"    fprintf(f, code, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 34, code, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10);%c"
"    fclose(f);%c%c"
"    char cmd[128];%c"
"    snprintf(cmd, sizeof(cmd), %ccc -Wall -Wextra -Werror %%s -o %%s%c, filename, execname);%c"
"    system(cmd);%c%c"
"    if (i > 1) {%c"
"        char execpath[70];%c"
"        snprintf(execpath, sizeof(execpath), %c./%%s%c, execname);%c"
"        execl(execpath, execname, NULL);%c"
"    }%c"
"    return 0;%c"
"}%c";

    fprintf(f, code, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 34, code, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10);
    fclose(f);

    char cmd[128];
    snprintf(cmd, sizeof(cmd), "gcc -Wall -Wextra -Werror %s -o %s", filename, execname);
    printf("Compilando con: %s\n", cmd);
    printf("Ejecutando: %s\n", execname);
    system(cmd);

    if (i > 1) {
        char execpath[70];
        snprintf(execpath, sizeof(execpath), "./%s", execname);
        execl(execpath, execname, NULL);
        perror("execl failed");
    }

    return 0;
}
