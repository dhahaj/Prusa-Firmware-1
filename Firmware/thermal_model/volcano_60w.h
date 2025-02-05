#pragma once

#define THERMAL_MODEL_VOLCANO_60W_VER 1      // model parameters version

#define THERMAL_MODEL_VOLCANO_60W_P 60.      // heater power (W)
#define THERMAL_MODEL_VOLCANO_60W_U 0.       // linear temperature coefficient (W/K/power)
#define THERMAL_MODEL_VOLCANO_60W_V 1.       // linear temperature intercept (W/power)

#define THERMAL_MODEL_VOLCANO_60W_C 12.1     // initial guess for heatblock capacitance (J/K)
#define THERMAL_MODEL_VOLCANO_60W_R 20.5     // initial guess for heatblock resistance (K/W)

#define THERMAL_MODEL_VOLCANO_60W_fS 0.065   // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_VOLCANO_60W_LAG 2100   // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_VOLCANO_60W_W 0.65      // Default warning threshold (K/s)
#define THERMAL_MODEL_VOLCANO_60W_E 1.74     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_VOLCANO_60W_Rv {THERMAL_MODEL_VOLCANO_60W_R, 18.4, 16.7, 15.2, 14.1, 13.3, 12.7, 12.1, 11.7, 11.3, 11., 10.8, 10.6, 10.4, 10.2, 10.1}
