#include "lex.h"

static char ch;
static int s = 0;


char gchar()
{
	char c = filec[s];
	s++;
	return c;
}
