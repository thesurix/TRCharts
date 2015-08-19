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

#import <TRCodegenSupportObjc/BaseObject.h>

/**
 * Base class for all objects that can be attached to each other (eg a series
 * can be attached to a chart)
 *
 * Each attachable object may be attached to at most one other object, the
 * relationship is conceptually such that a child object is aware that it is
 * attached to a parent object. The management of the relationship happens at
 * the native layer, and due to some implementation-specific weirdness around
 * the joining of host ref-counting/gc with native memory management, it is not
 * possible to safely retrieve the reference to the parent from the child.
 *
 * It is an error to attempt to attach one object to multiple parents. This
 * error may occur when (for example) a series is added to two charts. The error
 * is realised as a host-language exception (exception type not specified).
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRAttachable : TRBaseObject

/** @name Fields */

/**
 * True if this object is attached to a aprent
 *
 * @return The current attachment state.
 */
-(BOOL)attached;

/**
 * If true, this object should have no effect on its parent (visual or
 * otherwise)
 *
 * @return The current enabled flag.
 * @see setEnabled:
 */
-(BOOL)enabled;

/**
 * If true, this object should have no effect on its parent (visual or
 * otherwise)
 *
 * @param value The new enabled flag.
 * @see enabled
 */
-(void)setEnabled:(BOOL)value;

@end