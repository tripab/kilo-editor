#ifndef SYNTAXHL_H
#define SYNTAXHL_H

#include "common.h"

#define HL_HIGHLIGHT_NUMBERS (1 << 0)
#define HL_HIGHLIGHT_STRINGS (1 << 1)

int is_separator(int c);
void editorUpdateSyntax(erow *row);
int editorSyntaxToColour(int hl);
void editorSelectSyntaxHighlight(void);

#endif
