#ifndef __EXTENSION_LIB_H__
#define __EXTENSION_LIB_H__

#include <time.h>

#include "my_input_lib.h"
#include "generic_lib.h"
#include "file_handle.h"
#include "symbol_table.h"

#define MAXSIZE 1000

int solve();

/* Compare functions */
Entry makePhoneBook(void *number, void *name);
int comparePhone(void *a, void *b);

#endif