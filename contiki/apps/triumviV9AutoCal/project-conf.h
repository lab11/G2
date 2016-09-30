#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

/*
 * @author: Brad Campbell <bradjc@umich.edu>
 */

// No need for UART
#define STARTUP_CONF_VERBOSE 0

//#ifdef ERASE_FRAM
//#define RTC_SET
//#define FRAM_WRITE

#define DATADUMP
//#define DATADUMP2
//#define DEBUG_ON

//#define AVG_VREF      // calculate the reference by averaging a cycle

#if defined(DATADUMP) || defined(DATADUMP2) || defined(DEBUG_ON)
#define UART_CONF_ENABLE 1
#endif

//#define FIFTYHZ
#define POWERFACTOR_EN
#define POLYFIT
#define RSENSE_LOW // 45.3 ohm sensing resistor


#define TRIUMVI_PKT_IDENTIFIER 0xa0
#define LEN_LEN 2 // LVal
#define MIC_LEN 4 // MVal
#define ADATA_LEN 0x08
#define PDATA_LEN 0x05

#define VERSION9

// Use custom address for this address
// make ID=c0:98:e5:54:52:a0:00:01
#define IEEE_ADDR_CONF_USE_SECONDARY_LOCATION 1

#endif /* PROJECT_CONF_H_ */

/** @} */
