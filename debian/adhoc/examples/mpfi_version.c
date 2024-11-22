/* /usr/share/doc/libmpfi-doc/examples/mpfi_version.c */

/*
 * Ad hoc source sample for illustrating the use of the library mpfi
 *
 * Build and launch:
 *	$ gcc -o mpfi_version mpfi_version.c -lmpfi -lmpfr -lgmp -lm
 *	$ ./mpfi_version
 *
 * Written for Debian by Jerome Benoit <calculus@rezozer.net> on behalf of the Debian Science Team
 * Copyright: 2016-2024 Jerome Benoit <calculus@rezozer.net>
 * Distributed under the terms and conditions of GPL version 2 or later
 */

#include <stdio.h>
#include <string.h>

#include <mpfi.h>

int main(void) {
	const char *adhoc_mpfi_lib_version=mpfi_get_version();
	int status=0;

	if (strcmp(MPFI_VERSION_STRING,adhoc_mpfi_lib_version)) {
		fprintf(stderr,
				"header and library version mismatch: " MPFI_VERSION_STRING " vs %s\n",
			adhoc_mpfi_lib_version
			);
		status=1;
		}
#if 1
	else {
		fprintf(stdout,
				"header and library version match: " MPFI_VERSION_STRING "\n"
			);
		}
#endif

	return (status); }
