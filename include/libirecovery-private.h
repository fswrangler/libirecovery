//
//  libirecovery-private.h
//  libirecovery
//
//  Created on 7/16/11.
//  Copyright 2011. All rights reserved.
//

#include "libirecovery.h"

int check_context(irecv_client_t client);
void irecv_init(void);
void irecv_exit(void);
void dummy_callback(void);

int irecv_control_transfer( irecv_client_t client,
						   uint8_t bmRequestType,
						   uint8_t bRequest,
						   uint16_t wValue,
						   uint16_t wIndex,
						   unsigned char *data,
						   uint16_t wLength,
						   unsigned int timeout);

int irecv_bulk_transfer(irecv_client_t client,
						unsigned char endpoint,
						unsigned char *data,
						int length,
						int *transferred,
						unsigned int timeout);

int irecv_get_string_descriptor_ascii(irecv_client_t client, uint8_t desc_index, unsigned char * buffer, int size);

irecv_error_t irecv_get_status(irecv_client_t client, unsigned int* status);
