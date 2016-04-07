/* ชื่อ วสันต์ นามสกุล แพทย์รัตน์
 * 580510628
 * HW 02
 * Problem 0
 * 204112 Sec 003 */

#include "T112_HW02_0.h"

int most_frequent_digit(int num)
{
    int result = 0;
    int count[10]  = {};
    int i, last;
    int j = 0;
    int before = 0;
    int num_temp = num;

    if (num < 0) {
        num = -num;
    }
    for (i = 0; i < 10; i++) {
        while (num_temp != 0) {
            last = num_temp % 10;
            if (last == i) {
                j++;
                count[i] = j;
            }
            num_temp = num_temp / 10;
        }
        num_temp = num;
        j = 0;
        if (count[i] > before) {
            before = count[i];
            result = i;
        }
    }
    return result;
}