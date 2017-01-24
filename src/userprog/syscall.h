#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <user/syscall.h>
#include "threads/synch.h"
#include "userprog/process.h"

struct lock filesys_lock;

/* syscall function headers */

void halt (void) NO_RETURN;
void exit (int status) NO_RETURN;
int exec (const char *file);
int wait (pid_t pid);
bool create (const char *file, unsigned initial_size);
bool remove (const char *file);
int open (const char *file);
int filesize (int fd);
int read (int fd, void *buffer, unsigned size);
int write (int fd, const void *buffer, unsigned size);
void seek (int fd, unsigned position);
unsigned tell (int fd);
void close (int fd);

void syscall_init (void);

#endif /* userprog/syscall.h */
