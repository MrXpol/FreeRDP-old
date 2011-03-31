/*
   FreeRDP: A Remote Desktop Protocol client.
   XKB-based Keyboard Mapping to Microsoft Keyboard System

   Copyright 2009 Marc-Andre Moreau <marcandre.moreau@gmail.com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __LAYOUTS_XKB_H
#define __LAYOUTS_XKB_H

typedef unsigned char KeycodeToVkcode[256];

typedef struct
{
	unsigned char extended;
	unsigned char keycode;
} RdpKeycodeRec, RdpKeycodes[256];

unsigned int
detect_keyboard_layout_from_xkb();

unsigned int
detect_keyboard_type_from_xkb(char* xkbfile, int length);

void
load_keyboard_map(KeycodeToVkcode keycodeToVkcode, char *xkbfile);

#endif