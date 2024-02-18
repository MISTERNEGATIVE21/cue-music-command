#ifndef TERM_H
#define TERM_H
#ifndef __USE_POSIX
#define __USE_POSIX
#endif

#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/select.h>
#include <pwd.h>
#include <sys/param.h>
#include <fcntl.h>
#include <poll.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>

#ifdef __GNU__
# define _BSD_SOURCE
#endif

extern volatile sig_atomic_t resizeFlag;

void setTextColor(int color);

void setTextColorRGB(int r, int g, int b);

void getTermSize(int *width, int *height);

int getIndentation(int terminalWidth);

void setNonblockingMode(void);

void restoreTerminalMode(void);

void setDefaultTextColor(void);

int isInputAvailable(void);

void resetConsole(void);

void saveCursorPosition(void);

void restoreCursorPosition(void);

void hideCursor(void);

void showCursor(void);

void clearRestOfScreen(void);

void enableScrolling(void);

void handleResize(int sig);

void resetResizeFlag(int sig);

void initResize(void);

void disableInputBuffering(void);

void enableInputBuffering(void);

void cursorJump(int numRows);

void cursorJumpDown(int numRows);

void clearScreen(void);

int readInputSequence(char *seq, size_t seqSize);

#endif
