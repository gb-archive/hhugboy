/*
   hhugboy Game Boy emulator
   copyright 2013-17 taizou

   Based on GEST
   Copyright (C) 2003-2010 TM

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef HHUGBOY_WINDOW_H
#define HHUGBOY_WINDOW_H

#include <windef.h>
#include "../rom.h"

extern HWND hwnd;
extern HWND hwndCtrl;
extern HINSTANCE hinst;

extern wchar_t w_title_text[ROM_FILENAME_SIZE + 16];

extern int sizen_w;
extern int sizen_h;

bool initWindow(HINSTANCE hThisInstance);
void showWindow();
LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
void setWinSize(int width,int height);

#endif //HHUGBOY_WINDOW_H
