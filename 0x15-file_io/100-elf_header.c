#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * error_exit - Print an error message and exit with a specific status code.
 * @message: The error message to print.
 * @status: The exit status code.
 */
void error_exit(const char *message, int status)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(status);
}

/**
 * print_elf_header - Print the information contained in the ELF header.
 * @filename: The name of the ELF file.
 */
void print_elf_header(const char *filename)
{
int i, fd;
ssize_t bytes_read;
Elf64_Ehdr ehdr;

fd = open(filename, O_RDONLY);
if (fd == -1)
error_exit("Error: Cannot open file", 98);

bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr))
{
close(fd);
error_exit("Error: Cannot read ELF header", 98);
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", ehdr.e_ident[i]);
printf("\n");
printf("  Class:                             ");
if (ehdr.e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (ehdr.e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else
printf("<unknown>\n");
close(fd);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
error_exit("Usage: elf_header elf_filename", 97);

print_elf_header(argv[1]);

return (0);
}

