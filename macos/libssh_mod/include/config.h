/* Name of package */
#define PACKAGE "libssh"

/* Version number of package */
#define VERSION "0.8.7"

/* #undef LOCALEDIR */
#define DATADIR "/usr/local/share/libssh"
#define LIBDIR "/usr/local/lib"
#define PLUGINDIR "/usr/local/lib/libssh-4"
#define SYSCONFDIR "/usr/local/etc"
#define BINARYDIR "/Users/test/libssh-0.8.7/build"
#define SOURCEDIR "/Users/test/libssh-0.8.7"

/************************** HEADER FILES *************************/

/* Define to 1 if you have the <argp.h> header file. */
/* #undef HAVE_ARGP_H */

/* Define to 1 if you have the <aprpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the <util.h> header file. */
#define HAVE_UTIL_H 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
/* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <openssl/aes.h> header file. */
#define HAVE_OPENSSL_AES_H 1

/* Define to 1 if you have the <wspiapi.h> header file. */
/* #undef HAVE_WSPIAPI_H */

/* Define to 1 if you have the <openssl/blowfish.h> header file. */
#define HAVE_OPENSSL_BLOWFISH_H 1

/* Define to 1 if you have the <openssl/des.h> header file. */
#define HAVE_OPENSSL_DES_H 1

/* Define to 1 if you have the <openssl/ecdh.h> header file. */
#define HAVE_OPENSSL_ECDH_H 1

/* Define to 1 if you have the <openssl/ec.h> header file. */
#define HAVE_OPENSSL_EC_H 1

/* Define to 1 if you have the <openssl/ecdsa.h> header file. */
#define HAVE_OPENSSL_ECDSA_H 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have eliptic curve cryptography in openssl */
#define HAVE_OPENSSL_ECC 1

/* Define to 1 if you have eliptic curve cryptography in gcrypt */
/* #undef HAVE_GCRYPT_ECC */

/* Define to 1 if you have eliptic curve cryptography */
#define HAVE_ECC 1

/* Define to 1 if you have DSA */
#define HAVE_DSA 1

/* Define to 1 if you have gl_flags as a glob_t sturct member */
#define HAVE_GLOB_GL_FLAGS_MEMBER 1

/*************************** FUNCTIONS ***************************/

/* Define to 1 if you have the `EVP_aes128_ctr' function. */
#define HAVE_OPENSSL_EVP_AES_CTR 1

/* Define to 1 if you have the `EVP_aes128_cbc' function. */
#define HAVE_OPENSSL_EVP_AES_CBC 1

/* Define to 1 if you have the `CRYPTO_THREADID_set_callback' function. */
#define HAVE_OPENSSL_CRYPTO_THREADID_SET_CALLBACK 1

/* Define to 1 if you have the `CRYPTO_ctr128_encrypt' function. */
#define HAVE_OPENSSL_CRYPTO_CTR128_ENCRYPT 1

/* Define to 1 if you have the `EVP_CIPHER_CTX_new' function. */
#define HAVE_OPENSSL_EVP_CIPHER_CTX_NEW 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `_snprintf' function. */
/* #undef HAVE__SNPRINTF */

/* Define to 1 if you have the `_snprintf_s' function. */
/* #undef HAVE__SNPRINTF_S */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `_vsnprintf' function. */
/* #undef HAVE__VSNPRINTF */

/* Define to 1 if you have the `_vsnprintf_s' function. */
/* #undef HAVE__VSNPRINTF_S */

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `strncpy' function. */
#define HAVE_STRNCPY 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `ntohll' function. */
#define HAVE_NTOHLL 1

/* Define to 1 if you have the `htonll' function. */
#define HAVE_HTONLL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the `__strtoull' function. */
/* #undef HAVE___STRTOULL */

/* Define to 1 if you have the `_strtoui64' function. */
/* #undef HAVE__STRTOUI64 */

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* Define to 1 if you have the `explicit_bzero' function. */
/* #undef HAVE_EXPLICIT_BZERO */

/* Define to 1 if you have the `memset_s' function. */
#define HAVE_MEMSET_S 1

/* Define to 1 if you have the `SecureZeroMemory' function. */
/* #undef HAVE_SECURE_ZERO_MEMORY */

/*************************** LIBRARIES ***************************/

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
/* #undef HAVE_LIBGCRYPT */

/* Define to 1 if you have the 'mbedTLS' library (-lmbedtls). */
/* #undef HAVE_LIBMBEDCRYPTO */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_PTHREAD 1

/**************************** OPTIONS ****************************/

#define HAVE_GCC_THREAD_LOCAL_STORAGE 1
/* #undef HAVE_MSC_THREAD_LOCAL_STORAGE */

/* #undef HAVE_FALLTHROUGH_ATTRIBUTE */

#define HAVE_CONSTRUCTOR_ATTRIBUTE 1
#define HAVE_DESTRUCTOR_ATTRIBUTE 1

#define HAVE_GCC_VOLATILE_MEMORY_PROTECTION 1
#define HAVE_GCC_NARG_MACRO 1

#define HAVE_COMPILER__FUNC__ 1
#define HAVE_COMPILER__FUNCTION__ 1

#define HAVE_GCC_BOUNDED_ATTRIBUTE 1

/* Define to 1 if you want to enable GSSAPI */
/* #undef WITH_GSSAPI */

/* Define to 1 if you want to enable ZLIB */
/* #undef WITH_ZLIB */

/* Define to 1 if you want to enable SFTP */
/* #undef WITH_SFTP */

/* Define to 1 if you want to enable server support */
#define WITH_SERVER 1

/* Define to 1 if you want to enable debug output for crypto functions */
/* #undef DEBUG_CRYPTO */

/* Define to 1 if you want to enable debug output for packet functions */
/* #undef DEBUG_PACKET */

/* Define to 1 if you want to enable pcap output support (experimental) */
/* #undef WITH_PCAP */

/* Define to 1 if you want to enable calltrace debug output */
#define DEBUG_CALLTRACE 1

/* Define to 1 if you want to enable NaCl support */
/* #undef WITH_NACL */

/*************************** ENDIAN *****************************/

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
/* #undef WORDS_BIGENDIAN */
