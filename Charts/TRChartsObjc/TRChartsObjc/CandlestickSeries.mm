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

#import <TRChartsObjc/CandlestickSeries.h>

#import <TRCharts/CandlestickSeries.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRCandlestickSeries

-(TRCandlestickSeries*)init {
	TRChartsObjc::verifyCurrentQueue();
	self = [super initConcrete];
	Charts::CandlestickSeries * const obj = new Charts::CandlestickSeries();
	CodegenSupportObjc::Handle * const handle = new CodegenSupportObjc::Handle(obj, self);
	obj->setHandle(handle);
	[self setHandle:handle];
	return self;
}

-(id<TRContinuousDataSource>)dataSource {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::CandlestickSeries> obj = handle->getNativeObject<Charts::CandlestickSeries>();
	return TRChartsObjc::getContinuousDataSource_OHLCDatumMarshaller().unmarshall(obj->getDataSource());
}

-(void)setDataSource:(id<TRContinuousDataSource>)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::CandlestickSeries> obj = handle->getNativeObject<Charts::CandlestickSeries>();
	obj->setDataSource(TRChartsObjc::getContinuousDataSource_OHLCDatumMarshaller().marshall(value));
}

-(TROHLCDatum *)getDatum:(long)index {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::CandlestickSeries> obj = handle->getNativeObject<Charts::CandlestickSeries>();
	return TRChartsObjc::getOHLCDatumMarshaller().unmarshall(obj->getDatum(TRChartsObjc::getIntegerMarshaller().marshall(index)));	
}

-(TROHLCDatum *)interpolateDatum:(double)abscissa {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::CandlestickSeries> obj = handle->getNativeObject<Charts::CandlestickSeries>();
	return TRChartsObjc::getOHLCDatumMarshaller().unmarshall(obj->interpolateDatum(TRChartsObjc::getNumberMarshaller().marshall(abscissa)));	
}

@end