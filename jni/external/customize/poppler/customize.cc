#include <locale.h>

static struct lconv default_lconv = {"."};

struct lconv *localeconv (void)
{
	return &default_lconv;
}
