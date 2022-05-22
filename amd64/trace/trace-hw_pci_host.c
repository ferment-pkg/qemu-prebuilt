/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_pci_host.h"

uint16_t _TRACE_BONITO_SPCICONF_SMALL_ACCESS_DSTATE;
uint16_t _TRACE_GRACKLE_SET_IRQ_DSTATE;
uint16_t _TRACE_MV64361_REGION_MAP_DSTATE;
uint16_t _TRACE_MV64361_REGION_ENABLE_DSTATE;
uint16_t _TRACE_MV64361_REG_READ_DSTATE;
uint16_t _TRACE_MV64361_REG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_SET_REQUEST_DSTATE;
uint16_t _TRACE_SABRE_CLEAR_REQUEST_DSTATE;
uint16_t _TRACE_SABRE_CONFIG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_CONFIG_READ_DSTATE;
uint16_t _TRACE_SABRE_PCI_CONFIG_WRITE_DSTATE;
uint16_t _TRACE_SABRE_PCI_CONFIG_READ_DSTATE;
uint16_t _TRACE_SABRE_PCI_SET_IRQ_DSTATE;
uint16_t _TRACE_SABRE_PCI_SET_OBIO_IRQ_DSTATE;
uint16_t _TRACE_UNIN_SET_IRQ_DSTATE;
uint16_t _TRACE_UNIN_GET_CONFIG_REG_DSTATE;
uint16_t _TRACE_UNIN_DATA_WRITE_DSTATE;
uint16_t _TRACE_UNIN_DATA_READ_DSTATE;
uint16_t _TRACE_UNIN_WRITE_DSTATE;
uint16_t _TRACE_UNIN_READ_DSTATE;
uint16_t _TRACE_PNV_PHB4_XIVE_NOTIFY_DSTATE;
TraceEvent _TRACE_BONITO_SPCICONF_SMALL_ACCESS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bonito_spciconf_small_access",
    .sstate = TRACE_BONITO_SPCICONF_SMALL_ACCESS_ENABLED,
    .dstate = &_TRACE_BONITO_SPCICONF_SMALL_ACCESS_DSTATE 
};
TraceEvent _TRACE_GRACKLE_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "grackle_set_irq",
    .sstate = TRACE_GRACKLE_SET_IRQ_ENABLED,
    .dstate = &_TRACE_GRACKLE_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_MV64361_REGION_MAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mv64361_region_map",
    .sstate = TRACE_MV64361_REGION_MAP_ENABLED,
    .dstate = &_TRACE_MV64361_REGION_MAP_DSTATE 
};
TraceEvent _TRACE_MV64361_REGION_ENABLE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mv64361_region_enable",
    .sstate = TRACE_MV64361_REGION_ENABLE_ENABLED,
    .dstate = &_TRACE_MV64361_REGION_ENABLE_DSTATE 
};
TraceEvent _TRACE_MV64361_REG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mv64361_reg_read",
    .sstate = TRACE_MV64361_REG_READ_ENABLED,
    .dstate = &_TRACE_MV64361_REG_READ_DSTATE 
};
TraceEvent _TRACE_MV64361_REG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mv64361_reg_write",
    .sstate = TRACE_MV64361_REG_WRITE_ENABLED,
    .dstate = &_TRACE_MV64361_REG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_SET_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_set_request",
    .sstate = TRACE_SABRE_SET_REQUEST_ENABLED,
    .dstate = &_TRACE_SABRE_SET_REQUEST_DSTATE 
};
TraceEvent _TRACE_SABRE_CLEAR_REQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_clear_request",
    .sstate = TRACE_SABRE_CLEAR_REQUEST_ENABLED,
    .dstate = &_TRACE_SABRE_CLEAR_REQUEST_DSTATE 
};
TraceEvent _TRACE_SABRE_CONFIG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_config_write",
    .sstate = TRACE_SABRE_CONFIG_WRITE_ENABLED,
    .dstate = &_TRACE_SABRE_CONFIG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_CONFIG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_config_read",
    .sstate = TRACE_SABRE_CONFIG_READ_ENABLED,
    .dstate = &_TRACE_SABRE_CONFIG_READ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_CONFIG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_pci_config_write",
    .sstate = TRACE_SABRE_PCI_CONFIG_WRITE_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_CONFIG_WRITE_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_CONFIG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_pci_config_read",
    .sstate = TRACE_SABRE_PCI_CONFIG_READ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_CONFIG_READ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_pci_set_irq",
    .sstate = TRACE_SABRE_PCI_SET_IRQ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_SABRE_PCI_SET_OBIO_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sabre_pci_set_obio_irq",
    .sstate = TRACE_SABRE_PCI_SET_OBIO_IRQ_ENABLED,
    .dstate = &_TRACE_SABRE_PCI_SET_OBIO_IRQ_DSTATE 
};
TraceEvent _TRACE_UNIN_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_set_irq",
    .sstate = TRACE_UNIN_SET_IRQ_ENABLED,
    .dstate = &_TRACE_UNIN_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_UNIN_GET_CONFIG_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_get_config_reg",
    .sstate = TRACE_UNIN_GET_CONFIG_REG_ENABLED,
    .dstate = &_TRACE_UNIN_GET_CONFIG_REG_DSTATE 
};
TraceEvent _TRACE_UNIN_DATA_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_data_write",
    .sstate = TRACE_UNIN_DATA_WRITE_ENABLED,
    .dstate = &_TRACE_UNIN_DATA_WRITE_DSTATE 
};
TraceEvent _TRACE_UNIN_DATA_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_data_read",
    .sstate = TRACE_UNIN_DATA_READ_ENABLED,
    .dstate = &_TRACE_UNIN_DATA_READ_DSTATE 
};
TraceEvent _TRACE_UNIN_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_write",
    .sstate = TRACE_UNIN_WRITE_ENABLED,
    .dstate = &_TRACE_UNIN_WRITE_DSTATE 
};
TraceEvent _TRACE_UNIN_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "unin_read",
    .sstate = TRACE_UNIN_READ_ENABLED,
    .dstate = &_TRACE_UNIN_READ_DSTATE 
};
TraceEvent _TRACE_PNV_PHB4_XIVE_NOTIFY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pnv_phb4_xive_notify",
    .sstate = TRACE_PNV_PHB4_XIVE_NOTIFY_ENABLED,
    .dstate = &_TRACE_PNV_PHB4_XIVE_NOTIFY_DSTATE 
};
TraceEvent *hw_pci_host_trace_events[] = {
    &_TRACE_BONITO_SPCICONF_SMALL_ACCESS_EVENT,
    &_TRACE_GRACKLE_SET_IRQ_EVENT,
    &_TRACE_MV64361_REGION_MAP_EVENT,
    &_TRACE_MV64361_REGION_ENABLE_EVENT,
    &_TRACE_MV64361_REG_READ_EVENT,
    &_TRACE_MV64361_REG_WRITE_EVENT,
    &_TRACE_SABRE_SET_REQUEST_EVENT,
    &_TRACE_SABRE_CLEAR_REQUEST_EVENT,
    &_TRACE_SABRE_CONFIG_WRITE_EVENT,
    &_TRACE_SABRE_CONFIG_READ_EVENT,
    &_TRACE_SABRE_PCI_CONFIG_WRITE_EVENT,
    &_TRACE_SABRE_PCI_CONFIG_READ_EVENT,
    &_TRACE_SABRE_PCI_SET_IRQ_EVENT,
    &_TRACE_SABRE_PCI_SET_OBIO_IRQ_EVENT,
    &_TRACE_UNIN_SET_IRQ_EVENT,
    &_TRACE_UNIN_GET_CONFIG_REG_EVENT,
    &_TRACE_UNIN_DATA_WRITE_EVENT,
    &_TRACE_UNIN_DATA_READ_EVENT,
    &_TRACE_UNIN_WRITE_EVENT,
    &_TRACE_UNIN_READ_EVENT,
    &_TRACE_PNV_PHB4_XIVE_NOTIFY_EVENT,
  NULL,
};

static void trace_hw_pci_host_register_events(void)
{
    trace_event_register_group(hw_pci_host_trace_events);
}
trace_init(trace_hw_pci_host_register_events)
