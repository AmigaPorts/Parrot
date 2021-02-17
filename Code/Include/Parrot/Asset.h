/**
    $Id: Object.h 1.2 2020/02/16 16:28:00, betajaen Exp $

    Parrot - Point and Click Adventure Game Player
    ==============================================

    Copyright 2020 Robin Southern http://github.com/betajaen/parrot

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#ifndef PARROT_ASSET_H
#define PARROT_ASSET_H

#include <Parrot/Parrot.h>

/**
 * Get Object Id
 */
PtUnsigned16 PtAsset_Id(APTR ptr)
{
  if (ptr == NULL)
    return 0;

  return ((PtAsset*)ptr)->as_Id;
}

/**
 * Get if the Object is created at runtime
 */
PtInline PtBool PtAsset_IsInstance(PtAsset* object)
{
  return object != NULL && object->as_Flags & PT_AF_INSTANCE;
}

/**
 * Get if the Object is loaded from disk
 */
PtInline PtBool PtAsset_IsSaved(PtAsset* object)
{
  return object != NULL && (object->as_Flags & PT_AF_INSTANCE == 0);
}

#endif
