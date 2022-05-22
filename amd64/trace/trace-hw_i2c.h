/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_I2C_GENERATED_TRACERS_H
#define TRACE_HW_I2C_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_I2C_EVENT_EVENT;
extern TraceEvent _TRACE_I2C_SEND_EVENT;
extern TraceEvent _TRACE_I2C_RECV_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_CMD_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_READ_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_WRITE_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_SEND_EVENT;
extern TraceEvent _TRACE_ASPEED_I2C_BUS_RECV_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_READ_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_WRITE_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_START_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_SEND_ADDRESS_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_SEND_BYTE_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_RECV_BYTE_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_STOP_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_NACK_EVENT;
extern TraceEvent _TRACE_NPCM7XX_SMBUS_RECV_FIFO_EVENT;
extern TraceEvent _TRACE_PCA954X_WRITE_BYTES_EVENT;
extern TraceEvent _TRACE_PCA954X_READ_DATA_EVENT;
extern uint16_t _TRACE_I2C_EVENT_DSTATE;
extern uint16_t _TRACE_I2C_SEND_DSTATE;
extern uint16_t _TRACE_I2C_RECV_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_CMD_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_READ_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_WRITE_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_SEND_DSTATE;
extern uint16_t _TRACE_ASPEED_I2C_BUS_RECV_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_READ_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_WRITE_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_START_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_SEND_ADDRESS_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_SEND_BYTE_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_RECV_BYTE_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_STOP_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_NACK_DSTATE;
extern uint16_t _TRACE_NPCM7XX_SMBUS_RECV_FIFO_DSTATE;
extern uint16_t _TRACE_PCA954X_WRITE_BYTES_DSTATE;
extern uint16_t _TRACE_PCA954X_READ_DATA_DSTATE;
#define TRACE_I2C_EVENT_ENABLED 1
#define TRACE_I2C_SEND_ENABLED 1
#define TRACE_I2C_RECV_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_CMD_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_READ_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_WRITE_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_SEND_ENABLED 1
#define TRACE_ASPEED_I2C_BUS_RECV_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_READ_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_WRITE_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_START_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_SEND_ADDRESS_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_SEND_BYTE_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_RECV_BYTE_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_STOP_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_NACK_ENABLED 1
#define TRACE_NPCM7XX_SMBUS_RECV_FIFO_ENABLED 1
#define TRACE_PCA954X_WRITE_BYTES_ENABLED 1
#define TRACE_PCA954X_READ_DATA_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_I2C_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_I2C_EVENT) || \
    false)

static inline void _nocheck__trace_i2c_event(const char * event, uint8_t address)
{
    if (trace_event_get_state(TRACE_I2C_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:i2c_event " "%s(addr:0x%02x)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , event, address);
#line 88 "trace/trace-hw_i2c.h"
        } else {
#line 5 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("i2c_event " "%s(addr:0x%02x)" "\n", event, address);
#line 92 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_i2c_event(const char * event, uint8_t address)
{
    if (true) {
        _nocheck__trace_i2c_event(event, address);
    }
}

#define TRACE_I2C_SEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_I2C_SEND) || \
    false)

static inline void _nocheck__trace_i2c_send(uint8_t address, uint8_t data)
{
    if (trace_event_get_state(TRACE_I2C_SEND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:i2c_send " "send(addr:0x%02x) data:0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, data);
#line 119 "trace/trace-hw_i2c.h"
        } else {
#line 6 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("i2c_send " "send(addr:0x%02x) data:0x%02x" "\n", address, data);
#line 123 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_i2c_send(uint8_t address, uint8_t data)
{
    if (true) {
        _nocheck__trace_i2c_send(address, data);
    }
}

#define TRACE_I2C_RECV_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_I2C_RECV) || \
    false)

static inline void _nocheck__trace_i2c_recv(uint8_t address, uint8_t data)
{
    if (trace_event_get_state(TRACE_I2C_RECV) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:i2c_recv " "recv(addr:0x%02x) data:0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, data);
#line 150 "trace/trace-hw_i2c.h"
        } else {
#line 7 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("i2c_recv " "recv(addr:0x%02x) data:0x%02x" "\n", address, data);
#line 154 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_i2c_recv(uint8_t address, uint8_t data)
{
    if (true) {
        _nocheck__trace_i2c_recv(address, data);
    }
}

#define TRACE_ASPEED_I2C_BUS_CMD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_CMD) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_cmd(uint32_t cmd, const char * cmd_flags, uint32_t count, uint32_t intr_status)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_CMD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_cmd " "handling cmd=0x%x %s count=%d intr=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cmd, cmd_flags, count, intr_status);
#line 181 "trace/trace-hw_i2c.h"
        } else {
#line 11 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_cmd " "handling cmd=0x%x %s count=%d intr=0x%x" "\n", cmd, cmd_flags, count, intr_status);
#line 185 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_cmd(uint32_t cmd, const char * cmd_flags, uint32_t count, uint32_t intr_status)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_cmd(cmd, cmd_flags, count, intr_status);
    }
}

#define TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_raise_interrupt(uint32_t intr_status, const char * str1, const char * str2, const char * str3, const char * str4, const char * str5)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_RAISE_INTERRUPT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_raise_interrupt " "handled intr=0x%x %s%s%s%s%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , intr_status, str1, str2, str3, str4, str5);
#line 212 "trace/trace-hw_i2c.h"
        } else {
#line 12 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_raise_interrupt " "handled intr=0x%x %s%s%s%s%s" "\n", intr_status, str1, str2, str3, str4, str5);
#line 216 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_raise_interrupt(uint32_t intr_status, const char * str1, const char * str2, const char * str3, const char * str4, const char * str5)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_raise_interrupt(intr_status, str1, str2, str3, str4, str5);
    }
}

#define TRACE_ASPEED_I2C_BUS_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_READ) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_read(uint32_t busid, uint64_t offset, unsigned size, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_read " "bus[%d]: To 0x%" PRIx64 " of size %u: 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , busid, offset, size, value);
#line 243 "trace/trace-hw_i2c.h"
        } else {
#line 13 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_read " "bus[%d]: To 0x%" PRIx64 " of size %u: 0x%" PRIx64 "\n", busid, offset, size, value);
#line 247 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_read(uint32_t busid, uint64_t offset, unsigned size, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_read(busid, offset, size, value);
    }
}

#define TRACE_ASPEED_I2C_BUS_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_WRITE) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_write(uint32_t busid, uint64_t offset, unsigned size, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_write " "bus[%d]: To 0x%" PRIx64 " of size %u: 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , busid, offset, size, value);
#line 274 "trace/trace-hw_i2c.h"
        } else {
#line 14 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_write " "bus[%d]: To 0x%" PRIx64 " of size %u: 0x%" PRIx64 "\n", busid, offset, size, value);
#line 278 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_write(uint32_t busid, uint64_t offset, unsigned size, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_write(busid, offset, size, value);
    }
}

#define TRACE_ASPEED_I2C_BUS_SEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_SEND) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_send(const char * mode, int i, int count, uint8_t byte)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_SEND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_send " "%s send %d/%d 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mode, i, count, byte);
#line 305 "trace/trace-hw_i2c.h"
        } else {
#line 15 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_send " "%s send %d/%d 0x%02x" "\n", mode, i, count, byte);
#line 309 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_send(const char * mode, int i, int count, uint8_t byte)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_send(mode, i, count, byte);
    }
}

#define TRACE_ASPEED_I2C_BUS_RECV_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_I2C_BUS_RECV) || \
    false)

static inline void _nocheck__trace_aspeed_i2c_bus_recv(const char * mode, int i, int count, uint8_t byte)
{
    if (trace_event_get_state(TRACE_ASPEED_I2C_BUS_RECV) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_i2c_bus_recv " "%s recv %d/%d 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mode, i, count, byte);
#line 336 "trace/trace-hw_i2c.h"
        } else {
#line 16 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("aspeed_i2c_bus_recv " "%s recv %d/%d 0x%02x" "\n", mode, i, count, byte);
#line 340 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_aspeed_i2c_bus_recv(const char * mode, int i, int count, uint8_t byte)
{
    if (true) {
        _nocheck__trace_aspeed_i2c_bus_recv(mode, i, count, byte);
    }
}

#define TRACE_NPCM7XX_SMBUS_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_READ) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_read(const char * id, uint64_t offset, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_read " "%s offset: 0x%04" PRIx64 " value: 0x%02" PRIx64 " size: %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, value, size);
#line 367 "trace/trace-hw_i2c.h"
        } else {
#line 20 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_read " "%s offset: 0x%04" PRIx64 " value: 0x%02" PRIx64 " size: %u" "\n", id, offset, value, size);
#line 371 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_read(const char * id, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_read(id, offset, value, size);
    }
}

#define TRACE_NPCM7XX_SMBUS_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_WRITE) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_write(const char * id, uint64_t offset, uint64_t value, unsigned size)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_write " "%s offset: 0x%04" PRIx64 " value: 0x%02" PRIx64 " size: %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, offset, value, size);
#line 398 "trace/trace-hw_i2c.h"
        } else {
#line 21 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_write " "%s offset: 0x%04" PRIx64 " value: 0x%02" PRIx64 " size: %u" "\n", id, offset, value, size);
#line 402 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_write(const char * id, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_write(id, offset, value, size);
    }
}

#define TRACE_NPCM7XX_SMBUS_START_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_START) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_start(const char * id, int success)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_START) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_start " "%s starting, success: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, success);
#line 429 "trace/trace-hw_i2c.h"
        } else {
#line 22 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_start " "%s starting, success: %d" "\n", id, success);
#line 433 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_start(const char * id, int success)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_start(id, success);
    }
}

#define TRACE_NPCM7XX_SMBUS_SEND_ADDRESS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_SEND_ADDRESS) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_send_address(const char * id, uint8_t addr, int recv, int success)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_SEND_ADDRESS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_send_address " "%s sending address: 0x%02x, recv: %d, success: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, addr, recv, success);
#line 460 "trace/trace-hw_i2c.h"
        } else {
#line 23 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_send_address " "%s sending address: 0x%02x, recv: %d, success: %d" "\n", id, addr, recv, success);
#line 464 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_send_address(const char * id, uint8_t addr, int recv, int success)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_send_address(id, addr, recv, success);
    }
}

#define TRACE_NPCM7XX_SMBUS_SEND_BYTE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_SEND_BYTE) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_send_byte(const char * id, uint8_t value, int success)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_SEND_BYTE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_send_byte " "%s send byte: 0x%02x, success: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, value, success);
#line 491 "trace/trace-hw_i2c.h"
        } else {
#line 24 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_send_byte " "%s send byte: 0x%02x, success: %d" "\n", id, value, success);
#line 495 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_send_byte(const char * id, uint8_t value, int success)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_send_byte(id, value, success);
    }
}

#define TRACE_NPCM7XX_SMBUS_RECV_BYTE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_RECV_BYTE) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_recv_byte(const char * id, uint8_t value)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_RECV_BYTE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_recv_byte " "%s recv byte: 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, value);
#line 522 "trace/trace-hw_i2c.h"
        } else {
#line 25 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_recv_byte " "%s recv byte: 0x%02x" "\n", id, value);
#line 526 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_recv_byte(const char * id, uint8_t value)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_recv_byte(id, value);
    }
}

#define TRACE_NPCM7XX_SMBUS_STOP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_STOP) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_stop(const char * id)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_STOP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_stop " "%s stopping" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 553 "trace/trace-hw_i2c.h"
        } else {
#line 26 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_stop " "%s stopping" "\n", id);
#line 557 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_stop(const char * id)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_stop(id);
    }
}

#define TRACE_NPCM7XX_SMBUS_NACK_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_NACK) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_nack(const char * id)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_NACK) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_nack " "%s nacking" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 584 "trace/trace-hw_i2c.h"
        } else {
#line 27 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_nack " "%s nacking" "\n", id);
#line 588 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_nack(const char * id)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_nack(id);
    }
}

#define TRACE_NPCM7XX_SMBUS_RECV_FIFO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_NPCM7XX_SMBUS_RECV_FIFO) || \
    false)

static inline void _nocheck__trace_npcm7xx_smbus_recv_fifo(const char * id, uint8_t received, uint8_t expected)
{
    if (trace_event_get_state(TRACE_NPCM7XX_SMBUS_RECV_FIFO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:npcm7xx_smbus_recv_fifo " "%s recv fifo: received %u, expected %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, received, expected);
#line 615 "trace/trace-hw_i2c.h"
        } else {
#line 28 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("npcm7xx_smbus_recv_fifo " "%s recv fifo: received %u, expected %u" "\n", id, received, expected);
#line 619 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_npcm7xx_smbus_recv_fifo(const char * id, uint8_t received, uint8_t expected)
{
    if (true) {
        _nocheck__trace_npcm7xx_smbus_recv_fifo(id, received, expected);
    }
}

#define TRACE_PCA954X_WRITE_BYTES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PCA954X_WRITE_BYTES) || \
    false)

static inline void _nocheck__trace_pca954x_write_bytes(uint8_t value)
{
    if (trace_event_get_state(TRACE_PCA954X_WRITE_BYTES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:pca954x_write_bytes " "PCA954X write data: 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , value);
#line 646 "trace/trace-hw_i2c.h"
        } else {
#line 32 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("pca954x_write_bytes " "PCA954X write data: 0x%02x" "\n", value);
#line 650 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_pca954x_write_bytes(uint8_t value)
{
    if (true) {
        _nocheck__trace_pca954x_write_bytes(value);
    }
}

#define TRACE_PCA954X_READ_DATA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PCA954X_READ_DATA) || \
    false)

static inline void _nocheck__trace_pca954x_read_data(uint8_t value)
{
    if (trace_event_get_state(TRACE_PCA954X_READ_DATA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 33 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("%d@%zu.%06zu:pca954x_read_data " "PCA954X read data: 0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , value);
#line 677 "trace/trace-hw_i2c.h"
        } else {
#line 33 "/Users/alastair/Desktop/Code/ferment/pkgmanager/Installed/qemu/hw/i2c/trace-events"
            qemu_log("pca954x_read_data " "PCA954X read data: 0x%02x" "\n", value);
#line 681 "trace/trace-hw_i2c.h"
        }
    }
}

static inline void trace_pca954x_read_data(uint8_t value)
{
    if (true) {
        _nocheck__trace_pca954x_read_data(value);
    }
}
#endif /* TRACE_HW_I2C_GENERATED_TRACERS_H */