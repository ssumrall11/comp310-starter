#ifndef _RFORTH_H_
#define _RFORTH_H_

#include <stdio.h>

typedef struct token_t{
	enum token_type_t;
}

extern token_t* token_allocate();

extern void token_new(token_t* token);

extern void token_number(token_t* token, enum token_type_number);

extern void token_AO(token_t* token, enum token_type_AO);

extern void token_symbol(token_t* token, enum token_type_symbol);

extern void token_word(token_t* token, enum token_type_word);
