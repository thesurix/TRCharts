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

#import <TRChartsObjc/RangeDatum.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRRangeDatum

-(TRRangeDatum *)init
{
	self = [super init];
	if(self) {
		self.abscissa = 0.0;
		self.ordinate = [TRRange min:0.0 max:0.0];
	}
	return self;
}

+(TRRangeDatum *)abscissa:(double)abscissa ordinate:(TRRange *)ordinate
{
	TRRangeDatum * const result = [[TRRangeDatum alloc] init];
	result.abscissa = abscissa;
	result.ordinate = ordinate;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRRangeDatum class]]) {
		return NO;
	}
	TRRangeDatum * other = anObject;
	BOOL result = [super isEqual:other];
	if(self.ordinate == nil) {
		result = result && (other.ordinate == nil);
	} else {
		result = result && [self.ordinate isEqual:other.ordinate];
	}
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = [super hash];
    result = 31 * result + [self.ordinate hash];
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRRangeDatum * copy = [super copyWithZone:zone];
	copy.ordinate = [self.ordinate copyWithZone:zone];
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRRangeDatum[%@, %@]", [super description], self.ordinate];
}

@end