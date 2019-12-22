/* Settings.h Описывает структуру настроек */

#include <stdbool.h>
#include "../TwoDimensions/TwoDimensions.h"

typedef struct {
    TwoDimensions screenResolution;

    int amountSegments;
    int minRadius, maxRadius;

    int delay;
    double debugDelayRatio;

    double R0, R0Ratio, G;

    int circlesAmount;

    bool isDebug;
} Settings;