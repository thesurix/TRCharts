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

#import "FixedRangeCalculatorGeneratedTests.h"
#import <TRChartsObjc/FixedRangeCalculator.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRFixedRangeCalculatorGeneratedTests

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
	return [[TRFixedRangeCalculator alloc] init];
}

- (void) testInitializeFieldRange
{
	TRFixedRangeCalculator * instance = [self createInstance];
	if(instance) {
		TRRange * expected = [TRRange min:0.0 max:0.0];
		TRRange * actual = [instance range];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldRange
{
	TRFixedRangeCalculator * instance = [self createInstance];
	if(instance) {
		TRRange * original = [instance range];
		TRRange * expected = TRChartsObjc::getRangeTestValue(original);
		[instance setRange:expected];
		TRRange * actual = [instance range];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
