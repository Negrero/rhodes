/*------------------------------------------------------------------------
* (The MIT License)
* 
* Copyright (c) 2008-2011 Rhomobile, Inc.
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
* 
* http://rhomobile.com
*------------------------------------------------------------------------*/

#include <math.h>
#include "common/RhoMath.h"

double rho_math_sqrt(double n)
{
    return sqrt(n);
}

uint64 rho_math_pow2(int n)
{
    uint64 ret;
    for (ret = 1; n > 0; --n)
        ret *= 2;
    return ret;
}

double rho_math_log2(double n)
{
    return log(n)/M_LN2;
}

double rho_math_sin(double n)
{
    return sin(n);
}

double rho_math_asin(double n)
{
    return asin(n);
}

double rho_math_tanh(double n)
{
    double epx = exp(n);
    double emx = exp(-n);
    return (epx - emx)/(epx + emx);
}

double rho_math_atanh(double n)
{
    return 0.5 * log((1 + n)/(1 - n));
}

