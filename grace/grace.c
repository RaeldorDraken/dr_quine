#include <stdio.h>

#define FILENAME "grace_kid.c"
#define GRACE_COMMENT "/* Comentario obligatorio */\n"
#define GRACE() \
int main(void) { \
    FILE *f = fopen(FILENAME, "w"); \
    if (!f) return (1); \
    fputs(GRACE_COMMENT, f); \
    char *code = "#include <stdio.h>%c" \
    "#define FILENAME %cgrace_kid.c%c%c" \
    "#define GRACE_COMMENT %c/* Comentario obligatorio */%c%c" \
    "#define GRACE() %c%c" \
    "int main(void) { %c %c" \
    "    FILE *f = fopen(FILENAME, %cw%c); %c%c" \
    "    if (!f) return (1); %c%c" \
    "    fputs(GRACE_COMMENT, f); %c%c" \
    "    char *code = %c%s%c; %c%c" \
    "    fprintf(f, code, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 34, code, 34, 10, 10, 10, 10, 10, 10); %c%c" \
    "    fclose(f); %c%c" \
    "    return (0); %c%c" \
    "}%c" \
    "GRACE()%c"; \
    fprintf(f, code, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 34, code, 34, 10, 10, 10, 10, 10, 10); \
    fclose(f); \
    return (0); \
}

GRACE()