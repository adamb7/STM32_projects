/*
 * Nokia5110.c
 *
 *  Created on: May 19, 2021
 *      Author: adamb
 */
#include "Nokia5110.h"

enum typeOfWrite{
  COMMAND,                              // the transmission is an LCD command
  DATA                                  // the transmission is data
};
