/*******************************************************************************
 * Copyright 2015 Thomson Reuters
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/
/* NOTE: This file is autogenerated, do not edit this file directly.*/

package com.thomsonreuters.corptech.charts;

import java.util.List;

/**
 * <p>
 * Continuous datums have two co-ordinates, an abscissa (usually X) and an
 * ordinate (usually Y), although X and Y can be flipped using axis
 * association. In a continuous datum the abscissa value is always a real
 * number, and the ordinate type is defined by subclasses. Ordinate values
 * may be complex (structured), or numbers. The interpretation of a datum is
 * series-dependent, a given continuous series implementation will always
 * require a specific datum type. 
 * </p>
 * <p>
 * <b>NOTE:</b> This is a value class, when passing it to other library
 * methods it is always effectively copied.
 * </p>
 */

@SuppressWarnings("all")
public class ContinuousDatum
{
	private double abscissa;

	/**
	 * Initialize a ContinuousDatum with default values.
	 */
	public ContinuousDatum()
	{
	}

	/**
	 * Initialize a ContinuousDatum with provided values.
	 *
	 * @param abscissa The abscissa value.
	 */

	public ContinuousDatum(double abscissa)
	{
		this.abscissa = abscissa;
	}

	/**
	 * Get the abscissa value.
	 * <p>
	 * The independent variable (usually)
	 * </p>
	 * @return The current abscissa value.
	 */

	public final double getAbscissa()
	{
		return this.abscissa;
	}

	/**
	 * Set the abscissa value.
	 * <p>
	 * The independent variable (usually)
	 * </p>
	 * @param value The new abscissa value.
	 */

	public final void setAbscissa(final double value)
	{
		this.abscissa = value;
	}

	@Override
	public String toString()
	{
		return "ContinuousDatum {" +
				"abscissa=" + abscissa +
				"}";
	}

	@Override
	public boolean equals(final Object other)
	{
		if(this == other) return true;
		if(!(other instanceof ContinuousDatum)) return false;

		final ContinuousDatum tmp = (ContinuousDatum)other;

		if(!(this.abscissa == tmp.abscissa)) return false;

		return true;
	}

	@Override
	public int hashCode()
	{
		int result = 7;

		result = 31 * result + ((Double)abscissa).hashCode();

		return result;
	}

}