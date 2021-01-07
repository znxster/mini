AC_INIT([mini], [1], [znxster@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AC_CONFIG_SRCDIR([src/getpwd.c])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
#AC_CHECK_HEADERS([stdio.h])
#AC_CHECK_HEADERS([stdlib.h])
#AC_CHECK_HEADERS([sys/types.h])
AC_CHECK_HEADERS([pwd.h])
AC_CHECK_HEADERS([string.h])
AC_CHECK_HEADERS([libgen.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
#AC_FUNC_MALLOC
#AC_CHECK_FUNCS([strchr])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile
	src/Makefile
	tests/Makefile])
AC_OUTPUT
