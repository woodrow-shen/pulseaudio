#ifndef fooiolinehfoo
#define fooiolinehfoo

/* $Id: ioline.h 1033 2006-06-19 21:53:48Z lennart $ */

/***
  This file is part of PulseAudio.
 
  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2 of the License,
  or (at your option) any later version.
 
  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <pulsecore/iochannel.h>
#include <pulsecore/core-util.h>

/* An ioline wraps an iochannel for line based communication. A
 * callback function is called whenever a new line has been recieved
 * from the client */

typedef struct pa_ioline pa_ioline;

pa_ioline* pa_ioline_new(pa_iochannel *io);
void pa_ioline_unref(pa_ioline *l);
pa_ioline* pa_ioline_ref(pa_ioline *l);
void pa_ioline_close(pa_ioline *l);

/* Write a string to the channel */
void pa_ioline_puts(pa_ioline *s, const char *c);

/* Write a string to the channel */
void pa_ioline_printf(pa_ioline *s, const char *format, ...) PA_GCC_PRINTF_ATTR(2,3);

/* Set the callback function that is called for every recieved line */
void pa_ioline_set_callback(pa_ioline*io, void (*callback)(pa_ioline*io, const char *s, void *userdata), void *userdata);

/* Make sure to close the ioline object as soon as the send buffer is emptied */
void pa_ioline_defer_close(pa_ioline *io);

#endif
