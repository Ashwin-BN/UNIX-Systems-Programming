#include <fcntl.h>      // header for file controll
#include <stdlib.h>     // Includes standard library functions
#define BSIZE 16384     // Defines a buffer size of 16,384 bytes to read/write chunks of data.

void main()
{
    int fin, fout;      // File descriptor for the input file and output file
    char buf[BSIZE];    // Buffer to store data
    int count;          // To count number of bytes read in each iteration

    // Opens file "foo" for read-only mode, if it fails to open print error message
    // and exists with code 1
    if((fin = open("foo", O_RDONLY)) < 0) {
        perror("foo");
        exit(1);
    }

    // Opens or create file "bar" for write-only mode, while creating set permissions to 0644
    // If opening fails, it prints error message and exit with code 2
    if((fout = open("bar", O_WRONLY | O_CREAT, 0644)) < 0) {
        perror("bar");
        exit(2);
    }

    // while loop for reading BSIZE bytes from fin to buf till count is greater than 0
    // write data to fout, from the buf, equal number of bytes read earlier
    while ((count = read(fin, buf, BSIZE)) > 0)
        write(fout, buf, count);

    // Closes all file descriptors
    close(fin);
    close(fout);
}