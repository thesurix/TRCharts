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

#ifndef Charts_ScalarDatum_hpp
#define Charts_ScalarDatum_hpp

#include <TRCharts/Common.hpp>
#include <TRCharts/ContinuousDatum.hpp>

#include <ostream>

namespace Charts
{
	
	struct ScalarDatum;

	
	struct GeneratedScalarDatum: public Charts::ContinuousDatum
	{
		double ordinate;

		GeneratedScalarDatum(void);

		GeneratedScalarDatum(double abscissa, double ordinate);

		bool operator==(const GeneratedScalarDatum & other) const;

		bool operator!=(const GeneratedScalarDatum & other) const;
	};

	
	std::ostream & operator<<(std::ostream & to, const GeneratedScalarDatum & from);
}

#include <TRCharts/Impl/ScalarDatumImpl.hpp>

#endif