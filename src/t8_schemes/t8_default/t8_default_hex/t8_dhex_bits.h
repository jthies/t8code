/*
  This file is part of t8code.
  t8code is a C library to manage a collection (a forest) of multiple
  connected adaptive space-trees of general element classes in parallel.

  Copyright (C) 2015 the developers

  t8code is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  t8code is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with t8code; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

/** \file t8_dhex_bits.h
 * Definitions of hex-specific functions.
 */

#ifndef T8_DHEX_BITS_H
#define T8_DHEX_BITS_H

#include <t8_element.h>
#include <t8_schemes/t8_default/t8_default_hex/t8_dhex.h>

T8_EXTERN_C_BEGIN ();

/** Convert a point in the reference space of a hex element to a point in the
 *  reference space of the tree (level 0) embedded in [0,1]^3.
 * \param [in]  elem       Input hex.
 * \param [in]  ref_coords The reference coordinate on the hex [0, 1]^3
 * \param [out] out_coords An array of 1 double that
 * 		                     will be filled with the reference coordinates
 *                         of the point on the hex.
 */
void                t8_dhex_compute_reference_coords (const t8_dhex_t * elem,
                                                      const double
                                                      *ref_coords,
                                                      double *out_coords);

T8_EXTERN_C_END ();

#endif /* T8_DHEX_BITS_H */
