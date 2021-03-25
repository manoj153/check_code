/**
 * @file struct_pointer.c
 * @brief as a training module 
 * @copyright ELECTROLANCE SOLUTIONS 
 * @license Apache-2.0
 * @author Manojkumar <manoj@electrolance.com>
 */

#include <stdio.h>

const struct rs_485_channel {
	int *uart_device;
	int *k_fifo;
	int *mutex;
};

int main()
{
	int actual_val = 100;
	struct rs_485_channel test_struct;
	struct rs_485_channel *struct_ptr;
	struct_ptr = &test_struct;
	test_struct.uart_device = &actual_val;

	printf("%p \n", test_struct.uart_device);
	printf("%p \n", &actual_val);
	printf("%d \n", *struct_ptr->uart_device);

	return 0;
}


/*
STD OUTPUT:

0x7ffe9376bfc4                                                                                                      
0x7ffe9376bfc4                                                                                                      
100

*/
