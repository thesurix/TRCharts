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

#import <TRChartsObjc/IncludeZeroRangeCalculator.h>
#import <TRChartsObjc/RangeCalculator.h>

#import <TRCharts/IncludeZeroRangeCalculator.hpp>
#import <TRCharts/RangeCalculator.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRIncludeZeroRangeCalculator

-(TRIncludeZeroRangeCalculator*)init {
	TRChartsObjc::verifyCurrentQueue();
	self = [super initConcrete];
	Charts::IncludeZeroRangeCalculator * const obj = new Charts::IncludeZeroRangeCalculator();
	CodegenSupportObjc::Handle * const handle = new CodegenSupportObjc::Handle(obj, self);
	obj->setHandle(handle);
	[self setHandle:handle];
	return self;
}

-(id<TRRangeCalculator>)rangeCalculator {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::IncludeZeroRangeCalculator> obj = handle->getNativeObject<Charts::IncludeZeroRangeCalculator>();
	return TRChartsObjc::getRangeCalculatorMarshaller().unmarshall(obj->getRangeCalculator());
}

-(void)setRangeCalculator:(id<TRRangeCalculator>)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::IncludeZeroRangeCalculator> obj = handle->getNativeObject<Charts::IncludeZeroRangeCalculator>();
	obj->setRangeCalculator(TRChartsObjc::getRangeCalculatorMarshaller().marshall(value));
}

-(TRRange *)calculateRange:(TRRange *)dataRange {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::IncludeZeroRangeCalculator> obj = handle->getNativeObject<Charts::IncludeZeroRangeCalculator>();
	return TRChartsObjc::getRangeMarshaller().unmarshall(obj->calculateRange(TRChartsObjc::getRangeMarshaller().marshall(dataRange)));	
}

@end