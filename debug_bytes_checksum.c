
/**
 * @file debug_bytes_checksum.c
 * @brief as a training module 
 * @copyright ELECTROLANCE SOLUTIONS 
 * @license Apache-2.0
 * @author Manojkumar <manoj@electrolance.com>
 */
#include <stdint.h>
#include <stdio.h>

/**
  * FUNCTION PROTOTYPES
  */

uint8_t Checksumcrc(uint8_t *aData, uint8_t StartIndex, uint8_t DataLength);
int debug_bytes(uint8_t *data_ptr, size_t size);

void main()
{

        uint8_t TxData[5] = {0};
        
        TxData[0] = 0x3E;
        TxData[1] = 0x92;
        TxData[2] = 0x11;
        TxData[3] = 0;
        TxData[4] = Checksumcrc(TxData, 0, 4);
        debug_bytes(TxData, 5);
}

uint8_t Checksumcrc(uint8_t *aData, uint8_t StartIndex, uint8_t DataLength)
{
        uint8_t crc = 0;
        uint8_t i = 0;
        for (i = StartIndex; i < (StartIndex + DataLength); i++)
        {
                crc += aData[i];
        }
        return crc;
}

int debug_bytes(uint8_t *data_ptr, size_t size)
{
        if ((data_ptr) && (size > 0))
        {
                uint8_t i = 0;
                for (i = 0; i < 14; i++)
                {
                        /*printf("buf val%d=%#X\r\n", i, data_ptr[i]);*/
                        printf("Index:\t%d\t\tVal:\t%#X\r\n", i, data_ptr[i]);
                }
        }
        else
        {
                /*Bad params null ptr or wrong size*/
                return -1;
        }

        return 1;
}
