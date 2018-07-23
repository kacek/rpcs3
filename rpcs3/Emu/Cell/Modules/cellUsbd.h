#pragma once



// Return Codes
enum
{
	CELL_USBD_ERROR_NOT_INITIALIZED        = 0x80110001,
	CELL_USBD_ERROR_ALREADY_INITIALIZED    = 0x80110002,
	CELL_USBD_ERROR_NO_MEMORY              = 0x80110003,
	CELL_USBD_ERROR_INVALID_PARAM          = 0x80110004,
	CELL_USBD_ERROR_INVALID_TRANSFER_TYPE  = 0x80110005,
	CELL_USBD_ERROR_LDD_ALREADY_REGISTERED = 0x80110006,
	CELL_USBD_ERROR_LDD_NOT_ALLOCATED      = 0x80110007,
	CELL_USBD_ERROR_LDD_NOT_RELEASED       = 0x80110008,
	CELL_USBD_ERROR_LDD_NOT_FOUND          = 0x80110009,
	CELL_USBD_ERROR_DEVICE_NOT_FOUND       = 0x8011000a,
	CELL_USBD_ERROR_PIPE_NOT_ALLOCATED     = 0x8011000b,
	CELL_USBD_ERROR_PIPE_NOT_RELEASED      = 0x8011000c,
	CELL_USBD_ERROR_PIPE_NOT_FOUND         = 0x8011000d,
	CELL_USBD_ERROR_IOREQ_NOT_ALLOCATED    = 0x8011000e,
	CELL_USBD_ERROR_IOREQ_NOT_RELEASED     = 0x8011000f,
	CELL_USBD_ERROR_IOREQ_NOT_FOUND        = 0x80110010,
	CELL_USBD_ERROR_CANNOT_GET_DESCRIPTOR  = 0x80110011,
	CELL_USBD_ERROR_FATAL                  = 0x801100ff,
};

// TCC (Transfer Completion Codes)
enum
{
	HC_CC_NOERR     = 0x0,
	EHCI_CC_MISSMF  = 0x10,
	EHCI_CC_XACT    = 0x20,
	EHCI_CC_BABBLE  = 0x30,
	EHCI_CC_DATABUF = 0x40,
	EHCI_CC_HALTED  = 0x50,

	USBD_HC_CC_NOERR   = 0x0,
	USBD_HC_CC_MISSMF  = 0x1,
	USBD_HC_CC_XACT    = 0x2,
	USBD_HC_CC_BABBLE  = 0x4,
	USBD_HC_CC_DATABUF = 0x8,
};
