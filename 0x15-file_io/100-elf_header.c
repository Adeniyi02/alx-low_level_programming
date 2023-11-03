#include
 
<elf.h>

#include
 
<sys/types.h>

#include
 
<sys/stat.h>

#include
 
<fcntl.h>

#include
 
<unistd.h>

#include
 
<stdio.h>

#include
 
<stdlib.h>

/**
 * print_elf_header - Prints the information contained in the
 *     ELF header at the start of an ELF file.
 * @filename: The name of the ELF file.
 *
 * Return: 0 on success, -1 on failure.
 */
int print_elf_header(const char *filename) {
  int fd;
  Elf64_Ehdr header;
  ssize_t bytes_read;

  fd = open(filename, O_RDONLY);
  if (fd == -1) {
    perror("Error opening file");
    return -1;
  }

  bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
  if (bytes_read != sizeof(Elf64_Ehdr)) {
    perror("Error reading ELF header");
    close(fd);
    return -1;
  }

  // Check if the file is an ELF file.
  if (header.e_ident[EI_MAG0] != ELFMAG0 ||
      header.e_ident[EI_MAG1] != ELFMAG1 ||
      header.e_ident[EI_MAG2] != ELFMAG2 ||
      header.e_ident[EI_MAG3] != ELFMAG3) {
    fprintf(stderr, "Error: File is not an ELF file\n");
    close(fd);
    return
 
-1;
  }

  // Print the ELF header information.

  
printf("ELF Header:\n");
  printf("  Magic: 0x%02x 0x%02x 0x%02x 0x%02x\n",
         header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
         header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
  printf("  Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "32-bit" : "64-bit");
  printf("  Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
  printf("  Version: %d\n", header.e_ident[EI_VERSION]);
  printf("  OS/ABI: %d\n", header.e_ident[EI_OSABI]);
  printf("  ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
  printf("  Type: %d\n", header.e_type);
  printf("  Entry point address: 0x%lx\n", header.e_entry);

  close(fd);
  return
 
0;
}

int
 
main(int argc, char **argv)
 
{
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return
 
1;
  }

  int ret = print_elf_header(argv[1]);
  if (ret != 0) {
    return
 
1;
  }

  return
 
0;
}
