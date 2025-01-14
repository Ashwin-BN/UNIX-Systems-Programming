# Table of Contents
1. [Introduction to UNIX](#introduction-to-unix)
   - [Overview of UNIX Operating System](#overview-of-unix-operating-system)
   - [History of UNIX](#history-of-unix)
   - [History of Linux](#history-of-linux)
   - [UNIX Structure](#unix-structure)
2. [File System](#file-system)
   - [UNIX File System Overview](#unix-file-system-overview)
   - [Standard Directories](#standard-directories)
   - [File Types](#file-types)
3. [Common Commands](#common-commands)
   - [Basic Commands and Examples](#basic-commands-and-examples)
4. [The vi Editor](#the-vi-editor)
   - [Modes in vi Editor](#modes-in-vi-editor)
   - [Cursor Movement](#cursor-movement)
   - [Common Commands in vi Editor](#common-commands-in-vi-editor)
   - [Searching and Searching Commands in vi](#searching-and-searching-commands-in-vi)

---

## 1. Introduction to UNIX

### Overview of UNIX Operating System
- **Role**: UNIX is a powerful, multi-user, multitasking operating system that manages computer hardware and provides an interface for users to interact with the system.
- **Multi-tasking**: UNIX allows multiple tasks or processes to run concurrently.
- **Multi-user**: Multiple users can use the system simultaneously without interfering with each other.
- **File and Directory Management**: UNIX manages files and directories in a hierarchical manner, making it easier to locate and organize files.

### History of UNIX
- **Origin**: UNIX was created in 1969 by AT&T’s Bell Labs.
- **Key Features**: The system was designed to be multi-user, interactive, and capable of sharing data and programs efficiently across a network.
- **Popularity**: UNIX became popular in universities and technical environments for its simplicity, flexibility, and portability.
- **Standardization**: UNIX began to be standardized in the 1980s and 1990s, especially with the introduction of System V Release 4 (SVR4).
- **Weaknesses**: Early UNIX systems lacked comprehensive system management tools, such as security, hardware accounting, and performance management.

### History of Linux
- **GNU**: GNU (GNU’s Not Unix) was started in the early 1980s by the Free Software Foundation to promote free software.
- **Linux**: Created by Linus Torvalds in 1991, Linux is a kernel that, combined with the GNU utilities, forms the complete Linux operating system.
- **Open Source**: Linux is open-source, meaning its code is freely available for modification and distribution.

### UNIX Structure
1. **Hardware**: Physical resources like CPU, memory, and storage devices.
2. **UNIX Kernel**: The core of the UNIX system that manages resources and provides services to other parts of the system.
3. **Shell**: The interface through which users interact with the kernel, typically via command-line.
4. **Utilities**: Command-line programs that perform specific tasks (e.g., file manipulation, text processing).

### Common UNIX Shells:
- **Bourne Shell (sh)**: Original shell, simple and widely used.
- **C Shell (csh)**: Provides features like history and job control.
- **Korn Shell (ksh)**: Combines features of Bourne Shell and C Shell.
- **Bash (bash)**: Most popular shell for Linux; combines many features of other shells.
- **Z Shell (zsh)**: Known for its flexibility and customization.

---

## 2. File System

### UNIX File System Overview
- **Hierarchical Structure**: UNIX organizes files in a tree-like structure, where directories can contain files and subdirectories.
- **Root Directory**: Denoted as `/`, the root directory is the top of the file system hierarchy and contains all files and directories.
- **File Names**: Allowed characters for filenames include alphabets, numbers, underscores, periods, and commas. 
    - For example: `my_file.txt`, `data_123.csv`.
- **Hidden Files**: Files beginning with a period (`.`) are hidden. These are typically used for configuration files (e.g., `.bashrc`, `.profile`).
    - To view hidden files: `ls -a`.

### Standard Directories:
- **/home**: Contains home directories for users. E.g., `/home/user1`.
- **/bin** & **/usr/bin**: Contain executable files for system utilities. E.g., `/bin/ls`, `/usr/bin/grep`.
- **/sbin** & **/usr/sbin**: Contain system administration utilities. E.g., `/sbin/shutdown`.
- **/etc**: Holds configuration files for the system. E.g., `/etc/passwd`.
- **/var**: Contains files that vary during system operation (e.g., logs, temporary files).
- **/dev**: Contains device files representing hardware. E.g., `/dev/sda` for a hard drive.
- **/tmp**: Temporary files used by programs during runtime. 

### File Types
The file type is indicated by the first character in the `ls -l` output:
- **-**: Ordinary file (e.g., `file.txt`).
- **d**: Directory (e.g., `documents/`).
- **l**: Symbolic link (e.g., `link-to-file -> /path/to/file`).
- **b**: Block device file (e.g., a DVD drive).
- **c**: Character device file (e.g., keyboard).
- **p**: Pipe file, used for inter-process communication.
- **s**: Socket file, used for communication between processes.

---

## 3. Common Commands

### Basic Commands and Examples
- **`touch filename`**: Create a new file or update timestamp of an existing file.
  - Example: `touch newfile.txt`
- **`mkdir directory_name`**: Create a new directory.
  - Example: `mkdir myfolder`
- **`rmdir directory_name`**: Delete an empty directory.
  - Example: `rmdir oldfolder`
- **`mv oldname newname`**: Rename or move files.
  - Example: `mv file1.txt file2.txt`
- **`cp source destination`**: Copy files or directories.
  - Example: `cp file1.txt file2.txt` (Copies `file1.txt` to `file2.txt`).
  - To copy a directory: `cp -r dir1/ dir2/`
- **`rm filename`**: Remove a file.
  - Example: `rm file1.txt`
- **`cat filename`**: Display contents of a file.
  - Example: `cat file1.txt`
- **`more filename`**: View file contents one page at a time.
  - Example: `more file1.txt`
- **`man command`**: View manual for a command.
  - Example: `man ls` (Displays the manual for the `ls` command).
- **`find . -name "filename"`**: Find files matching the given name.
  - Example: `find . -name "*.txt"` (Finds all `.txt` files in the current directory and subdirectories).
  
---

## 4. The vi Editor

### Modes in vi Editor
The `vi` editor has three modes:
1. **Input Mode**: For entering text.
   - Example: Press `i` to insert text before the cursor.
   - Press `a` to append text after the cursor.
2. **Command Mode**: Used to issue commands for file manipulation, navigation, etc.
   - Press `Esc` to return to command mode from input mode.
3. **Last-line Mode**: Used for file-specific operations (e.g., save, quit).
   - Enter this mode by typing `:`.

### Cursor Movement
- **h, j, k, l**: Move the cursor left, down, up, or right.
  - Example: `5j` moves the cursor down 5 lines.
- **w, b**: Move forward or backward by a word.
  - Example: `w` moves to the beginning of the next word.
- **0**: Move to the beginning of the current line.
- **$**: Move to the end of the current line.
- **nG**: Move to line number `n`.
  - Example: `10G` moves to line 10.

### Common Commands in vi Editor
- **`J`**: Join the current line with the next one.
  - Example: `J` will combine two lines into one.
- **`x`**: Delete the character under the cursor.
  - Example: `x` deletes a single character.
- **`dw`**: Delete a word.
  - Example: `dw` deletes from the cursor position to the end of the word.
- **`yy`**: Yank (copy) an entire line.
  - Example: `yy` copies the current line into the buffer.
- **`p`**: Paste the contents of the buffer after the cursor.
  - Example: `p` pastes the copied line.
- **`u`**: Undo the last change.
  - Example: `u` undoes the last operation.
- **`:w`**: Save the file.
  - Example: `:w` saves changes.
- **`:q`**: Quit `vi` (only if no unsaved changes).
  - Example: `:q` exits the editor.

### Searching and Searching Commands in vi
- **`/pattern`**: Search forward for the next occurrence of `pattern`.
  - Example: `/error` searches for the word "error" in the document.
- **`?pattern`**: Search backward for the previous occurrence of `pattern`.
- **`n`**: Repeat the last search in the same direction.
  - Example: `n` repeats the previous search.

---

## 5. Redirection, Standard File Descriptors, and Permissions

### Redirection

#### Standard File Descriptors
In Unix-like systems, standard input (stdin), standard output (stdout), and standard error (stderr) are channels that allow data to flow between processes and the terminal. These descriptors are represented by specific file descriptors (fd).

- **Standard Input (stdin)**: File descriptor `0` (fd 0). It is used to read input data. By default, input is taken from the keyboard unless redirected.
- **Standard Output (stdout)**: File descriptor `1` (fd 1). It is used to send output data. By default, output is displayed on the terminal.
- **Standard Error (stderr)**: File descriptor `2` (fd 2). It is used to send error messages. By default, error messages are also displayed on the terminal.

---

#### Standard Input (stdin)
Standard input is used to provide data to commands. By default, it reads from the keyboard. It can also be redirected from files or other commands.

##### Example:
- **Using `cat` to read input:**
    ```bash
    cat
    ```
    This command will continuously read input from the keyboard and print it to the terminal until `<Control>-D` is pressed to end the input.

- **Redirecting input from a file using `<`:**
    ```bash
    cat < cars.txt
    ```
    This command will read the contents of the file `cars.txt` and output it to the terminal.

- **Using Here Document to provide input:**
    ```bash
    cat << EOF
    This is an example of a here document.
    It allows multiple lines of input to be passed to a command.
    EOF
    ```

In this example, everything between `<< EOF` and `EOF` is passed as standard input to the `cat` command.

---

#### Standard Output (stdout)
Standard output is used to display the result of a command. By default, the result is shown in the terminal but can be redirected to a file or another destination.

##### Example:
- **Redirecting output to a file using `>`:**
    ```bash
    ls -l > directory_list.txt
    ```
    This command lists the files in the current directory and writes the output to the file `directory_list.txt`. If the file exists, it will be overwritten.

- **Appending output to a file using `>>`:**
    ```bash
    echo "New line of text" >> log.txt
    ```
    This appends the text `"New line of text"` to the `log.txt` file.

- **Redirecting output to `/dev/null` (discarding output):**
    ```bash
    find / -name "*.tmp" > /dev/null
    ```
    This command runs a `find` search but discards the output by redirecting it to `/dev/null`.

- **Redirecting both stdout and stderr to the same file:**
    ```bash
    ls non_existent_file > output.txt 2>&1
    ```
    This command redirects both standard output and error output of the `ls` command to `output.txt`. If `non_existent_file` does not exist, the error message is also written to the same file.

---

#### Standard Error (stderr)
Standard error is used to send error messages. It behaves similarly to stdout but is intended specifically for error handling, allowing errors to be processed separately from regular output.

##### Example:
- **Redirecting error messages to a file:**
    ```bash
    ls nonexistent_directory 2> error.log
    ```
    This command redirects the error message generated by trying to list a nonexistent directory to the file `error.log`.

- **Redirecting stderr to `/dev/null`:**
    ```bash
    ls nonexistent_directory 2> /dev/null
    ```
    This command discards the error messages by redirecting them to `/dev/null`.

- **Redirecting both stdout and stderr to separate files:**
    ```bash
    ls > output.txt 2> error.log
    ```
    This command sends standard output to `output.txt` and error messages to `error.log`.

---

#### Redirecting Both stdout and stderr
It is often useful to redirect both standard output and error messages to the same file, especially when running commands in scripts. This can be achieved using `2>&1` or `&>`.

##### Example:
- **Redirecting both stdout and stderr to the same file:**
    ```bash
    command > file.txt 2>&1
    ```

    Here, `2>&1` means that file descriptor 2 (stderr) is redirected to the same location as file descriptor 1 (stdout).

- **Redirecting both to a new file using `&>`:**
    ```bash
    command &> combined_output.txt
    ```

This will redirect both stdout and stderr to `combined_output.txt` in one operation.

---

### Permissions

File and directory permissions determine who can read, write, and execute a file. Permissions are typically modified using the `chmod` command. Permissions are expressed in both symbolic and numeric formats.

#### File Permissions
Permissions are represented using a 9-bit string (e.g., `rwxr-xr--`), which can be broken down as:

- **Owner permissions**: The first three characters (`rwx`) represent the owner's permissions.
- **Group permissions**: The next three characters (`r-x`) represent the group's permissions.
- **Other permissions**: The last three characters (`r--`) represent the permissions for all others.

Each permission has a numeric value:
- `r` (read) = 4
- `w` (write) = 2
- `x` (execute) = 1

##### Example:
- **Using `chmod` with numeric values:**
    ```bash
    chmod 755 myfile.txt
    ```
    This command gives the owner full permissions (`rwx`), and read and execute permissions to the group and others (`r-x`).

- **Using `chmod` with symbolic values:**
    ```bash
    chmod u+x myfile.txt
    ```
    This command adds execute permissions for the owner (`u` stands for user).

---

#### Directory Permissions
Permissions for directories are slightly different from regular files. The `x` permission for directories allows users to traverse the directory (i.e., access files within it), while `r` allows viewing the file names.

##### Example:
- **Using `chmod` on directories:**
    ```bash
    chmod 700 mydir
    ```
    This grants the owner full access to the directory, while others have no permissions.

- **Adding permissions recursively:**
    ```bash
    chmod -R 755 /path/to/directory
    ```
    This will set permissions for the directory and all files and subdirectories inside it to `rwxr-xr-x`.

---

#### Umask

The `umask` command is used to set default permissions for newly created files and directories. It defines the permissions that should **not** be granted, which is subtracted from the maximum permissions (usually `777` for directories and `666` for files).

##### Example:
- **Displaying current umask:**
    ```bash
    umask
    ```

- **Setting a umask value:**
    ```bash
    umask 022
    ```
    This command ensures that newly created files will have `rw-r--r--` permissions (i.e., read and write for the owner, and read for others).

- **Setting umask for files:**
    If the default umask is `022`, newly created files will have `644` permissions (`rw-r--r--`), and newly created directories will have `755` permissions (`rwxr-xr-x`).

---
