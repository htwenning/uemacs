

#ifndef EM_DEF_H
#define EM_DEF_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<stdarg.h>
#include "estruct.h"
#include "edef.h"
#include "efunc.h"
#include "line.h"
typedef unsigned char uchar;




#define FALSE 0
#define TRUE 1
#define ABORT 2

#define KRANDOM 0x0080		/* A "no key" code.             */


int undo (int f, int n);


#endif //EM_DEF_H
