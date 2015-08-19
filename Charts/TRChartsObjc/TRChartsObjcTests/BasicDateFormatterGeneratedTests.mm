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

#import "BasicDateFormatterGeneratedTests.h"
#import <TRChartsObjc/BasicDateFormatter.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRBasicDateFormatterGeneratedTests

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
	return [[TRBasicDateFormatter alloc] init];
}

- (void) testInitializeFieldFormat
{
	TRBasicDateFormatter * instance = [self createInstance];
	if(instance) {
		NSString * expected = @"";
		NSString * actual = [instance format];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldFormat
{
	TRBasicDateFormatter * instance = [self createInstance];
	if(instance) {
		NSString * original = [instance format];
		NSString * expected = TRChartsObjc::getStringTestValue(original);
		[instance setFormat:expected];
		NSString * actual = [instance format];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end