
/*
 * zlibtclDecls.h --
 *
 *	Declarations of functions in the platform independent public ZLIBTCL API.
 *
 */

#ifndef _ZLIBTCLDECLS
#define _ZLIBTCLDECLS

/*
 * WARNING: The contents of this file is automatically generated by the
 * genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the zlibtcl.decls script.
 */

#include <tcl.h>
#include <zlibtclDeclsMask.h>
#include <zlib.h>
#include <zlibtclDeclsUnmask.h>

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported function declarations:
 */

/* 0 */
EXTERN CONST char*	zlibVersion _ANSI_ARGS_((void));
/* 1 */
EXTERN CONST char*	zError _ANSI_ARGS_((int err));
/* 2 */
EXTERN uLong		crc32 _ANSI_ARGS_((uLong crc, const Bytef * buf, 
				uInt len));
/* 3 */
EXTERN uLong		adler32 _ANSI_ARGS_((uLong adler, const Bytef * buf, 
				uInt len));
/* Slot 4 is reserved */
/* Slot 5 is reserved */
/* Slot 6 is reserved */
/* Slot 7 is reserved */
/* Slot 8 is reserved */
/* Slot 9 is reserved */
/* 10 */
EXTERN int		deflateInit_ _ANSI_ARGS_((z_streamp stream, 
				int level, const char* version, 
				int stream_size));
/* 11 */
EXTERN int		deflateInit2_ _ANSI_ARGS_((z_streamp stream, 
				int level, int method, int windowBits, 
				int memLevel, int strategy, 
				const char* version, int stream_size));
/* 12 */
EXTERN int		deflate _ANSI_ARGS_((z_streamp stream, int flush));
/* 13 */
EXTERN int		deflateEnd _ANSI_ARGS_((z_streamp stream));
/* 14 */
EXTERN int		deflateSetDictionary _ANSI_ARGS_((z_streamp stream, 
				CONST Bytef* dict, uInt dictLength));
/* 15 */
EXTERN int		deflateCopy _ANSI_ARGS_((z_streamp dst, 
				z_streamp src));
/* 16 */
EXTERN int		deflateReset _ANSI_ARGS_((z_streamp stream));
/* 17 */
EXTERN int		deflateParams _ANSI_ARGS_((z_streamp stream, 
				int level, int strategy));
/* 18 */
EXTERN int		compress _ANSI_ARGS_((Bytef * dest, uLongf * destLen, 
				CONST Bytef * source, uLong sourceLen));
/* 19 */
EXTERN int		compress2 _ANSI_ARGS_((Bytef * dest, 
				uLongf * destLen, CONST Bytef * source, 
				uLong sourceLen, int level));
/* 20 */
EXTERN int		inflateInit_ _ANSI_ARGS_((z_streamp stream, 
				const char* version, int stream_size));
/* 21 */
EXTERN int		inflateInit2_ _ANSI_ARGS_((z_streamp stream, 
				int windowBits, const char* version, 
				int stream_size));
/* 22 */
EXTERN int		inflate _ANSI_ARGS_((z_streamp stream, int flush));
/* 23 */
EXTERN int		inflateEnd _ANSI_ARGS_((z_streamp stream));
/* 24 */
EXTERN int		inflateSetDictionary _ANSI_ARGS_((z_streamp stream, 
				CONST Bytef* dict, uInt dictLength));
/* 25 */
EXTERN int		inflateSync _ANSI_ARGS_((z_streamp stream));
/* 26 */
EXTERN int		inflateReset _ANSI_ARGS_((z_streamp stream));
/* 27 */
EXTERN int		uncompress _ANSI_ARGS_((Bytef * dest, 
				uLongf * destLen, CONST Bytef * source, 
				uLong sourceLen));
/* Slot 28 is reserved */
/* Slot 29 is reserved */
/* 30 */
EXTERN gzFile		gzopen _ANSI_ARGS_((const char * path, 
				const char * mode));
/* 31 */
EXTERN gzFile		gzdopen _ANSI_ARGS_((int fd, const char * mode));
/* 32 */
EXTERN int		gzsetparams _ANSI_ARGS_((gzFile file, int level, 
				int strategy));
/* 33 */
EXTERN int		gzread _ANSI_ARGS_((gzFile file, voidp buf, 
				unsigned len));
/* 34 */
EXTERN int		gzwrite _ANSI_ARGS_((gzFile file, const voidpc buf, 
				unsigned len));
/* Slot 35 is reserved */
/* 36 */
EXTERN int		gzputs _ANSI_ARGS_((gzFile file, const char * s));
/* 37 */
EXTERN char*		gzgets _ANSI_ARGS_((gzFile file, char * buf, int len));
/* 38 */
EXTERN int		gzputc _ANSI_ARGS_((gzFile file, int c));
/* 39 */
EXTERN int		gzgetc _ANSI_ARGS_((gzFile file));
/* 40 */
EXTERN int		gzflush _ANSI_ARGS_((gzFile file, int flush));
/* 41 */
EXTERN z_off_t		gzseek _ANSI_ARGS_((gzFile file, z_off_t offset, 
				int whence));
/* 42 */
EXTERN int		gzrewind _ANSI_ARGS_((gzFile file));
/* 43 */
EXTERN z_off_t		gztell _ANSI_ARGS_((gzFile file));
/* 44 */
EXTERN int		gzeof _ANSI_ARGS_((gzFile file));
/* 45 */
EXTERN int		gzclose _ANSI_ARGS_((gzFile file));
/* 46 */
EXTERN const char*	gzerror _ANSI_ARGS_((gzFile file, int * errnum));

typedef struct ZlibtclStubs {
    int magic;
    struct ZlibtclStubHooks *hooks;

    CONST char* (*zlibVersion) _ANSI_ARGS_((void)); /* 0 */
    CONST char* (*zError) _ANSI_ARGS_((int err)); /* 1 */
    uLong (*crc32) _ANSI_ARGS_((uLong crc, const Bytef * buf, uInt len)); /* 2 */
    uLong (*adler32) _ANSI_ARGS_((uLong adler, const Bytef * buf, uInt len)); /* 3 */
    void *reserved4;
    void *reserved5;
    void *reserved6;
    void *reserved7;
    void *reserved8;
    void *reserved9;
    int (*deflateInit_) _ANSI_ARGS_((z_streamp stream, int level, const char* version, int stream_size)); /* 10 */
    int (*deflateInit2_) _ANSI_ARGS_((z_streamp stream, int level, int method, int windowBits, int memLevel, int strategy, const char* version, int stream_size)); /* 11 */
    int (*deflate) _ANSI_ARGS_((z_streamp stream, int flush)); /* 12 */
    int (*deflateEnd) _ANSI_ARGS_((z_streamp stream)); /* 13 */
    int (*deflateSetDictionary) _ANSI_ARGS_((z_streamp stream, CONST Bytef* dict, uInt dictLength)); /* 14 */
    int (*deflateCopy) _ANSI_ARGS_((z_streamp dst, z_streamp src)); /* 15 */
    int (*deflateReset) _ANSI_ARGS_((z_streamp stream)); /* 16 */
    int (*deflateParams) _ANSI_ARGS_((z_streamp stream, int level, int strategy)); /* 17 */
    int (*compress) _ANSI_ARGS_((Bytef * dest, uLongf * destLen, CONST Bytef * source, uLong sourceLen)); /* 18 */
    int (*compress2) _ANSI_ARGS_((Bytef * dest, uLongf * destLen, CONST Bytef * source, uLong sourceLen, int level)); /* 19 */
    int (*inflateInit_) _ANSI_ARGS_((z_streamp stream, const char* version, int stream_size)); /* 20 */
    int (*inflateInit2_) _ANSI_ARGS_((z_streamp stream, int windowBits, const char* version, int stream_size)); /* 21 */
    int (*inflate) _ANSI_ARGS_((z_streamp stream, int flush)); /* 22 */
    int (*inflateEnd) _ANSI_ARGS_((z_streamp stream)); /* 23 */
    int (*inflateSetDictionary) _ANSI_ARGS_((z_streamp stream, CONST Bytef* dict, uInt dictLength)); /* 24 */
    int (*inflateSync) _ANSI_ARGS_((z_streamp stream)); /* 25 */
    int (*inflateReset) _ANSI_ARGS_((z_streamp stream)); /* 26 */
    int (*uncompress) _ANSI_ARGS_((Bytef * dest, uLongf * destLen, CONST Bytef * source, uLong sourceLen)); /* 27 */
    void *reserved28;
    void *reserved29;
    gzFile (*gzopen) _ANSI_ARGS_((const char * path, const char * mode)); /* 30 */
    gzFile (*gzdopen) _ANSI_ARGS_((int fd, const char * mode)); /* 31 */
    int (*gzsetparams) _ANSI_ARGS_((gzFile file, int level, int strategy)); /* 32 */
    int (*gzread) _ANSI_ARGS_((gzFile file, voidp buf, unsigned len)); /* 33 */
    int (*gzwrite) _ANSI_ARGS_((gzFile file, const voidpc buf, unsigned len)); /* 34 */
    void *reserved35;
    int (*gzputs) _ANSI_ARGS_((gzFile file, const char * s)); /* 36 */
    char* (*gzgets) _ANSI_ARGS_((gzFile file, char * buf, int len)); /* 37 */
    int (*gzputc) _ANSI_ARGS_((gzFile file, int c)); /* 38 */
    int (*gzgetc) _ANSI_ARGS_((gzFile file)); /* 39 */
    int (*gzflush) _ANSI_ARGS_((gzFile file, int flush)); /* 40 */
    z_off_t (*gzseek) _ANSI_ARGS_((gzFile file, z_off_t offset, int whence)); /* 41 */
    int (*gzrewind) _ANSI_ARGS_((gzFile file)); /* 42 */
    z_off_t (*gztell) _ANSI_ARGS_((gzFile file)); /* 43 */
    int (*gzeof) _ANSI_ARGS_((gzFile file)); /* 44 */
    int (*gzclose) _ANSI_ARGS_((gzFile file)); /* 45 */
    const char* (*gzerror) _ANSI_ARGS_((gzFile file, int * errnum)); /* 46 */
} ZlibtclStubs;

#ifdef __cplusplus
extern "C" {
#endif
extern ZlibtclStubs *zlibtclStubsPtr;
#ifdef __cplusplus
}
#endif

#if defined(USE_ZLIBTCL_STUBS) && !defined(USE_ZLIBTCL_STUB_PROCS)

/*
 * Inline function declarations:
 */

#ifndef zlibVersion
#define zlibVersion \
	(zlibtclStubsPtr->zlibVersion) /* 0 */
#endif
#ifndef zError
#define zError \
	(zlibtclStubsPtr->zError) /* 1 */
#endif
#ifndef crc32
#define crc32 \
	(zlibtclStubsPtr->crc32) /* 2 */
#endif
#ifndef adler32
#define adler32 \
	(zlibtclStubsPtr->adler32) /* 3 */
#endif
/* Slot 4 is reserved */
/* Slot 5 is reserved */
/* Slot 6 is reserved */
/* Slot 7 is reserved */
/* Slot 8 is reserved */
/* Slot 9 is reserved */
#ifndef deflateInit_
#define deflateInit_ \
	(zlibtclStubsPtr->deflateInit_) /* 10 */
#endif
#ifndef deflateInit2_
#define deflateInit2_ \
	(zlibtclStubsPtr->deflateInit2_) /* 11 */
#endif
#ifndef deflate
#define deflate \
	(zlibtclStubsPtr->deflate) /* 12 */
#endif
#ifndef deflateEnd
#define deflateEnd \
	(zlibtclStubsPtr->deflateEnd) /* 13 */
#endif
#ifndef deflateSetDictionary
#define deflateSetDictionary \
	(zlibtclStubsPtr->deflateSetDictionary) /* 14 */
#endif
#ifndef deflateCopy
#define deflateCopy \
	(zlibtclStubsPtr->deflateCopy) /* 15 */
#endif
#ifndef deflateReset
#define deflateReset \
	(zlibtclStubsPtr->deflateReset) /* 16 */
#endif
#ifndef deflateParams
#define deflateParams \
	(zlibtclStubsPtr->deflateParams) /* 17 */
#endif
#ifndef compress
#define compress \
	(zlibtclStubsPtr->compress) /* 18 */
#endif
#ifndef compress2
#define compress2 \
	(zlibtclStubsPtr->compress2) /* 19 */
#endif
#ifndef inflateInit_
#define inflateInit_ \
	(zlibtclStubsPtr->inflateInit_) /* 20 */
#endif
#ifndef inflateInit2_
#define inflateInit2_ \
	(zlibtclStubsPtr->inflateInit2_) /* 21 */
#endif
#ifndef inflate
#define inflate \
	(zlibtclStubsPtr->inflate) /* 22 */
#endif
#ifndef inflateEnd
#define inflateEnd \
	(zlibtclStubsPtr->inflateEnd) /* 23 */
#endif
#ifndef inflateSetDictionary
#define inflateSetDictionary \
	(zlibtclStubsPtr->inflateSetDictionary) /* 24 */
#endif
#ifndef inflateSync
#define inflateSync \
	(zlibtclStubsPtr->inflateSync) /* 25 */
#endif
#ifndef inflateReset
#define inflateReset \
	(zlibtclStubsPtr->inflateReset) /* 26 */
#endif
#ifndef uncompress
#define uncompress \
	(zlibtclStubsPtr->uncompress) /* 27 */
#endif
/* Slot 28 is reserved */
/* Slot 29 is reserved */
#ifndef gzopen
#define gzopen \
	(zlibtclStubsPtr->gzopen) /* 30 */
#endif
#ifndef gzdopen
#define gzdopen \
	(zlibtclStubsPtr->gzdopen) /* 31 */
#endif
#ifndef gzsetparams
#define gzsetparams \
	(zlibtclStubsPtr->gzsetparams) /* 32 */
#endif
#ifndef gzread
#define gzread \
	(zlibtclStubsPtr->gzread) /* 33 */
#endif
#ifndef gzwrite
#define gzwrite \
	(zlibtclStubsPtr->gzwrite) /* 34 */
#endif
/* Slot 35 is reserved */
#ifndef gzputs
#define gzputs \
	(zlibtclStubsPtr->gzputs) /* 36 */
#endif
#ifndef gzgets
#define gzgets \
	(zlibtclStubsPtr->gzgets) /* 37 */
#endif
#ifndef gzputc
#define gzputc \
	(zlibtclStubsPtr->gzputc) /* 38 */
#endif
#ifndef gzgetc
#define gzgetc \
	(zlibtclStubsPtr->gzgetc) /* 39 */
#endif
#ifndef gzflush
#define gzflush \
	(zlibtclStubsPtr->gzflush) /* 40 */
#endif
#ifndef gzseek
#define gzseek \
	(zlibtclStubsPtr->gzseek) /* 41 */
#endif
#ifndef gzrewind
#define gzrewind \
	(zlibtclStubsPtr->gzrewind) /* 42 */
#endif
#ifndef gztell
#define gztell \
	(zlibtclStubsPtr->gztell) /* 43 */
#endif
#ifndef gzeof
#define gzeof \
	(zlibtclStubsPtr->gzeof) /* 44 */
#endif
#ifndef gzclose
#define gzclose \
	(zlibtclStubsPtr->gzclose) /* 45 */
#endif
#ifndef gzerror
#define gzerror \
	(zlibtclStubsPtr->gzerror) /* 46 */
#endif

#endif /* defined(USE_ZLIBTCL_STUBS) && !defined(USE_ZLIBTCL_STUB_PROCS) */

/* !END!: Do not edit above this line. */

#endif /* _ZLIBTCLDECLS */
