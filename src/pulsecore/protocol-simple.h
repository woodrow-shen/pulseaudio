#ifndef fooprotocolsimplehfoo
#define fooprotocolsimplehfoo

/* $Id: protocol-simple.h 1033 2006-06-19 21:53:48Z lennart $ */

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

#include <pulsecore/socket-server.h>
#include <pulsecore/module.h>
#include <pulsecore/core.h>
#include <pulsecore/modargs.h>

typedef struct pa_protocol_simple pa_protocol_simple;

pa_protocol_simple* pa_protocol_simple_new(pa_core *core, pa_socket_server *server, pa_module *m, pa_modargs *ma);
void pa_protocol_simple_free(pa_protocol_simple *n);

#endif
