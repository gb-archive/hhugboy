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

#ifndef DIALOGS_H
#define DIALOGS_H

bool DoFileOpen(HWND hwnd,int gb_number);
BOOL CALLBACK NetplayProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
BOOL CALLBACK FolderProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
BOOL CALLBACK ChtProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
VOID CALLBACK TProc(HWND hwnd,UINT uMsg,UINT idEvent,DWORD dwTime);
BOOL CALLBACK CtrlProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
BOOL CALLBACK MultiCtrlProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
BOOL CALLBACK SensorProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam); 
BOOL CALLBACK JoyCtrlProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

#endif
