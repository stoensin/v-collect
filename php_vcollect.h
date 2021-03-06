/**********************************************************\
|                                                          |
|                       vcollec                            |
|                                                          |
| Official WebSite: http://www.vikin.cc                    |
|                                                          |
\**********************************************************/

/**********************************************************\
 *                                                        *
 * php_vcollect.h                                         *
 *                                                        *
 *                                                        *
 * LastModified: Dec 15, 2016                             *
 * Author: Wang Jiexin <vikindev@outlook.com>             *
 *                                                        *
\**********************************************************/

#ifndef PHP_VCOLLECT_H
#define PHP_VCOLLECT_H

extern zend_module_entry vcollect_module_entry;
#define phpext_vcollect_ptr &vcollect_module_entry

#define PHP_VCOLLECT_VERSION "0.1.0"

#ifdef PHP_WIN32
#	define PHP_VCOLLECT_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_VCOLLECT_API __attribute__ ((visibility("default")))
#else
#	define PHP_VCOLLECT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#define VCOLLECT_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(vcollect, v)

#if defined(ZTS) && defined(COMPILE_DL_VCOLLECT)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
