#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_file - Copies the content of a file to another file.
 * @src_filename: The name of the source file.
 * @dst_filename: The name of the destination file.
 * @file_perm: The permissions for the destination file.
 *
 * Return: 0 on success, or -1 on failure.
 */
int copy_file(const char *src_filename, const char *dst_filename, mode_t file_perm) {
  int src_fd, dst_fd, close_to, close_from;
  ssize_t lenr, lenw;
  char buffer[1024];

  src_fd = open(src_filename, O_RDONLY);
  if (src_fd == -1) {
    perror("Error opening source file");
    return -1;
  }

  dst_fd = open(dst_filename, O_WRONLY | O_CREAT | O_TRUNC, file_perm);
  if (dst_fd == -1) {
    perror("Error opening destination file");
    close(src_fd);
    return -1;
  }

  lenr = 1024;
  while (lenr == 1024) {
    lenr = read(src_fd, buffer, 1024);
    if (lenr == -1) {
      perror("Error reading source file");
      close(src_fd);
      close(dst_fd);
      return -1;
    }

    lenw = write(dst_fd, buffer, lenr);
    if (lenw != lenr) {
      perror("Error writing destination file");
      close(src_fd);
      close(dst_fd);
      return -1;
    }
  }

  close_to = close(dst_fd);
  close_from = close(src_fd);
  if (close_to == -1 || close_from == -1) {
    perror("Error closing file descriptors");
    return -1;
  }

  return 0;
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, or 1 on failure.
 */
int main(int argc, char **argv) {
  if (argc != 3) {
    fprintf(stderr, "Usage: %s <src_file> <dst_file>\n", argv[0]);
    return 1;
  }

  int ret = copy_file(argv[1], argv[2], 0644);
  if (ret != 0) {
    return 1;
  }

  return 0;
}
