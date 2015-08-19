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

#ifndef Charts_FixedNumberTickCalculator_hpp
#define Charts_FixedNumberTickCalculator_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/NumberTickCalculator.hpp>
#include <TRCharts/Range.hpp>

namespace Charts
{
	
	class FixedNumberTickCalculator;

	
	class GeneratedFixedNumberTickCalculator : public CodegenSupport::BaseObject, public Charts::NumberTickCalculator
	{
	public:
		virtual ~GeneratedFixedNumberTickCalculator(void);

		std::shared_ptr<FixedNumberTickCalculator> getSharedPtr(void);

		std::shared_ptr<const FixedNumberTickCalculator> getSharedPtr(void) const;

		virtual double getTickInterval(void) const = 0;

		virtual void setTickInterval(double value) = 0;

		virtual double calculateTickInterval(const Charts::Range & dataRange, const Charts::Range & visibleDataRange, double screenLength) const = 0;

	protected:
		GeneratedFixedNumberTickCalculator(void);

	};
}

#include <TRCharts/Impl/FixedNumberTickCalculatorImpl.hpp>

#endif