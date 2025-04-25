#include <stdio.h>
#define FILENAME "grace_kid.c"
#define COMMENT "/* Comentario obligatorio */\n"
#define GRACE() \
int main(void) { \
    FILE *f = fopen(FILENAME, "w"); \
    if (!f) return 1; \
	char *code = "#include <stdio.h>\\n" \
	"#define FILENAME \\\"Grace_kid.c\\\"\\n" \
	"#define COMMENT \\\"/* Comentario obligatorio */\\\\n\\\"\\n" \
	"#define GRACE() \\\n" \
	"int main(void) { \\\n" \
	"    FILE *f = fopen(FILENAME, \\\"w\\\"); \\\n" \
	"    if (!f) return 1; \\\n" \
	"    char *code = %c%s%c; \\\n" \
	"    fprintf(f, code, 34, code, 34); \\\n" \
	"    return 0; \\\n" \
	"}\n\n" \
	"/* Comentario obligatorio */\n" \
	"GRACE()\n"; \
    fprintf(f, code, 34, code, 34); \
    return 0; \
}

GRACE()
