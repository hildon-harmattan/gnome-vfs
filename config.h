/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if you have the Andrew File System */
/* #undef AFS */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Indicates http debugging status */
/* #undef DEBUG_HTTP_ENABLE */

/* Define to enable IPv6 support */
#define ENABLE_IPV6 /**/

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Whether to enable profiler support */
/* #undef ENABLE_PROFILER */

/* Define to use AIX3 statfs to get filesystem type */
/* #undef FSTYPE_AIX_STATFS */

/* Define to use Ultrix getmnt to get filesystem typ */
/* #undef FSTYPE_GETMNT */

/* Define to use 4.3BSD getmntent to get filesystem typ */
#define FSTYPE_MNTENT /**/

/* Define to use 4.4BSD and OSF1 statfs to get filesystem typ */
/* #undef FSTYPE_STATFS */

/* Define to use SVR4 statvfs to get filesystem type */
/* #undef FSTYPE_STATVFS */

/* Define to use SVR3.2 statfs to get filesystem type */
/* #undef FSTYPE_USG_STATFS */

/* Name of the gettext package */
#define GETTEXT_PACKAGE "gnome-vfs-2.0"

/* FIXME */
/* #undef GNUTLS_COMPAT */

/* Define if GSS_C_NT_HOSTBASED_SERVICE is not defined otherwise */
/* #undef GSS_C_NT_HOSTBASED_SERVICE */

/* Path to program for ejecting filesystems known to HAL (not used if
   gnome-mount is installed) */
/* #undef HAL_EJECT */

/* Path to program for mounting filesystems known to HAL (not used if
   gnome-mount is installed) */
/* #undef HAL_MOUNT */

/* Path to program for unmounting filesystems known to HAL (not used if
   gnome-mount is installed) */
/* #undef HAL_UMOUNT */

/* Define to 1 if you have the `acl_extended_file' function. */
/* #undef HAVE_ACL_EXTENDED_FILE */

/* Define if the system defines the AI_ADDRCONFIG flag for getaddrinfo */
#define HAVE_AI_ADDRCONFIG 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* Set if we can use avahi */
/* #undef HAVE_AVAHI */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the <bzlib.h> header file. */
#define HAVE_BZLIB_H 1

/* Define to 1 if you have the <cdda_interface.h> header file. */
/* #undef HAVE_CDDA_INTERFACE_H */

/* Define to 1 if you have the <cdda_paranoia.h> header file. */
/* #undef HAVE_CDDA_PARANOIA_H */

/* Define to 1 if cdparanoia contains FreeBSD-specific libcam support */
/* #undef HAVE_CDDA_WITH_LIBCAM */

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the `dirname' function. */
#define HAVE_DIRNAME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `endmntent' function. */
#define HAVE_ENDMNTENT 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define if we have FAM */
/* #undef HAVE_FAM */

/* Define to 1 if you have the <fam.h> header file. */
/* #undef HAVE_FAM_H */

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the <fstab.h> header file. */
#define HAVE_FSTAB_H 1

/* Define to 1 getaddrinfo is present on this system */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `getgrgid_r' function. */
/* #undef HAVE_GETGRGID_R */

/* Define to 1 if you have the `getgrnam_r' function. */
/* #undef HAVE_GETGRNAM_R */

/* Define if you have a glibc-style gethostbyname_r() */
/* #undef HAVE_GETHOSTBYNAME_R_GLIBC */

/* Define if you have an HP-UX-style gethostbyname_r() */
/* #undef HAVE_GETHOSTBYNAME_R_HPUX */

/* Define if you have a Solaris-style gethostbyname_r() */
/* #undef HAVE_GETHOSTBYNAME_R_SOLARIS */

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the `getpt' function. */
#define HAVE_GETPT 1

/* Define to 1 if you have the `getpwnam_r' function. */
/* #undef HAVE_GETPWNAM_R */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if GnuTLS is available */
/* #undef HAVE_GNUTLS */

/* Define to 1 if you have the `grantpt' function. */
#define HAVE_GRANTPT 1

/* Define to 1 if you have the <grp.h> header file. */
/* #undef HAVE_GRP_H */

/* Define if GSSAPI support is enabled */
/* #undef HAVE_GSSAPI */

/* Define to 1 if you have the <gssapi/gssapi_generic.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_GENERIC_H */

/* Define to 1 if you have the <gssapi/gssapi.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_H */

/* Define to 1 if you have the <gssapi.h> header file. */
/* #undef HAVE_GSSAPI_H */

/* Define to 1 if you have the `gss_init_sec_context' function. */
/* #undef HAVE_GSS_INIT_SEC_CONTEXT */

/* Define to 1 if you have the `hasmntopt' function. */
#define HAVE_HASMNTOPT 1

/* Set if we can use howl */
/* #undef HAVE_HOWL */

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define if you have libxml */
#define HAVE_LIBXML 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Whether login_tty is available */
#define HAVE_LOGIN_TTY /**/

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the `ngettext' function. */
#define HAVE_NGETTEXT 1

/* Have non-POSIX function getpwuid_r */
/* #undef HAVE_NONPOSIX_GETPWUID_R */

/* Whether off64_t type is available */
#define HAVE_OFF64_T 1

/* Define to 1 if older bzip2 version is used */
/* #undef HAVE_OLDER_BZIP2 */

/* Define to 1 if you have the `open64' function. */
#define HAVE_OPEN64 1

/* Define to 1 if OpenSSL is available */
#define HAVE_OPENSSL 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
/* #undef HAVE_OPENSSL_SSL_H */

/* Define to 1 if you have the <openssl/x509.h> header file. */
/* #undef HAVE_OPENSSL_X509_H */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Have POSIX ACLs */
/* #undef HAVE_POSIX_ACL */

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Have POSIX function getpwuid_r */
/* #undef HAVE_POSIX_GETPWUID_R */

/* Define to 1 if you have the `posix_openpt' function. */
#define HAVE_POSIX_OPENPT 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the `ptsname_r' function. */
#define HAVE_PTSNAME_R 1

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define to 1 if you have the `readdir_r' function. */
#define HAVE_READDIR_R 1

/* Indicates if res_ninit is available */
#define HAVE_RES_NINIT 1

/* Define to 1 if you have the samba 3.0 libraries */
/* #undef HAVE_SAMBA */

/* Defined if flags availible in SMBCCTXT */
/* #undef HAVE_SAMBA_FLAGS */

/* Defined if old close is available in SMBCCTXT */
/* #undef HAVE_SAMBA_OLD_CLOSE */

/* Define to 1 if libselinux is available */
/* #undef HAVE_SELINUX */

/* Define to 1 if you have the <selinux/selinux.h> header file. */
/* #undef HAVE_SELINUX_SELINUX_H */

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setmntent' function. */
#define HAVE_SETMNTENT 1

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the `signal' function. */
#define HAVE_SIGNAL 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Whether we have socket */
#define HAVE_SOCKET 1

/* Define if you have the socketpair function. */
#define HAVE_SOCKETPAIR 1

/* Have Solaris ACLs */
/* #undef HAVE_SOLARIS_ACL */

/* Define to 1 if you have the `statfs' function. */
#define HAVE_STATFS 1

/* Define to 1 if you have the `statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 1

/* Define to 1 if struct linger is available */
#define HAVE_STRUCT_LINGER 1

/* Define to 1 if `f_fstyp' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FSTYP */

/* Define to 1 if `f_type' is a member of `struct statfs'. */
#define HAVE_STRUCT_STATFS_F_TYPE 1

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_GMTOFF 1

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#define HAVE_ST_BLOCKS 1

/* Define to 1 if you have the `sysctlbyname' function. */
/* #undef HAVE_SYSCTLBYNAME */

/* Define to 1 if you have the <sys/cdio.h> header file. */
/* #undef HAVE_SYS_CDIO_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/mntctl.h> header file. */
/* #undef HAVE_SYS_MNTCTL_H */

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/vmount.h> header file. */
/* #undef HAVE_SYS_VMOUNT_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlockpt' function. */
#define HAVE_UNLOCKPT 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Build neon ssl support */
#define NEON_SSL 1

/* Define to be the neon version string */
#define NEON_VERSION "0.25.4"

/* Define to be printf format string for off_t */
#define NE_FMT_OFF_T "ld"

/* Define to be printf format string for size_t */
#define NE_FMT_SIZE_T "u"

/* Define to be printf format string for ssize_t */
#define NE_FMT_SSIZE_T "d"

/* Define to be neon library major version */
#define NE_VERSION_MAJOR (0)

/* Define to be neon library minor version */
#define NE_VERSION_MINOR (25)

/* Define to be neon library patch version */
#define NE_VERSION_PATCH (4)

/* Name of package */
#define PACKAGE "gnome-vfs"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 4

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Number of arguments to statfs() */
#define STATFS_ARGS 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* defined if we have gnome-vfs-daemon */
#define USE_DAEMON 1

/* Support WebDAV locking through the library */
#define USE_DAV_LOCKS 1

/* Define to 1 if getaddrinfo is used for name resolution */
#define USE_GETADDRINFO 1

/* Define if gethostbyname is used for name resolution */
/* #undef USE_GETHOSTBYNAME */

/* Define to 1 if gethostbyname_r is used for name resolution */
/* #undef USE_GETHOSTBYNAME_R */

/* defined if using libhal */
#define USE_HAL 1

/* Version number of package */
#define VERSION "2.24.4"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable GNU Extensions */
#define _GNU_SOURCE 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* off_t */
/* #undef off_t */

/* size_t */
/* #undef size_t */
