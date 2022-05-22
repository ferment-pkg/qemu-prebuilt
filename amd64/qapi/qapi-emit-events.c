/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Events emission
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-emit-events.h"

const QEnumLookup QAPIEvent_lookup = {
    .array = (const char *const[]) {
        [QAPI_EVENT_SHUTDOWN] = "SHUTDOWN",
        [QAPI_EVENT_POWERDOWN] = "POWERDOWN",
        [QAPI_EVENT_RESET] = "RESET",
        [QAPI_EVENT_STOP] = "STOP",
        [QAPI_EVENT_RESUME] = "RESUME",
        [QAPI_EVENT_SUSPEND] = "SUSPEND",
        [QAPI_EVENT_SUSPEND_DISK] = "SUSPEND_DISK",
        [QAPI_EVENT_WAKEUP] = "WAKEUP",
        [QAPI_EVENT_WATCHDOG] = "WATCHDOG",
        [QAPI_EVENT_GUEST_PANICKED] = "GUEST_PANICKED",
        [QAPI_EVENT_GUEST_CRASHLOADED] = "GUEST_CRASHLOADED",
        [QAPI_EVENT_MEMORY_FAILURE] = "MEMORY_FAILURE",
        [QAPI_EVENT_DEVICE_TRAY_MOVED] = "DEVICE_TRAY_MOVED",
        [QAPI_EVENT_PR_MANAGER_STATUS_CHANGED] = "PR_MANAGER_STATUS_CHANGED",
        [QAPI_EVENT_BLOCK_IMAGE_CORRUPTED] = "BLOCK_IMAGE_CORRUPTED",
        [QAPI_EVENT_BLOCK_IO_ERROR] = "BLOCK_IO_ERROR",
        [QAPI_EVENT_BLOCK_JOB_COMPLETED] = "BLOCK_JOB_COMPLETED",
        [QAPI_EVENT_BLOCK_JOB_CANCELLED] = "BLOCK_JOB_CANCELLED",
        [QAPI_EVENT_BLOCK_JOB_ERROR] = "BLOCK_JOB_ERROR",
        [QAPI_EVENT_BLOCK_JOB_READY] = "BLOCK_JOB_READY",
        [QAPI_EVENT_BLOCK_JOB_PENDING] = "BLOCK_JOB_PENDING",
        [QAPI_EVENT_BLOCK_WRITE_THRESHOLD] = "BLOCK_WRITE_THRESHOLD",
        [QAPI_EVENT_QUORUM_FAILURE] = "QUORUM_FAILURE",
        [QAPI_EVENT_QUORUM_REPORT_BAD] = "QUORUM_REPORT_BAD",
        [QAPI_EVENT_JOB_STATUS_CHANGE] = "JOB_STATUS_CHANGE",
        [QAPI_EVENT_BLOCK_EXPORT_DELETED] = "BLOCK_EXPORT_DELETED",
        [QAPI_EVENT_VSERPORT_CHANGE] = "VSERPORT_CHANGE",
        [QAPI_EVENT_DUMP_COMPLETED] = "DUMP_COMPLETED",
        [QAPI_EVENT_NIC_RX_FILTER_CHANGED] = "NIC_RX_FILTER_CHANGED",
        [QAPI_EVENT_FAILOVER_NEGOTIATED] = "FAILOVER_NEGOTIATED",
        [QAPI_EVENT_RDMA_GID_STATUS_CHANGED] = "RDMA_GID_STATUS_CHANGED",
        [QAPI_EVENT_SPICE_CONNECTED] = "SPICE_CONNECTED",
        [QAPI_EVENT_SPICE_INITIALIZED] = "SPICE_INITIALIZED",
        [QAPI_EVENT_SPICE_DISCONNECTED] = "SPICE_DISCONNECTED",
        [QAPI_EVENT_SPICE_MIGRATE_COMPLETED] = "SPICE_MIGRATE_COMPLETED",
        [QAPI_EVENT_VNC_CONNECTED] = "VNC_CONNECTED",
        [QAPI_EVENT_VNC_INITIALIZED] = "VNC_INITIALIZED",
        [QAPI_EVENT_VNC_DISCONNECTED] = "VNC_DISCONNECTED",
        [QAPI_EVENT_MIGRATION] = "MIGRATION",
        [QAPI_EVENT_MIGRATION_PASS] = "MIGRATION_PASS",
        [QAPI_EVENT_COLO_EXIT] = "COLO_EXIT",
        [QAPI_EVENT_UNPLUG_PRIMARY] = "UNPLUG_PRIMARY",
        [QAPI_EVENT_DEVICE_DELETED] = "DEVICE_DELETED",
        [QAPI_EVENT_BALLOON_CHANGE] = "BALLOON_CHANGE",
        [QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE] = "MEMORY_DEVICE_SIZE_CHANGE",
        [QAPI_EVENT_MEM_UNPLUG_ERROR] = "MEM_UNPLUG_ERROR",
        [QAPI_EVENT_RTC_CHANGE] = "RTC_CHANGE",
        [QAPI_EVENT_ACPI_DEVICE_OST] = "ACPI_DEVICE_OST",
    },
    .size = QAPI_EVENT__MAX
};

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_emit_events_c;
