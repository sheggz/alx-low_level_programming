#ifndef GUARD
#define GUARD
#include <stdlib.h>
#define ABS(x) {				\
			if ((x) < 0)		\
				-(x);		\
			else 			\
				(x);		\
		}
#endif
