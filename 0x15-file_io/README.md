# 0x15. C - File I/O


## Lessons Learned

* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

## Tasks

### 0-read_textfile.c

Write a function that reads a text file and prints it to the POSIX standard output.

* Prototype: ssize_t read_textfile(const char *filename, size_t letters);
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0

### 1-create_file.c

Create a function that creates a file.

* Prototype: int create_file(const char *filename, char *text_content);
* where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
* Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file


### 2-append_text_to_file.c

Write a function that appends text at the end of a file.

* Prototype: int append_text_to_file(const char *filename, char *text_content);
* where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist
* If filename is NULL return -1
* If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

