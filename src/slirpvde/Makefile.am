AM_CPPFLAGS = -I$(top_srcdir)/include -DVDE -DCONFIG_SLIRP -DCONFIG_NEED_OFFSETOF
AM_CFLAGS = -g -O2

if ENABLE_PROFILE
  AM_CFLAGS += -pg --coverage
  AM_LDFLAGS = -pg --coverage
endif

bin_PROGRAMS = slirpvde

slirpvde_SOURCES = \
		   misc.c \
		   misc.h \
		   cksum.c \
		   debug.h \
		   if.c \
		   if.h \
		   ip.h \
		   ip_icmp.c \
		   ip_icmp.h \
		   ip_input.c \
		   ip_output.c \
		   libslirp.h \
		   main.h \
		   mbuf.c \
		   mbuf.h \
		   osdep.h \
		   qemu-queue.h \
		   qemu-common.h \
		   sbuf.c \
		   sbuf.h \
		   slirp.c \
		   slirp_config.h \
		   slirp.h \
		   socket.c \
		   socket.h \
		   tcp.h \
		   tcp_input.c \
		   tcpip.h \
		   tcp_output.c \
		   tcp_subr.c \
		   tcp_timer.c \
		   tcp_timer.h \
		   tcp_var.h \
		   udp.c \
		   udp.h \
		   bootp.c \
		   bootp.h \
		   tcp2unix.c \
		   tcp2unix.h \
		   tftp.c \
		   tftp.h \
		   slirpvde.c

slirpvde_LDADD = $(top_builddir)/src/common/libvdecommon.la $(top_builddir)/src/lib/libvdeplug.la
