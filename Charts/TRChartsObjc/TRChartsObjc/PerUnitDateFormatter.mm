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

#import <TRChartsObjc/PerUnitDateFormatter.h>

#import <TRCharts/PerUnitDateFormatter.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRPerUnitDateFormatter

-(TRPerUnitDateFormatter*)init {
	TRChartsObjc::verifyCurrentQueue();
	self = [super initConcrete];
	Charts::PerUnitDateFormatter * const obj = new Charts::PerUnitDateFormatter();
	CodegenSupportObjc::Handle * const handle = new CodegenSupportObjc::Handle(obj, self);
	obj->setHandle(handle);
	[self setHandle:handle];
	return self;
}

-(void)setUnitFormat:(TRDateUnit)unit format:(NSString *)format {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::PerUnitDateFormatter> obj = handle->getNativeObject<Charts::PerUnitDateFormatter>();
	obj->setUnitFormat(TRChartsObjc::getDateUnitMarshaller().marshall(unit), TRChartsObjc::getStringMarshaller().marshall(format));
}

-(NSString *)getUnitFormat:(TRDateUnit)unit {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::PerUnitDateFormatter> obj = handle->getNativeObject<Charts::PerUnitDateFormatter>();
	return TRChartsObjc::getStringMarshaller().unmarshall(obj->getUnitFormat(TRChartsObjc::getDateUnitMarshaller().marshall(unit)));	
}

-(void)setZeroUnitFormat:(TRDateUnit)unit format:(NSString *)format {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::PerUnitDateFormatter> obj = handle->getNativeObject<Charts::PerUnitDateFormatter>();
	obj->setZeroUnitFormat(TRChartsObjc::getDateUnitMarshaller().marshall(unit), TRChartsObjc::getStringMarshaller().marshall(format));
}

-(NSString *)getZeroUnitFormat:(TRDateUnit)unit {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::PerUnitDateFormatter> obj = handle->getNativeObject<Charts::PerUnitDateFormatter>();
	return TRChartsObjc::getStringMarshaller().unmarshall(obj->getZeroUnitFormat(TRChartsObjc::getDateUnitMarshaller().marshall(unit)));	
}

@end