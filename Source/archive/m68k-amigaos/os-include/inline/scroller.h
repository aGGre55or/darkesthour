/* Automatically generated header (sfdc 1.4)! Do not edit! */

#ifndef _INLINE_SCROLLER_H
#define _INLINE_SCROLLER_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef SCROLLER_BASE_NAME
#define SCROLLER_BASE_NAME ScrollerBase
#endif /* !SCROLLER_BASE_NAME */

#define SCROLLER_GetClass() \
	LP0(0x1e, Class *, SCROLLER_GetClass ,\
	, SCROLLER_BASE_NAME)

#endif /* !_INLINE_SCROLLER_H */
