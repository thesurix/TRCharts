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

#ifndef Charts_FadeInEffect_hpp
#define Charts_FadeInEffect_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/AnimationEffect.hpp>

namespace Charts
{
	
	class FadeInEffect;
	class Drawable;

	
	class GeneratedFadeInEffect : public CodegenSupport::BaseObject, public Charts::AnimationEffect
	{
	public:
		virtual ~GeneratedFadeInEffect(void);

		std::shared_ptr<FadeInEffect> getSharedPtr(void);

		std::shared_ptr<const FadeInEffect> getSharedPtr(void) const;

		virtual const std::vector<std::shared_ptr<Charts::Drawable>> & getDrawableList(void) const = 0;

		virtual void setDrawableList(const std::vector<std::shared_ptr<Charts::Drawable>> & value) = 0;

		virtual void apply(double position, double duration) const = 0;

	protected:
		GeneratedFadeInEffect(void);

	};
}

#include <TRCharts/Impl/FadeInEffectImpl.hpp>

#endif