/* Generated by ./xlat/gen.sh from ./xlat/s390_sthyi_function_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(STHYI_FC_CP_IFL_CAP) || (defined(HAVE_DECL_STHYI_FC_CP_IFL_CAP) && HAVE_DECL_STHYI_FC_CP_IFL_CAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STHYI_FC_CP_IFL_CAP) == (0), "STHYI_FC_CP_IFL_CAP != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STHYI_FC_CP_IFL_CAP 0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat s390_sthyi_function_codes in mpers mode

# else

static
const struct xlat s390_sthyi_function_codes[] = {
 XLAT(STHYI_FC_CP_IFL_CAP),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
