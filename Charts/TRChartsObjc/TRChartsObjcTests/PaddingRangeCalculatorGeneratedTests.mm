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

#import "PaddingRangeCalculatorGeneratedTests.h"
#import <TRChartsObjc/PaddingRangeCalculator.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRPaddingRangeCalculatorGeneratedTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

-(id)createInstance
{
	return [[TRPaddingRangeCalculator alloc] init];
}

- (void) testInitializeFieldRangeCalculator
{
	TRPaddingRangeCalculator * instance = [self createInstance];
	if(instance) {
		id<TRRangeCalculator> expected = nil;
		id<TRRangeCalculator> actual = [instance rangeCalculator];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldPadding
{
	TRPaddingRangeCalculator * instance = [self createInstance];
	if(instance) {
		TRRange * expected = [TRRange min:0.0 max:0.0];
		TRRange * actual = [instance padding];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldRangeCalculator
{
	TRPaddingRangeCalculator * instance = [self createInstance];
	if(instance) {
		id<TRRangeCalculator> original = [instance rangeCalculator];
		id<TRRangeCalculator> expected = TRChartsObjc::getRangeCalculatorTestValue(original);
		[instance setRangeCalculator:expected];
		id<TRRangeCalculator> actual = [instance rangeCalculator];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldPadding
{
	TRPaddingRangeCalculator * instance = [self createInstance];
	if(instance) {
		TRRange * original = [instance padding];
		TRRange * expected = TRChartsObjc::getRangeTestValue(original);
		[instance setPadding:expected];
		TRRange * actual = [instance padding];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end