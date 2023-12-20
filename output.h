#ifndef OUTPUT_H
#define OUTPUT_H

/*** append buffer ***/

struct abuf {
    char *b;
    int len;
};

void editorScroll(void);
void editorDrawRows(struct abuf *ab);
void editorDrawStatusBar(struct abuf *ab);
void editorDrawMessageBar(struct abuf *ab);
void editorRefreshScreen(void);
void editorSetStatusMessage(const char *fmt, ...);

#endif
