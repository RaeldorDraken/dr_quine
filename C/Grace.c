/* Comentario obligatorio */
#include <stdio.h>
#define FILENAME "Grace_kid.c"
#define GRACE_COMMENT "/* Comentario obligatorio */"
#define GRACE() \
int main(void) { \
    FILE *f = fopen(FILENAME, "w"); \
    if (!f) return (1); \
    fputs(GRACE_COMMENT, f); \
    char *code = "%c#include <stdio.h>%c#define FILENAME %cGrace_kid.c%c%c#define GRACE_COMMENT %c/* Comentario obligatorio */%c%c#define GRACE() %c%cint main(void) {%c%cFILE *f = fopen(FILENAME, %cw%c);%c%c		if (!f) return (1);%c%c		fputs(GRACE_COMMENT, f);%c%c		char *code = %c%s%c;%c%c		fprintf(f, code, 10, 10, 34, 34, 10, 34, 34, 10, 92, 10, 92, 10, 34, 34, 92, 10, 92, 10, 92, 10, 34, code, 34, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10);%c%c		fclose(f);%c%c		return (0);%c%c}%cGRACE()%c"; \
    fprintf(f, code, 10, 10, 34, 34, 10, 34, 34, 10, 92, 10, 92, 10, 34, 34, 92, 10, 92, 10, 92, 10, 34, code, 34, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10); \
    fclose(f); \
    return (0); \
}
GRACE()
