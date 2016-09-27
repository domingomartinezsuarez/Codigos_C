

#ifndef	_TRIPLETS_H
#define _TRIPLETS_H

#include <stdlib.h>

#define true  1
#define false 0

/* General assertion (predicate) */
#define _assert(predicate) check_assert("Assertion does not hold for",     predicate)

/* Precondition (predicate) */
#define _pre(predicate)    check_assert("Precondition does not hold for",  predicate)

/* Postcondition (predicate) */
#define _post(predicate)   check_assert("Postcondition does not hold for", predicate)

/* Invariant (predicate) */
#define _inv(predicate)    check_assert("Invariant does not hold for",     predicate)

/* Precondition (integer expression) */
#define _bound(intexpr)    check_assert("Bound does not hold for",    (intexpr) >= 0)

#ifdef	NDEBUG

# define check_assert(message, predicate)   ((void)0)

#else /* Not NDEBUG.  */

# define check_assert(message, predicate)  \
    ((void) ((predicate) ? 0 : __check_assert (message, #predicate, __FILE__, __LINE__)))

# define __check_assert(message, predicate, file, line) \
    ((void)printf (">>> At %s:%u:  %s '%s'\n<<< Execution will stop now.\n", file, line, message, predicate), exit(1), 0)

#endif  /* NDEBUG */



#endif
