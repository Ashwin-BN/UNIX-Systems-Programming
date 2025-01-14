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
