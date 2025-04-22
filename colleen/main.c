// Comentario fuera del programa

#include <stdio.h>

void print_code(void) 
{
    char *src = "// Comentario fuera del programa%c%c#include <stdio.h>%c%cvoid print_code(void) %c{%c    char *src = %c%s%c;%c    printf(src, 10, 10, 10, 10, 10, 10, 34, src, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint main(void) %c{%c    // Comentario dentro del main%c    print_code();%c    return 0;%c}%c";
    printf(src, 10, 10, 10, 10, 10, 10, 34, src, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}

int main(void) 
{

	// Comentario dentro del main
    print_code();
    return 0;
}
