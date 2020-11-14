#include "license.txt" 
#include "config.h"

const char* radioname[4] = { "NORADIO","BBRF103","HF103", "RX888" };

int Xfreq = 10000;
char strversion[] = "ExtIO_SDDC.dll v1.01";
double gdFreqCorr_ppm = FREQCORRECTION;
double adcfixedfreq = ADC_FREQ;
double gdGainCorr_dB = GAIN_ADJ;            // in dB
bool saveADCsamplesflag = false;
bool run = false;
int transferSize = 131072;
radiotype radio = NORADIO;
