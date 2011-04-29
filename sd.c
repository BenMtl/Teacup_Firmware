
/** \file Coordinating reading and writing of SD cards.
*/

#include "sd.h"

#ifdef SD

// See sd.h for flag values.
uint8_t sdflags;

uint8_t sdbuffer[32];
uint8_t sdbufptr;
FATFS sdfile;


void sd_init(void) {

  sdflags = 0;

  WRITE(SD_CARD_SELECT_PIN, 1);
  SET_OUTPUT(SD_CARD_SELECT_PIN);
}

#endif /* SD */
