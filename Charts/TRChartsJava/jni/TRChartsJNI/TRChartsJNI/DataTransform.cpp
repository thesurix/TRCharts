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

#include <TRChartsJNI/DataTransform.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/DataTransform.hpp>

using namespace TRChartsJNI;

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeConcatenate(JNIEnv * env, jclass cls, jobject dataTransform, jobject otherDataTransform)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getDataTransformMarshaller().unmarshall(env, Charts::DataTransform::concatenate(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform), TRChartsJNI::getDataTransformMarshaller().marshall(env, otherDataTransform)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeInvert(JNIEnv * env, jclass cls, jobject dataTransform)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getDataTransformMarshaller().unmarshall(env, Charts::DataTransform::invert(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeApply(JNIEnv * env, jclass cls, jobject dataTransform, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, Charts::DataTransform::apply(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform), TRChartsJNI::getNumberMarshaller().marshall(env, value)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeApplyRange(JNIEnv * env, jclass cls, jobject dataTransform, jobject range)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, Charts::DataTransform::applyRange(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform), TRChartsJNI::getRangeMarshaller().marshall(env, range)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeUnapply(JNIEnv * env, jclass cls, jobject dataTransform, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, Charts::DataTransform::unapply(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform), TRChartsJNI::getNumberMarshaller().marshall(env, value)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_DataTransform_nativeUnapplyRange(JNIEnv * env, jclass cls, jobject dataTransform, jobject range)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, Charts::DataTransform::unapplyRange(TRChartsJNI::getDataTransformMarshaller().marshall(env, dataTransform), TRChartsJNI::getRangeMarshaller().marshall(env, range)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

