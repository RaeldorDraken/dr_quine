#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define VALUE 5

int main() 
{
    int i = VALUE;
    if (__FILE__[6] != '\0') i--; // Detectar si no es Sully.c

    if (i < 0)
        return 0;

    char filename[20], execname[20];
    sprintf(filename, "Sully_%d.c", i);
    FILE *f = fopen(filename, "w");
    if (!f) return 1;

    char *code = "/* Código de Sully */\n#include <stdio.h>\n#include <stdlib.h>\n#include <unistd.h>\n\n#define VALUE %d\n\nint main() {\n    int i = VALUE;\n    if (__FILE__[6] != '\\0') i--;\n    if (i < 0) return 0;\n    char filename[20], execname[20];\n    sprintf(filename, \"Sully_%%d.c\", i);\n    FILE *f = fopen(filename, \"w\");\n    if (!f) return 1;\n    char *code = %c%s%c;\n    fprintf(f, code, i, 34, code, 34);\n    fclose(f);\n    sprintf(execname, \"Sully_%%d\", i);\n    char compile[50];\n    sprintf(compile, \"cc %%s -o %%s\", filename, execname);\n    system(compile);\n    if (i > 0) {\n        char run[30];\n        sprintf(run, \"./%%s\", execname);\n        system(run);\n    }\n    return 0;\n}\n";
    fprintf(f, code, i, 34, code, 34);
    fclose(f);

    sprintf(execname, "Sully_%d", i);
    char compile[50];
    sprintf(compile, "cc %s -o %s", filename, execname);
    system(compile);

    if (i > 0) 
{
        char run[30];
        sprintf(run, "./%s", execname);
        system(run);
    }

    return 0;
}
