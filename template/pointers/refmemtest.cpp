/* The following code example is taken from the book
 * "C++ Templates - The Complete Guide"
 * by David Vandevoorde and Nicolai M. Josuttis, Addison-Wesley, 2002
 *
 * (C) Copyright David Vandevoorde and Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include <iostream>

class MemType {
public:
    MemType()
    {
        printf("Fun:%s, Line:%d", __FUNCTION__, __LINE__ );
    }
    ~MemType()
    {
        printf("Fun:%s, Line:%d", __FUNCTION__, __LINE__ );
    }
};

#include "refmem2.hpp"

int main()
{
    RefMembers r1;

    RefMembers r2(r1);

    r1 = r2;
}
