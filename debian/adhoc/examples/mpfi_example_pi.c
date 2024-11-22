/* /usr/share/doc/libmpfi-doc/examples/mpfi_example_pi.c */

/*
 * Ad hoc source sample for illustrating the use of the library mpfi
 *
 * Build and launch:
 *	$ gcc -o mpfi_example_pi mpfi_example_pi.c -lmpfi -lmpfr -lgmp -lm
 *	$ ./mpfi_example_pi
 *
 * Written for Debian by Jerome Benoit <calculus@rezozer.net> on behalf of the Debian Science Team
 * Copyright: 2016-2024 Jerome Benoit <calculus@rezozer.net>
 * Distributed under the terms and conditions of GPL version 2 or later
 */

#include <stdio.h>

#include <mpfi.h>
#include <mpfi_io.h>

#define ADHOC_DEFAULT_PRECISION 512

int main(void) {
	mpfi_t one;
	mpfi_t four_atan_one;

	mpfr_set_default_prec(ADHOC_DEFAULT_PRECISION);

	mpfi_init(one);
	mpfi_init(four_atan_one);

	mpfi_set_ui(one,1UL);

	mpfi_atan(four_atan_one,one);
	mpfi_mul_ui(four_atan_one,four_atan_one,4UL);

	fprintf(stdout,"4 atan(1): ");
	mpfi_out_str(stdout,10,0,four_atan_one);
	fprintf(stdout,"\n");


	mpfi_clear(four_atan_one);
	mpfi_clear(one);

	return 0; }
