#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two nums
 * @a: first num
 * @b: sec num
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the diff of two nums
 * @a: first
 * @b: sec
 *
 * Return: the diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the pro of two nums
 * @a: first
 * @b: sec
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the div of two nums
 * @a: first
 * @b: sec
 *
 * Return: quotienent of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the reminder
 * @a: first
 * @b: sec
 *Return: reminder
*/
int op_mod(int a, int b)
{
	return (a % b);
}


