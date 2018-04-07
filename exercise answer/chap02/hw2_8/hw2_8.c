/* hw2_8.c */
/*
 * stdio.h
 *
 * Definitions of types and prototypes of functions for standard input and
 * output.
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the directory separator.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 1.10 $
 * $Author: earnie $
 * $Date: 2002/11/12 15:29:39 $
 *
 */

#ifndef _STDIO_H_
#define	_STDIO_H_

/* All the headers include this file. */
#include <_mingw.h>

#ifndef RC_INVOKED
#define __need_size_t
#define __need_NULL
#define __need_wchar_t
#define	__need_wint_t
#include <stddef.h>
#define __need___va_list
#include <stdarg.h>
#endif	/* Not RC_INVOKED */


/* Flags for the iobuf structure  */
#define	_IOREAD	1 /* currently reading */
#define	_IOWRT	2 /* currently writing */
#define	_IORW	0x0080 /* opened as "r+w" */


/*
 * The three standard file pointers provided by the run time library.
 * NOTE: These will go to the bit-bucket silently in GUI applications!
 */
#define	STDIN_FILENO	0
#define	STDOUT_FILENO	1
#define	STDERR_FILENO	2

/* Returned by various functions on end of file condition or error. */
#define	EOF	(-1)

/*
 * The maximum length of a file name. You should use GetVolumeInformation
 * instead of this constant. But hey, this works.
 *
 * NOTE: This is used in the structure _finddata_t (see io.h) so changing it
 *       is probably not a good idea.
 */
#define	FILENAME_MAX	(260)

/*
 * The maximum number of files that may be open at once. I have set this to
 * a conservative number. The actual value may be higher.
 */
#define FOPEN_MAX	(20)

/* After creating this many names, tmpnam and tmpfile return NULL */
#define TMP_MAX	32767
/*
 * Tmpnam, tmpfile and, sometimes, _tempnam try to create
 * temp files in the root directory of the current drive
 * (not in pwd, as suggested by some older MS doc's).
 * Redefining these macros does not effect the CRT functions.
 */
#define _P_tmpdir   "\\"
#define _wP_tmpdir  L"\\"

/*
 * The maximum size of name (including NUL) that will be put in the user
 * supplied buffer caName for tmpnam.
 * Inferred from the size of the static buffer returned by tmpnam
 * when passed a NULL argument. May actually be smaller.
 */
#define L_tmpnam (16)

#define _IOFBF    0x0000  /* full buffered */
#define _IOLBF    0x0040  /* line buffered */
#define _IONBF    0x0004  /* not buffered */

#define _IOMYBUF  0x0008  /* stdio malloc()'d buffer */
#define _IOEOF    0x0010  /* EOF reached on read */
#define _IOERR    0x0020  /* I/O error from system */
#define _IOSTRG   0x0040  /* Strange or no file descriptor */
#ifdef _POSIX_SOURCE
# define _IOAPPEND 0x0200
#endif
/*
 * The buffer size as used by setbuf such that it is equivalent to
 * (void) setvbuf(fileSetBuffer, caBuffer, _IOFBF, BUFSIZ).
 */
#define	BUFSIZ	512

/* Constants for nOrigin indicating the position relative to which fseek
 * sets the file position. Enclosed in ifdefs because io.h could also
 * define them. (Though not anymore since io.h includes this file now.) */
#ifndef	SEEK_SET
#define SEEK_SET	(0)
#endif

#ifndef	SEEK_CUR
#define	SEEK_CUR	(1)
#endif

#ifndef	SEEK_END
#define SEEK_END	(2)
#endif


#ifndef	RC_INVOKED

#ifdef __GNUC__
#define __VALIST __gnuc_va_list
#else
#define __VALIST char*
#endif

/*
 * The structure underlying the FILE type.
 *
 * I still believe that nobody in their right mind should make use of the
 * internals of this structure. Provided by Pedro A. Aranda Gutiirrez
 * <paag@tid.es>.
 */
#ifndef _FILE_DEFINED
#define	_FILE_DEFINED
typedef struct _iobuf
{
	char*	_ptr;
	int	_cnt;
	char*	_base;
	int	_flag;
	int	_file;
	int	_charbuf;
	int	_bufsiz;
	char*	_tmpfname;
} FILE;
#endif	/* Not _FILE_DEFINED */


/*
 * The standard file handles
 */
#ifndef __DECLSPEC_SUPPORTED

extern FILE (*_imp___iob)[];	/* A pointer to an array of FILE */

#define _iob	(*_imp___iob)	/* An array of FILE */

#else /* __DECLSPEC_SUPPORTED */

__MINGW_IMPORT FILE _iob[];	/* An array of FILE imported from DLL. */

#endif /* __DECLSPEC_SUPPORTED */

#define stdin	(&_iob[STDIN_FILENO])
#define stdout	(&_iob[STDOUT_FILENO])
#define stderr	(&_iob[STDERR_FILENO])

#ifdef __cplusplus
extern "C" {
#endif

/*
 * File Operations
 */
FILE*	fopen (const char*, const char*);
FILE*	freopen (const char*, const char*, FILE*);
int	fflush (FILE*);
int	fclose (FILE*);
/* MS puts remove & rename (but not wide versions) in io.h  also */
int	remove (const char*);
int	rename (const char*, const char*);
FILE*	tmpfile (void);
char*	tmpnam (char*);
char*	_tempnam (const char*, const char*);

#ifndef	NO_OLDNAMES
char*	tempnam (const char*, const char*);
#endif

int	setvbuf (FILE*, char*, int, size_t);

void	setbuf (FILE*, char*);

/*
 * Formatted Output
 */

int	fprintf (FILE*, const char*, ...);
int	printf (const char*, ...);
int	sprintf (char*, const char*, ...);
int	_snprintf (char*, size_t, const char*, ...);
int	vfprintf (FILE*, const char*, __VALIST);
int	vprintf (const char*, __VALIST);
int	vsprintf (char*, const char*, __VALIST);
int	_vsnprintf (char*, size_t, const char*, __VALIST);

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
int snprintf(char* s, size_t n, const char*  format, ...);
extern __inline__ int vsnprintf (char* s, size_t n, const char* format,
			   __VALIST arg)
  { return _vsnprintf ( s, n, format, arg); }
#endif

/*
 * Formatted Input
 */

int	fscanf (FILE*, const char*, ...);
int	scanf (const char*, ...);
int	sscanf (const char*, const char*, ...);
/*
 * Character Input and Output Functions
 */

int	fgetc (FILE*);
char*	fgets (char*, int, FILE*);
int	fputc (int, FILE*);
int	fputs (const char*, FILE*);
int	getc (FILE*);
int	getchar (void);
char*	gets (char*);
int	putc (int, FILE*);
int	putchar (int);
int	puts (const char*);
int	ungetc (int, FILE*);

/*
 * Direct Input and Output Functions
 */

size_t	fread (void*, size_t, size_t, FILE*);
size_t	fwrite (const void*, size_t, size_t, FILE*);

/*
 * File Positioning Functions
 */

int	fseek (FILE*, long, int);
long	ftell (FILE*);
void	rewind (FILE*);

#ifdef __USE_MINGW_FSEEK  /* These are in libmingwex.a */
/*
 * Workaround for limitations on win9x where a file contents are
 * not zero'd out if you seek past the end and then write.
 */

int __mingw_fseek (FILE *, long, int);
int __mingw_fwrite (const void*, size_t, size_t, FILE*);
#define fseek(fp, offset, whence)  __mingw_fseek(fp, offset, whence)
#define fwrite(buffer, size, count, fp)  __mingw_fwrite(buffer, size, count, fp)
#endif /* __USE_MINGW_FSEEK */

/*
 * An opaque data type used for storing file positions... The contents of
 * this type are unknown, but we (the compiler) need to know the size
 * because the programmer using fgetpos and fsetpos will be setting aside
 * storage for fpos_t structres. Actually I tested using a byte array and
 * it is fairly evident that the fpos_t type is a long (in CRTDLL.DLL).
 * Perhaps an unsigned long? TODO? It's definitely a 64-bit number in
 * MSVCRT however, and for now `long long' will do.
 */
#ifdef __MSVCRT__
typedef long long fpos_t;
#else
typedef long	fpos_t;
#endif

int	fgetpos	(FILE*, fpos_t*);
int	fsetpos (FILE*, const fpos_t*);

/*
 * Error Functions
 */

void	clearerr (FILE*);
int	feof (FILE*);
int	ferror (FILE*);
void	perror (const char*);


#ifndef __STRICT_ANSI__
/*
 * Pipes
 */
FILE*	_popen (const char*, const char*);
int	_pclose (FILE*);

#ifndef NO_OLDNAMES
FILE*	popen (const char*, const char*);
int	pclose (FILE*);
#endif

/*
 * Other Non ANSI functions
 */
int	_flushall (void);
int	_fgetchar (void);
int	_fputchar (int);
FILE*	_fdopen (int, const char*);
int	_fileno (FILE*);
int	_fcloseall(void);
#ifdef __MSVCRT__
int	_getmaxstdio(void);
int	_setmaxstdio(int);
#endif

#ifndef _NO_OLDNAMES
int	fgetchar (void);
int	fputchar (int);
FILE*	fdopen (int, const char*);
int	fileno (FILE*);
#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

/* Wide  versions */

#ifndef _WSTDIO_DEFINED
/*  also in wchar.h - keep in sync */
int	fwprintf (FILE*, const wchar_t*, ...);
int	wprintf (const wchar_t*, ...);
int	swprintf (wchar_t*, const wchar_t*, ...);
int	_snwprintf (wchar_t*, size_t, const wchar_t*, ...);
int	vfwprintf (FILE*, const wchar_t*, __VALIST);
int	vwprintf (const wchar_t*, __VALIST);
int	vswprintf (wchar_t*, const wchar_t*, __VALIST);
int	_vsnwprintf (wchar_t*, size_t, const wchar_t*, __VALIST);
int	fwscanf (FILE*, const wchar_t*, ...);
int	wscanf (const wchar_t*, ...);
int	swscanf (const wchar_t*, const wchar_t*, ...);
wint_t	fgetwc (FILE*);
wint_t	fputwc (wchar_t, FILE*);
wint_t	ungetwc (wchar_t, FILE*);
#ifdef __MSVCRT__ 
wchar_t* fgetws (wchar_t*, int, FILE*);
int	fputws (const wchar_t*, FILE*);
wint_t	getwc (FILE*);
wint_t	getwchar (void);
wchar_t* _getws (wchar_t*);
wint_t	putwc (wint_t, FILE*);
int	_putws (const wchar_t*);
wint_t	putwchar (wint_t);
FILE*	_wfdopen(int, wchar_t *);
FILE*	_wfopen (const wchar_t*, const wchar_t*);
FILE*	_wfreopen (const wchar_t*, const wchar_t*, FILE*);
FILE*	_wfsopen (const wchar_t*, const wchar_t*, int);
wchar_t* _wtmpnam (wchar_t*);
wchar_t* _wtempnam (const wchar_t*, const wchar_t*);
int	_wrename (const wchar_t*, const wchar_t*);
int	_wremove (const wchar_t*);
void	_wperror (const wchar_t*);
FILE*	_wpopen (const wchar_t*, const wchar_t*);
#endif	/* __MSVCRT__ */

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
int snwprintf(wchar_t* s, size_t n, const wchar_t*  format, ...);
extern __inline__ int
vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __VALIST arg)
  { return _vsnwprintf ( s, n, format, arg);}
#endif

#define _WSTDIO_DEFINED
#endif /* _WSTDIO_DEFINED */

#ifndef __STRICT_ANSI__
#ifdef __MSVCRT__
#ifndef NO_OLDNAMES
FILE*	wpopen (const wchar_t*, const wchar_t*);
#endif /* not NO_OLDNAMES */
#endif /* MSVCRT runtime */

/*
 * Other Non ANSI wide functions
 */
wint_t	_fgetwchar (void);
wint_t	_fputwchar (wint_t);
int	_getw (FILE*);
int	_putw (int, FILE*);

#ifndef _NO_OLDNAMES
wint_t	fgetwchar (void);
wint_t	fputwchar (wint_t);
int	getw (FILE*);
int	putw (int, FILE*);
#endif	/* Not _NO_OLDNAMES */

#endif /* __STRICT_ANSI */

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif /* _STDIO_H_ */

/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 1.15 $
 * $Author: earnie $
 * $Date: 2003/02/08 14:31:38 $
 *
 */

#ifndef _STDLIB_H_
#define _STDLIB_H_

/* All the headers include this file. */
#include <_mingw.h>


#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#ifndef RC_INVOKED
#include <stddef.h>
#endif /* RC_INVOKED */

/*
 * RAND_MAX is the maximum value that may be returned by rand.
 * The minimum is zero.
 */
#define	RAND_MAX	0x7FFF

/*
 * These values may be used as exit status codes.
 */
#define	EXIT_SUCCESS	0
#define	EXIT_FAILURE	1

/*
 * Definitions for path name functions.
 * NOTE: All of these values have simply been chosen to be conservatively high.
 *       Remember that with long file names we can no longer depend on
 *       extensions being short.
 */
#ifndef __STRICT_ANSI__

#ifndef MAX_PATH
#define	MAX_PATH	(260)
#endif

#define	_MAX_PATH	MAX_PATH
#define	_MAX_DRIVE	(3)
#define	_MAX_DIR	256
#define	_MAX_FNAME	256
#define	_MAX_EXT	256

#endif	/* Not __STRICT_ANSI__ */


#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * This seems like a convenient place to declare these variables, which
 * give programs using WinMain (or main for that matter) access to main-ish
 * argc and argv. environ is a pointer to a table of environment variables.
 * NOTE: Strings in _argv and environ are ANSI strings.
 */
extern int	_argc;
extern char**	_argv;

/* imports from runtime dll of the above variables */
#ifdef __MSVCRT__

extern int*     __p___argc(void);
extern char***   __p___argv(void);
extern wchar_t***   __p___wargv(void);

#define __argc (*__p___argc())
#define __argv (*__p___argv())
#define __wargv (*__p___wargv())

#else /* !MSVCRT */

#ifndef __DECLSPEC_SUPPORTED

extern int*    _imp____argc_dll;
extern char***  _imp____argv_dll;
#define __argc (*_imp____argc_dll)
#define __argv (*_imp____argv_dll)

#else /* __DECLSPEC_SUPPORTED */

__MINGW_IMPORT int    __argc_dll;
__MINGW_IMPORT char**  __argv_dll;
#define __argc __argc_dll
#define __argv __argv_dll

#endif /* __DECLSPEC_SUPPORTED */

#endif /* __MSVCRT */

/*
 * Also defined in ctype.h.
 */
#ifndef MB_CUR_MAX
#ifdef __DECLSPEC_SUPPORTED
# ifdef __MSVCRT__
#  define MB_CUR_MAX __mb_cur_max
   __MINGW_IMPORT int __mb_cur_max;
# else		/* not __MSVCRT */
#  define MB_CUR_MAX __mb_cur_max_dll
   __MINGW_IMPORT int __mb_cur_max_dll;
# endif		/* not __MSVCRT */

#else		/* ! __DECLSPEC_SUPPORTED */
# ifdef __MSVCRT__
   extern int* _imp____mbcur_max;
#  define MB_CUR_MAX (*_imp____mb_cur_max)
# else		/* not __MSVCRT */
   extern int*  _imp____mbcur_max_dll;
#  define MB_CUR_MAX (*_imp____mb_cur_max_dll)
# endif 	/* not __MSVCRT */
#endif  	/*  __DECLSPEC_SUPPORTED */
#endif  /* MB_CUR_MAX */

/* 
 * MS likes to declare errno in stdlib.h as well. 
 */

#ifdef _UWIN
#undef errno
extern int errno;
#else
int*	_errno(void);
#define	errno		(*_errno())
#endif
int*	__doserrno(void);
#define	_doserrno	(*__doserrno())

/*
 * Use environ from the DLL, not as a global. 
 */

#ifdef __MSVCRT__
  extern char *** __p__environ(void);
  extern wchar_t *** __p__wenviron(void);
# define _environ (*__p__environ())
# define _wenviron (*__p__wenviron())
#else /* ! __MSVCRT__ */
# ifndef __DECLSPEC_SUPPORTED
    extern char *** _imp___environ_dll;
#   define _environ (*_imp___environ_dll)
# else /* __DECLSPEC_SUPPORTED */
    __MINGW_IMPORT char ** _environ_dll;
#   define _environ _environ_dll
# endif /* __DECLSPEC_SUPPORTED */
#endif /* ! __MSVCRT__ */

#define environ _environ

#ifdef	__MSVCRT__
/* One of the MSVCRTxx libraries */

#ifndef __DECLSPEC_SUPPORTED
  extern int*	_imp___sys_nerr;
# define	sys_nerr	(*_imp___sys_nerr)
#else /* __DECLSPEC_SUPPORTED */
  __MINGW_IMPORT int	_sys_nerr;
# ifndef _UWIN
#   define	sys_nerr	_sys_nerr
# endif /* _UWIN */
#endif /* __DECLSPEC_SUPPORTED */

#else /* ! __MSVCRT__ */

/* CRTDLL run time library */

#ifndef __DECLSPEC_SUPPORTED
  extern int*	_imp___sys_nerr_dll;
# define sys_nerr	(*_imp___sys_nerr_dll)
#else /* __DECLSPEC_SUPPORTED */
  __MINGW_IMPORT int	_sys_nerr_dll;
# define sys_nerr	_sys_nerr_dll
#endif /* __DECLSPEC_SUPPORTED */

#endif /* ! __MSVCRT__ */

#ifndef __DECLSPEC_SUPPORTED
extern char***	_imp__sys_errlist;
#define	sys_errlist	(*_imp___sys_errlist)
#else /* __DECLSPEC_SUPPORTED */
__MINGW_IMPORT char*	_sys_errlist[];
#ifndef _UWIN
#define	sys_errlist	_sys_errlist
#endif /* _UWIN */
#endif /* __DECLSPEC_SUPPORTED */

/*
 * OS version and such constants.
 */
#ifndef __STRICT_ANSI__

#ifdef	__MSVCRT__
/* msvcrtxx.dll */

extern unsigned int*	__p__osver(void);
extern unsigned int*	__p__winver(void);
extern unsigned int*	__p__winmajor(void);
extern unsigned int*	__p__winminor(void);

#ifndef __DECLSPEC_SUPPORTED
# define _osver		(*__p__osver())
# define _winver	(*__p__winver())
# define _winmajor	(*__p__winmajor())
# define _winminor	(*__p__winminor())
#else
__MINGW_IMPORT unsigned int _osver;
__MINGW_IMPORT unsigned int _winver;
__MINGW_IMPORT unsigned int _winmajor;
__MINGW_IMPORT unsigned int _winminor;
#endif /* __DECLSPEC_SUPPORTED */

#else
/* Not msvcrtxx.dll, thus crtdll.dll */

#ifndef __DECLSPEC_SUPPORTED

extern unsigned int*	_imp___osver_dll;
extern unsigned int*	_imp___winver_dll;
extern unsigned int*	_imp___winmajor_dll;
extern unsigned int*	_imp___winminor_dll;

#define _osver		(*_imp___osver_dll)
#define _winver		(*_imp___winver_dll)
#define _winmajor	(*_imp___winmajor_dll)
#define _winminor	(*_imp___winminor_dll)

#else /* __DECLSPEC_SUPPORTED */

__MINGW_IMPORT unsigned int	_osver_dll;
__MINGW_IMPORT unsigned int	_winver_dll;
__MINGW_IMPORT unsigned int	_winmajor_dll;
__MINGW_IMPORT unsigned int	_winminor_dll;

#define _osver		_osver_dll
#define _winver		_winver_dll
#define _winmajor	_winmajor_dll
#define _winminor	_winminor_dll

#endif /* __DECLSPEC_SUPPORTED */

#endif

#if defined  __MSVCRT__
/* although the _pgmptr is exported as DATA,
 * be safe and use the access function __p__pgmptr() to get it. */
char**  __p__pgmptr(void);
#define _pgmptr     (*__p__pgmptr())
wchar_t**  __p__wpgmptr(void);
#define _wpgmptr    (*__p__wpgmptr())
#else /* ! __MSVCRT__ */
# ifndef __DECLSPEC_SUPPORTED
  extern char** __imp__pgmptr_dll;
# define _pgmptr (*_imp___pgmptr_dll)
# else /* __DECLSPEC_SUPPORTED */
 __MINGW_IMPORT char* _pgmptr_dll;
# define _pgmptr _pgmptr_dll
# endif /* __DECLSPEC_SUPPORTED */
/* no wide version in CRTDLL */
#endif /* __MSVCRT__ */

/*
 * This variable determines the default file mode.
 * TODO: Which flags work?
 */
#if !defined (__DECLSPEC_SUPPORTED) || defined (__IN_MINGW_RUNTIME)

#ifdef __MSVCRT__
extern int* _imp___fmode;
#define	_fmode	(*_imp___fmode)
#else
/* CRTDLL */
extern int* _imp___fmode_dll;
#define	_fmode	(*_imp___fmode_dll)
#endif

#else /* __DECLSPEC_SUPPORTED */

#ifdef __MSVCRT__
__MINGW_IMPORT  int _fmode;
#else /* ! __MSVCRT__ */
__MINGW_IMPORT  int _fmode_dll;
#define	_fmode	_fmode_dll
#endif /* ! __MSVCRT__ */

#endif /* __DECLSPEC_SUPPORTED */

#endif /* Not __STRICT_ANSI__ */

#ifdef	__GNUC__
#define	_ATTRIB_NORETURN	__attribute__ ((noreturn))
#else	/* Not __GNUC__ */
#define	_ATTRIB_NORETURN
#endif	/* __GNUC__ */

double	atof	(const char*);
int	atoi	(const char*);
long	atol	(const char*);
int	_wtoi (const wchar_t *);
long _wtol (const wchar_t *);

double	strtod	(const char*, char**);
#if !defined __NO_ISOCEXT  /* extern stubs in static libmingwex.a */
extern __inline__ float strtof (const char *nptr, char **endptr)
  { return (strtod (nptr, endptr));}
long double strtold (const char * __restrict__, char ** __restrict__);
#endif /* __NO_ISOCEXT */

long	strtol	(const char*, char**, int);
unsigned long	strtoul	(const char*, char**, int);

#ifndef _WSTDLIB_DEFINED
/*  also declared in wchar.h */
double	wcstod	(const wchar_t*, wchar_t**);
#if !defined __NO_ISOCEXT /* extern stub in static libmingwex.a */
extern __inline__ float wcstof( const wchar_t *nptr, wchar_t **endptr)
{  return (wcstod(nptr, endptr)); }
long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);
#endif /* __NO_ISOCEXT */

long	wcstol	(const wchar_t*, wchar_t**, int);
unsigned long	wcstoul (const wchar_t*, wchar_t**, int);
#define _WSTDLIB_DEFINED
#endif

size_t	wcstombs	(char*, const wchar_t*, size_t);
int	wctomb		(char*, wchar_t);

int	mblen		(const char*, size_t);
size_t	mbstowcs	(wchar_t*, const char*, size_t);
int	mbtowc		(wchar_t*, const char*, size_t);

int	rand	(void);
void	srand	(unsigned int);

void*	calloc	(size_t, size_t);
void*	malloc	(size_t);
void*	realloc	(void*, size_t);
void	free	(void*);

void	abort	(void) _ATTRIB_NORETURN;
void	exit	(int) _ATTRIB_NORETURN;
int	atexit	(void (*)(void));

int	system	(const char*);
char*	getenv	(const char*);

void*	bsearch	(const void*, const void*, size_t, size_t, 
                 int (*)(const void*, const void*));
void	qsort	(const void*, size_t, size_t,
                 int (*)(const void*, const void*));

int	abs	(int);
long	labs	(long);

/*
 * div_t and ldiv_t are structures used to return the results of div and
 * ldiv.
 *
 * NOTE: div and ldiv appear not to work correctly unless
 *       -fno-pcc-struct-return is specified. This is included in the
 *       mingw32 specs file.
 */
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

div_t	div	(int, int);
ldiv_t	ldiv	(long, long);

#ifndef	__STRICT_ANSI__

/*
 * NOTE: Officially the three following functions are obsolete. The Win32 API
 *       functions SetErrorMode, Beep and Sleep are their replacements.
 */
void	_beep (unsigned int, unsigned int);
void	_seterrormode (int);
void	_sleep (unsigned long);

void	_exit	(int) _ATTRIB_NORETURN;
#if !defined __NO_ISOCEXT /* extern stub in static libmingwex.a */
/* C99 function name */
void _Exit(int) _ATTRIB_NORETURN; /* Declare to get noreturn attribute.  */
extern __inline__ void _Exit(int status)
	{  _exit(status); }
#endif
/* _onexit is MS extension. Use atexit for portability.  */
typedef  int (* _onexit_t)(void);
_onexit_t _onexit( _onexit_t );

int	_putenv	(const char*);
void	_searchenv (const char*, const char*, char*);


char*	_ecvt (double, int, int*, int*);
char*	_fcvt (double, int, int*, int*);
char*	_gcvt (double, int, char*);

void	_makepath (char*, const char*, const char*, const char*, const char*);
void	_splitpath (const char*, char*, char*, char*, char*);
char*	_fullpath (char*, const char*, size_t);


char*	_itoa (int, char*, int);
char*	_ltoa (long, char*, int);
char*   _ultoa(unsigned long, char*, int);
wchar_t*  _itow (int, wchar_t*, int);
wchar_t*  _ltow (long, wchar_t*, int);
wchar_t*  _ultow (unsigned long, wchar_t*, int);

#ifdef __MSVCRT__
__int64	_atoi64(const char *);
char*	_i64toa(__int64, char *, int);
char*	_ui64toa(unsigned __int64, char *, int);
__int64	_wtoi64(const wchar_t *);
wchar_t* _i64tow(__int64, wchar_t *, int);
wchar_t* _ui64tow(unsigned __int64, wchar_t *, int);

wchar_t* _wgetenv(const wchar_t*);
int	 _wputenv(const wchar_t*);
void	_wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
void    _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
void	_wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
wchar_t*    _wfullpath (wchar_t*, const wchar_t*, size_t);

unsigned int _rotl(unsigned int, int);
unsigned int _rotr(unsigned int, int);
unsigned long _lrotl(unsigned long, int);
unsigned long _lrotr(unsigned long, int);
#endif

#ifndef	_NO_OLDNAMES

int	putenv (const char*);
void	searchenv (const char*, const char*, char*);

char*	itoa (int, char*, int);
char*	ltoa (long, char*, int);

#ifndef _UWIN
char*	ecvt (double, int, int*, int*);
char*	fcvt (double, int, int*, int*);
char*	gcvt (double, int, char*);
#endif /* _UWIN */
#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

/* C99 names */

#if !defined __NO_ISOCEXT /* externs in static libmingwex.a */

typedef struct { long long quot, rem; } lldiv_t;

lldiv_t	lldiv (long long, long long);

extern __inline__ long long llabs(long long _j)
  {return (_j >= 0 ? _j : -_j);}

long long strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long strtoull (const char* __restrict__, char** __restrict__, int);

#if defined (__MSVCRT__) /* these are stubs for MS _i64 versions */ 
long long atoll (const char *);

#if !defined (__STRICT_ANSI__)
long long wtoll(const wchar_t *);
char* lltoa(long long, char *, int);
char* ulltoa(unsigned long long , char *, int);
wchar_t* lltow(long long, wchar_t *, int);
wchar_t* ulltow(unsigned long long, wchar_t *, int);

  /* inline using non-ansi functions */
extern __inline__ long long atoll (const char * _c)
	{ return _atoi64 (_c); }
extern __inline__ char* lltoa(long long _n, char * _c, int _i)
	{ return _i64toa (_n, _c, _i); }
extern __inline__ char* ulltoa(unsigned long long _n, char * _c, int _i)
	{ return _ui64toa (_n, _c, _i); }
extern __inline__ long long wtoll(const wchar_t * _w)
 	{ return _wtoi64 (_w); }
extern __inline__ wchar_t* lltow(long long _n, wchar_t * _w, int _i)
	{ return _i64tow (_n, _w, _i); } 
extern __inline__ wchar_t* ulltow(unsigned long long _n, wchar_t * _w, int _i)
	{ return _ui64tow (_n, _w, _i); } 
#endif /* (__STRICT_ANSI__)  */

#endif /* __MSVCRT__ */

#endif /* !__NO_ISOCEXT */

/*
 * Undefine the no return attribute used in some function definitions
 */
#undef	_ATTRIB_NORETURN

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _STDLIB_H_ */

int main(void)
{
   int i=2;      /* 宣告變數i，並設值為2 */
   if(i<5)       /* if區塊由此開始 */
   {
      printf("變數i的值小於5");
      printf("\n");      /* 換行 */ 
   }             /* if區塊結束 */ 
   system("pause");
   return 0;
}

/* output------
變數i的值小於5
-------------*/
