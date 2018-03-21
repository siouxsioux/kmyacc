/*
 * Configuration for kmyacc
 *
 * Copyright (C) 1993, 2005  MORI Koichiro
 */

#ifndef HAS_STDLIB
# define HAS_STDLIB 1
#endif /* HAS_STDLIB */

#ifndef PARSERBASE
//# define PARSERBASE "/usr/local/lib/kmyacc"
# ifndef _MSC_VER
#  define PARSERBASE "/usr/local/lib/kmyacc"
# else
#  define PARSERBASE "c:/usr/local/lib/kmyacc"
# endif
#endif /* PARSERBASE */

#define MAXTERM 512		/* Maximum number of terminals */
#define MAXNONT 512		/* Maximum number of nonterminals */
#define MAXPROD 2000		/* Maximum number of productions */

#if _MSC_VER
typedef unsigned int uint;
#endif
