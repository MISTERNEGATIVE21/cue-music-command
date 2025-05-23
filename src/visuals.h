

#include <float.h>
#include <fftw3.h>
#include <math.h>
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include "sound.h"
#include "term.h"
#include "utils.h"
#include "common_ui.h"

#ifndef PIXELDATA_STRUCT
#define PIXELDATA_STRUCT
    typedef struct
    {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } PixelData;
#endif

void initVisuals(void);

void freeVisuals(void);

void drawSpectrumVisualizer(AppState *state, int indentation);
