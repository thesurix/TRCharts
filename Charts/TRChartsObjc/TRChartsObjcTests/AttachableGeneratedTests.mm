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

#import "AttachableGeneratedTests.h"
#import <TRChartsObjc/Attachable.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRAttachableGeneratedTests

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
	// class is abstract, tests will be run only in subclasses
	return nil;
}

- (void) testInitializeFieldAttached
{
	TRAttachable * instance = [self createInstance];
	if(instance) {
		BOOL expected = NO;
		BOOL actual = [instance attached];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testInitializeFieldEnabled
{
	TRAttachable * instance = [self createInstance];
	if(instance) {
		BOOL expected = YES;
		BOOL actual = [instance enabled];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldEnabled
{
	TRAttachable * instance = [self createInstance];
	if(instance) {
		BOOL original = [instance enabled];
		BOOL expected = TRChartsObjc::getBooleanTestValue(original);
		[instance setEnabled:expected];
		BOOL actual = [instance enabled];
		XCTAssertEqual(expected, actual);
	}
}


@end
