/*
   unGEST Game Boy emulator
   copyright 2013 taizou

   Based on GEST
   Copyright (C) 2003-2010 TM

   This file is part of unGEST.

   unGEST is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   unGEST is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with unGEST.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef TYPES_H
#define TYPES_H
#include <time.h>

typedef unsigned char byte;
typedef union
{
   unsigned short W;
   struct
   {
      byte l;
      byte h;
   } B;
} word;

//typedef long int time_t;

struct rtc_clock
{
   int s; // seconds counter
   int m; // minutes counter
   int h; // hour counter
   int d; // day counter
   int control; // carry bit, halt flag
   int cur_register;
   time_t last_time;
};

#endif
