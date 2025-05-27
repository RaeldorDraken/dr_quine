#include <stdio.h>
#include <stdlib.h>

#define I 5

#define CODE "#include <stdio.h>\\n"\
"#include <stdlib.h>\\n\\n"\
"#define I %d\\n\\n"\
"#define CODE %c%s%c\\n\\n"\
"int main(void) {\\n"\
"    if (I <= 0) return 0;\\n\\n"\
"    char fname[20];\\n"\
"    sprintf(fname, \\\"Sully_%%d.c\\\", I - 1);\\n\\n"\
"    FILE *f = fopen(fname, \\\"w\\\");\\n"\
"    if (!f) return 1;\\n\\n"\
"    fprintf(f, CODE, I - 1, 34, CODE, 34);\\n"\
"    fclose(f);\\n\\n"\
"    char compile[100];\\n"\
"    sprintf(compile, \\\"clang -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c\\\", I - 1, I - 1);\\n"\
"    system(compile);\\n\\n"\
"    char exec[20];\\n"\
"    sprintf(exec, \\\"./Sully_%%d\\\", I - 1);\\n"\
"    system(exec);\\n\\n"\
"    return 0;\\n"\
"}\\n"

int main(void) {
    if (I <= 0)
        return 0;

    char fname[20];
    sprintf(fname, "Sully_%d.c", I - 1);

    FILE *f = fopen(fname, "w");
    if (!f) return 1;

    fprintf(f, CODE, I - 1, 34, CODE, 34);
    fclose(f);

    char compile[100];
    sprintf(compile, "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", I - 1, I - 1);
    system(compile);

    char exec[20];
    sprintf(exec, "./Sully_%d", I - 1);
    system(exec);

    return 0;
}
