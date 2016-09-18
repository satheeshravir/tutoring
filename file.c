#include <stdio.h>

int main() {
   FILE *handle;

   handle = fopen("test.txt", "w+");
   fprintf(handle, "My file you idiot...\n");
   fputs("Dont scribble...\n", handle);
   fclose(handle);
}