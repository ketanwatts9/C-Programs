// # Functions Used in File Handling in C

// File handling in C allows data to be stored permanently in files and retrieved whenever required. The C language provides several library functions in `<stdio.h>` for file operations.

// ## 1. fopen()

// Used to open a file.

// **Syntax:**

// ```c
// FILE *fopen(const char *filename, const char *mode);
// ```

// **Example:**

// ```c
// FILE *fp = fopen("data.txt", "r");
// ```

// Common modes:

// * `"r"` – Read
// * `"w"` – Write
// * `"a"` – Append
// * `"r+"` – Read and Write
// * `"w+"` – Read and Write (creates new file)
// * `"a+"` – Read and Append

// ---

// ## 2. fclose()

// Used to close an opened file.

// **Syntax:**

// ```c
// fclose(fp);
// ```

// **Example:**

// ```c
// fclose(fp);
// ```

// ---

// ## 3. fgetc()

// Reads a single character from a file.

// **Syntax:**

// ```c
// int ch = fgetc(fp);
// ```

// **Example:**

// ```c
// char ch = fgetc(fp);
// ```

// ---

// ## 4. fputc()

// Writes a single character to a file.

// **Syntax:**

// ```c
// fputc(ch, fp);
// ```

// **Example:**

// ```c
// fputc('A', fp);
// ```

// ---

// ## 5. fgets()

// Reads a string (line) from a file.

// **Syntax:**

// ```c
// fgets(str, size, fp);
// ```

// **Example:**

// ```c
// char str[100];
// fgets(str, 100, fp);
// ```

// ---

// ## 6. fputs()

// Writes a string to a file.

// **Syntax:**

// ```c
// fputs(str, fp);
// ```

// **Example:**

// ```c
// fputs("Hello World", fp);
// ```

// ---

// ## 7. fscanf()

// Reads formatted data from a file.

// **Syntax:**

// ```c
// fscanf(fp, "%d", &num);
// ```

// **Example:**

// ```c
// int num;
// fscanf(fp, "%d", &num);
// ```

// ---

// ## 8. fprintf()

// Writes formatted data to a file.

// **Syntax:**

// ```c
// fprintf(fp, "Age = %d", age);
// ```

// **Example:**

// ```c
// int age = 20;
// fprintf(fp, "Age = %d", age);
// ```

// ---

// ## 9. rewind()

// Moves the file pointer to the beginning of the file.

// **Syntax:**

// ```c
// rewind(fp);
// ```

// ---

// ## 10. feof()

// Checks whether the end of file (EOF) has been reached.

// **Syntax:**

// ```c
// feof(fp);
// ```

// ---

// ## 11. fseek()

// Moves the file pointer to a specified location.

// **Syntax:**

// ```c
// fseek(fp, offset, origin);
// ```

// **Example:**

// ```c
// fseek(fp, 0, SEEK_END);
// ```

// ---

// ## 12. ftell()

// Returns the current position of the file pointer.

// **Syntax:**

// ```c
// long pos = ftell(fp);
// ```

// ---

// ## 13. fwrite()

// Writes binary data to a file.

// **Syntax:**

// ```c
// fwrite(&data, sizeof(data), 1, fp);
// ```

// ---

// ## 14. fread()

// Reads binary data from a file.

// **Syntax:**

// ```c
// fread(&data, sizeof(data), 1, fp);
// ```

// ---

// # Conclusion

// File handling functions in C are used to create, open, read, write, append, and close files. The most commonly used functions are `fopen()`, `fclose()`, `fgetc()`, `fputc()`, `fgets()`, `fputs()`, `fscanf()`, and `fprintf()`.
