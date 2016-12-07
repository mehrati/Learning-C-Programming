/*
Within the exec family, there are functions that vary slightly in their capabilities and how they are called.

· Functions that contain the letter p in their names (execvp and execlp) accept a program name and search for a program by that name in the current execution path;
 functions that don't contain the p must be given the full path of the program to be executed.

· Functions that contain the letter v in their names (execv, execvp, and execve) accept the argument list for the new program as a NULL-terminated array of pointers to strings. 
Functions that contain the letter l (execl, execlp, and execle) accept the argument list using the C language's varargs mechanism.

· Functions that contain the letter e in their names (execve and execle) accept an additional argument, an array of environment variables.
  The argument should be a NULL-terminated array of pointers to character strings.
  Each character string should be of the form "VARIABLE=value".*/
