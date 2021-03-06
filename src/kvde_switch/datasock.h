/* Copyright 2002 Jeff Dike
 * Licensed under the GPL
 */

#ifndef __DATASOCK_H__
#define __DATASOCK_H__

int send_datasock(int fd, int ctl_fd, void *packet, int len, void *unused, int port);
int recv_datasock(int fd, void *packet, int maxlen, int port);
int open_datasock(char *dev);
int check_kernel_support(void); 

#endif
