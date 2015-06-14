
/** \file Coordinating reading and writing of SD cards.
*/

#ifndef _SD_H
#define _SD_H

#include "config_wrapper.h"

#ifdef SD_CARD_SELECT_PIN
#define SD

#include "pff.h"

// Feature set of Petit FatFs is currently defined early in pff_conf.h.

extern FATFS sdfile;


void sd_init(void);

#endif /* SD_CARD_SELECT_PIN */

#endif /* _SD_H */
