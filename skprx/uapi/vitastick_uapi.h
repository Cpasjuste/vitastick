#ifndef VITASTICK_UAPI_H
#define VITASTICK_UAPI_H

#ifdef __cplusplus
extern "C" {
#endif

#define VITASTICK_ERROR_DRIVER_NOT_REGISTERED		0x81337000
#define VITASTICK_ERROR_DRIVER_NOT_ACTIVATED		0x81337001
#define VITASTICK_ERROR_DRIVER_ALREADY_ACTIVATED	0x81337002

int vitastick_start(void);
int vitastick_stop(void);

#ifdef __cplusplus
}
#endif


#endif
