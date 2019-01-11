#ifndef __TCP_CLIENT_H
#define __TCP_CLIENT_H

#ifdef __cplusplus
 extern "C" {
#endif   

#include "tcp.h"
#include "err.h"
/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define TCP_CLIENT_RX_BUFSIZE	500		//定义tcp client最大接收数据长度

#define DEST_PORT 6666 //server port

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
err_t tcp_echoclient_connect(void);
err_t tcp_client_usersent(struct tcp_pcb *tpcb, uint8_t *buff,uint16_t size);




#ifdef __cplusplus 
}
#endif

#endif















