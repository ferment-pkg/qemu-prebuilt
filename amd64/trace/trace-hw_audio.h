/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_AUDIO_GENERATED_TRACERS_H
#define TRACE_HW_AUDIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_CS4231_MEM_READL_DREG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_READL_REG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_WRITEL_REG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_WRITEL_DREG_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_RUNNING_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_FORMAT_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_ADJUST_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_OVERRUN_EVENT;
extern uint16_t _TRACE_CS4231_MEM_READL_DREG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_READL_REG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_WRITEL_REG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_WRITEL_DREG_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_RUNNING_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_FORMAT_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_ADJUST_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_OVERRUN_DSTATE;
#define TRACE_CS4231_MEM_READL_DREG_ENABLED 1
#define TRACE_CS4231_MEM_READL_REG_ENABLED 1
#define TRACE_CS4231_MEM_WRITEL_REG_ENABLED 1
#define TRACE_CS4231_MEM_WRITEL_DREG_ENABLED 1
#define TRACE_HDA_AUDIO_RUNNING_ENABLED 1
#define TRACE_HDA_AUDIO_FORMAT_ENABLED 1
#define TRACE_HDA_AUDIO_ADJUST_ENABLED 1
#define TRACE_HDA_AUDIO_OVERRUN_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_CS4231_MEM_READL_DREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_READL_DREG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_READL_DREG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:cs4231_mem_readl_dreg " "read dreg %d: 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reg, ret);
#line 52 "trace/trace-hw_audio.h"
        } else {
#line 4 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("cs4231_mem_readl_dreg " "read dreg %d: 0x%02x" "\n", reg, ret);
#line 56 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret)
{
    if (true) {
        _nocheck__trace_cs4231_mem_readl_dreg(reg, ret);
    }
}

#define TRACE_CS4231_MEM_READL_REG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_READL_REG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_READL_REG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:cs4231_mem_readl_reg " "read reg %d: 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reg, ret);
#line 83 "trace/trace-hw_audio.h"
        } else {
#line 5 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("cs4231_mem_readl_reg " "read reg %d: 0x%08x" "\n", reg, ret);
#line 87 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret)
{
    if (true) {
        _nocheck__trace_cs4231_mem_readl_reg(reg, ret);
    }
}

#define TRACE_CS4231_MEM_WRITEL_REG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_WRITEL_REG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_WRITEL_REG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:cs4231_mem_writel_reg " "write reg %d: 0x%08x -> 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reg, old, val);
#line 114 "trace/trace-hw_audio.h"
        } else {
#line 6 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("cs4231_mem_writel_reg " "write reg %d: 0x%08x -> 0x%08x" "\n", reg, old, val);
#line 118 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (true) {
        _nocheck__trace_cs4231_mem_writel_reg(reg, old, val);
    }
}

#define TRACE_CS4231_MEM_WRITEL_DREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_WRITEL_DREG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_WRITEL_DREG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:cs4231_mem_writel_dreg " "write dreg %d: 0x%02x -> 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reg, old, val);
#line 145 "trace/trace-hw_audio.h"
        } else {
#line 7 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("cs4231_mem_writel_dreg " "write dreg %d: 0x%02x -> 0x%02x" "\n", reg, old, val);
#line 149 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (true) {
        _nocheck__trace_cs4231_mem_writel_dreg(reg, old, val);
    }
}

#define TRACE_HDA_AUDIO_RUNNING_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_RUNNING) || \
    false)

static inline void _nocheck__trace_hda_audio_running(const char * stream, int nr, bool running)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_RUNNING) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:hda_audio_running " "st %s, nr %d, run %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , stream, nr, running);
#line 176 "trace/trace-hw_audio.h"
        } else {
#line 10 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("hda_audio_running " "st %s, nr %d, run %d" "\n", stream, nr, running);
#line 180 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_hda_audio_running(const char * stream, int nr, bool running)
{
    if (true) {
        _nocheck__trace_hda_audio_running(stream, nr, running);
    }
}

#define TRACE_HDA_AUDIO_FORMAT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_FORMAT) || \
    false)

static inline void _nocheck__trace_hda_audio_format(const char * stream, int chan, const char * fmt, int freq)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_FORMAT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:hda_audio_format " "st %s, %d x %s @ %d Hz" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , stream, chan, fmt, freq);
#line 207 "trace/trace-hw_audio.h"
        } else {
#line 11 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("hda_audio_format " "st %s, %d x %s @ %d Hz" "\n", stream, chan, fmt, freq);
#line 211 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_hda_audio_format(const char * stream, int chan, const char * fmt, int freq)
{
    if (true) {
        _nocheck__trace_hda_audio_format(stream, chan, fmt, freq);
    }
}

#define TRACE_HDA_AUDIO_ADJUST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_ADJUST) || \
    false)

static inline void _nocheck__trace_hda_audio_adjust(const char * stream, int pos)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_ADJUST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:hda_audio_adjust " "st %s, pos %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , stream, pos);
#line 238 "trace/trace-hw_audio.h"
        } else {
#line 12 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("hda_audio_adjust " "st %s, pos %d" "\n", stream, pos);
#line 242 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_hda_audio_adjust(const char * stream, int pos)
{
    if (true) {
        _nocheck__trace_hda_audio_adjust(stream, pos);
    }
}

#define TRACE_HDA_AUDIO_OVERRUN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_OVERRUN) || \
    false)

static inline void _nocheck__trace_hda_audio_overrun(const char * stream)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_OVERRUN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("%d@%zu.%06zu:hda_audio_overrun " "st %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , stream);
#line 269 "trace/trace-hw_audio.h"
        } else {
#line 13 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/audio/trace-events"
            qemu_log("hda_audio_overrun " "st %s" "\n", stream);
#line 273 "trace/trace-hw_audio.h"
        }
    }
}

static inline void trace_hda_audio_overrun(const char * stream)
{
    if (true) {
        _nocheck__trace_hda_audio_overrun(stream);
    }
}
#endif /* TRACE_HW_AUDIO_GENERATED_TRACERS_H */
