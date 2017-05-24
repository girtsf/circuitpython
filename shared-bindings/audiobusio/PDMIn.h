/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __MICROPY_INCLUDED_SHARED_BINDINGS_AUDIO_BUS_IO_AUDIOOUT_H__
#define __MICROPY_INCLUDED_SHARED_BINDINGS_AUDIO_BUS_IO_AUDIOOUT_H__

#include "common-hal/audio_bus_io/AudioOut.h"
#include "common-hal/microcontroller/Pin.h"
#include "extmod/vfs_fat_file.h"

extern const mp_obj_type_t audio_bus_io_pdmin_type;

void common_hal_audio_bus_io_pdmin_construct(audio_bus_io_pdmin_obj_t* self, const mcu_pin_obj_t* pin);
void common_hal_audio_bus_io_pdmin_deinit(audio_bus_io_pdmin_obj_t* self);
void common_hal_audio_bus_io_pdmin_record_to_buffer(audio_bus_io_pdmin_obj_t* self, uint8_t* buffer, uint8_t length);
// TODO(tannewt): Add record to file

#endif // __MICROPY_INCLUDED_SHARED_BINDINGS_AUDIO_BUS_IO_AUDIOOUT_H__
