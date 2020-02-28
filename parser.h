#ifndef PARSER_H
#define PARSER_H

#define PI 3.14159265;

#include "matrix.h"
#include "ml6.h"

void parse_file ( char * filename,
		  struct matrix * transform,
		  struct matrix * edges,
		  screen s);

#endif
