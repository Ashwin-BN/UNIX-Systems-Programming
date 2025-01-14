# Introduction to UNIX

## Operating Systems
    - allocate resources and schedule tasks
    - resources include CPU, memory, disk, tape, printers, terminals, modems, etc.
    - only one user allowed at a time for each resource
    - keeps track of filenames and directory structure
    - multi-tasking (one task at a time per processor actually executing)
    - multi-processing (schedules multiple processors)
    - multi-user

## History of UNIX
    - developed at Bell Labs (AT&T) in 1969
    - unlike most OS's at the time, UNIX was multi-user, interactive, and simplified sharing of data & programs
    - became popular in industry as college and university graduates were trained in it
    - open system, ported to many different hardware platforms (unlike IBM, Burroughs, Univac mainframes)
    - software written for one UNIX system will often run on other systems with little or no modification
    - still very weak in areas of system management - tape management, security, hardware accounting, capacity planning tools, performance management including prioritization of jobs
    - hardware manufacturers modified UNIX to run on their systems and added enhancements
    - standardization was begun in response to Windows NT threat
    - System V Release 4 is one of the steps to address standardization
    - SVR4 includes many of the modifications that were being done by hardware manufacturers, if they were universally useful and applicable

## History of Linux
    - GNU (Gnu's not Unix) was started in early 80's to create and promote free software
    - Linux was created by Linus Torvalds in the 1990's, released to the Internet in 1994, mostly using GNU C compiler
    - about 1/3 of Linux is GNU code from the Free Software Foundation - a Linux distribution consists of Linux kernel + GNU compilers/tools/utilities + other free software
    - Linux uses the Open Source model for development - code is placed on the Internet, users download and test it, programmers improve it and place it back on the web
    - there is competition among programmers to fix bugs and improve Linux

## UNIX Structure
    - Hardware, surrounded by
    - UNIX Kernel (basic OS), surrounded by
    - Shell (user interface, command interpreter, and some built-in commands), surrounded by
    - Utilities (or commands)
    - most common shells: Bourne shell (sh), C shell (csh), Korn shell (ksh), Bourne again shell (bash), TC shell (tcsh), Z shell (zsh)
    - we'll mostly be concerned with the Bash shell, which is the most popular Linux shell
    - the Korn shell is the most popular Unix shell, and is very similar to the Bash shell

## Entering Commands, Logging In & Out
    - to login, use an ssh (or similar) program, and provide userid and password
    - to backspace (erase), usually backspace, control-h, or control-backspace
    - to interrupt a process, usually control-c
    - to logout, use exit, logout, or control-d
    - command line arguments can be separated by one or more spaces or tabs

---

## Some Commands
- **pwd** will show your current directory
- **cd** is used to change current directory, eg. cd directory-name
- **ls** - lists information about files and directories
- **ls -a** - all files (including hidden)
- **ls -l** - long form, gives more information about files
- **ls -d** - gives information about the directory itself, not contained files
- these options can be mixed and matched, eg. ls -ld
- **cal** - displays a calendar of the current month
- **cal 1995** - displays calendar for specified year
- **cal 3 1995** - displays calendar for specified month of specified year
- **date** - gives date and time
- **who, w** - information about users logged on to system
- **who am i, whoami** - information about your session
