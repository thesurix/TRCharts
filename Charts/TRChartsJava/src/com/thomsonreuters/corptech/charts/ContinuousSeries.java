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
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public abstract class ContinuousSeries<T> extends Series
{
	/**
	 * Default constructor
	 */

	private ContinuousSeries()
	{
		this(true);
	}

	/**
	 * Get the abscissa axis.
	 * <p>
	 * The abscissa axis is conventionally used to plot the independent
	 * variable.
	 * </p>
	 * @return The current abscissa axis.
	 */

	public ContinuousAxis getAbscissaAxis()
	{
		return (ContinuousAxis)nativeGetAbscissaAxis(getHandle());
	}

	/**
	 * Set the abscissa axis.
	 * <p>
	 * The abscissa axis is conventionally used to plot the independent
	 * variable.
	 * </p>
	 * @param value The new abscissa axis.
	 */

	public void setAbscissaAxis(final ContinuousAxis value)
	{
		nativeSetAbscissaAxis(getHandle(), value);
	}

	/**
	 * Get the data source.
	 * @return The current data source.
	 */

	public abstract ContinuousDataSource<T> getDataSource();

	/**
	 * Set the data source.
	 * @param value The new data source.
	 */

	public abstract void setDataSource(final ContinuousDataSource<T> value);

	/**
	 * Get the color source.
	 * <p>
	 * The color source is used to provide a different color for each datum.
	 * </p>
	 * @return The current color source.
	 */

	public ColorSource getColorSource()
	{
		return (ColorSource)nativeGetColorSource(getHandle());
	}

	/**
	 * Set the color source.
	 * <p>
	 * The color source is used to provide a different color for each datum.
	 * </p>
	 * @param value The new color source.
	 */

	public void setColorSource(final ColorSource value)
	{
		nativeSetColorSource(getHandle(), value);
	}

	/**
	 * <p>
	 * Get the data value for the given screen position
	 * </p>
	 * @param screenPosition Screen position.
	 * @return The result.
	 */

	public Coordinates screenPositionToValue(final Point screenPosition)
	{
		return (Coordinates)nativeScreenPositionToValue(getHandle(), screenPosition);
	}

	/**
	 * <p>
	 * Get the screen position for the given data value
	 * </p>
	 * @param value Data-space co-ordinates.
	 * @return The result.
	 */

	public Point valueToScreenPosition(final Coordinates value)
	{
		return (Point)nativeValueToScreenPosition(getHandle(), value);
	}

	/**
	 * <p>
	 * Get the datum with the provided index.
	 * </p>
	 * @param index Data source index
	 * @return The result.
	 */

	public abstract T getDatum(final long index);

	/**
	 * <p>
	 * Interpolate the datum value at the provided abscissa value.
	 * </p>
	 * <p>
	 * The interpolated value is dependent on the series type.
	 * </p>
	 * @param abscissa Abscissa value
	 * @return The result.
	 */

	public abstract T interpolateDatum(final double abscissa);

	/**
	 * <p>
	 * Get the datum index that appears before the provided abscissa value.
	 * </p>
	 * <p>
	 * Distance is calculated in data space.
	 * </p>
	 * <p>
	 * Returns -1 if there is no datum available.
	 * </p>
	 * @param abscissa Abscissa value
	 * @param includeEqual If true, the last datum with an exactly equal abscissa value will be returned, if such a datum exists.
	 * @return The result.
	 */

	public long getIndexBeforeAbscissaValue(final double abscissa, final boolean includeEqual)
	{
		return nativeGetIndexBeforeAbscissaValue(getHandle(), abscissa, includeEqual);
	}

	/**
	 * <p>
	 * Get the datum index that appears after the provided abscissa value.
	 * </p>
	 * <p>
	 * Distance is calculated in data space.
	 * </p>
	 * <p>
	 * Returns -1 if there is no datum available.
	 * </p>
	 * @param abscissa Abscissa value
	 * @param includeEqual If true, the first datum with an exactly equal abscissa value will be returned, if such a datum exists.
	 * @return The result.
	 */

	public long getIndexAfterAbscissaValue(final double abscissa, final boolean includeEqual)
	{
		return nativeGetIndexAfterAbscissaValue(getHandle(), abscissa, includeEqual);
	}

	/**
	 * <p>
	 * Get the datum index that appears nearest the provided abscissa value.
	 * </p>
	 * <p>
	 * Distance is calculated in data space.
	 * </p>
	 * <p>
	 * Returns -1 if there is no datum available.
	 * </p>
	 * @param abscissa Abscissa value
	 * @return The result.
	 */

	public long getIndexNearestAbscissaValue(final double abscissa)
	{
		return nativeGetIndexNearestAbscissaValue(getHandle(), abscissa);
	}

	/**
	 * <p>
	 * Get the datum index that appears nearest the provided screen position.
	 * </p>
	 * <p>
	 * Distance is calculated in screen space.
	 * </p>
	 * <p>
	 * Returns -1 if there is no datum available.
	 * </p>
	 * @param screenPosition Screen position.
	 * @return The result.
	 */

	public long getIndexNearestScreenPosition(final Point screenPosition)
	{
		return nativeGetIndexNearestScreenPosition(getHandle(), screenPosition);
	}

	/**
	 * <p>
	 * Get the squared distance between the provided screen position and the
	 * datum at the provided index.
	 * </p>
	 * <p>
	 * Distance is calculated in screen space.
	 * </p>
	 * @param index Data source index
	 * @param screenPosition Screen position.
	 * @return The result.
	 */

	public double getDatumSquaredDistanceToScreenPosition(final long index, final Point screenPosition)
	{
		return nativeGetDatumSquaredDistanceToScreenPosition(getHandle(), index, screenPosition);
	}

	/**
	 * <p>
	 * Return the range (min-max) of the ordinate (dependent) variable, in a
	 * given abscissa (independent) range.
	 * </p>
	 * <p>
	 * This method operates in data co-ordinates.
	 * </p>
	 * @param abscissaRange Abscissa range (data co-ordinates).
	 * @return The result.
	 */

	public Range getOrdinateRangeWithinAbscissaRange(final Range abscissaRange)
	{
		return (Range)nativeGetOrdinateRangeWithinAbscissaRange(getHandle(), abscissaRange);
	}

	// need this to prevent default constructor in base classes
	/*package*/ ContinuousSeries(boolean dummy)
	{
		super(dummy);
	}

	private final native Object nativeGetAbscissaAxis(long ptr);
	private final native void nativeSetAbscissaAxis(long ptr, Object value);
	private final native Object nativeGetColorSource(long ptr);
	private final native void nativeSetColorSource(long ptr, Object value);
	private final native Object nativeScreenPositionToValue(long ptr, Object screenPosition);
	private final native Object nativeValueToScreenPosition(long ptr, Object value);
	private final native long nativeGetIndexBeforeAbscissaValue(long ptr, double abscissa, boolean includeEqual);
	private final native long nativeGetIndexAfterAbscissaValue(long ptr, double abscissa, boolean includeEqual);
	private final native long nativeGetIndexNearestAbscissaValue(long ptr, double abscissa);
	private final native long nativeGetIndexNearestScreenPosition(long ptr, Object screenPosition);
	private final native double nativeGetDatumSquaredDistanceToScreenPosition(long ptr, long index, Object screenPosition);
	private final native Object nativeGetOrdinateRangeWithinAbscissaRange(long ptr, Object abscissaRange);
}
