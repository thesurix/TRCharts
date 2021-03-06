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

#include <TRChartsJNI/PerUnitDateFormatter.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/PerUnitDateFormatter.hpp>

using namespace TRChartsJNI;

JNIEXPORT jlong JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeCreate(JNIEnv *env, jobject obj)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		Charts::PerUnitDateFormatter * const nativeObject = new Charts::PerUnitDateFormatter();
		Handle * const handle = new Handle(env, nativeObject, obj);
		nativeObject->setHandle(handle);
		return reinterpret_cast<jlong>(handle);
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeDestroy(JNIEnv *env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		delete handle;
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}


JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeSetUnitFormat(JNIEnv * env, jobject obj, jlong ptr, jobject unit, jstring format)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::PerUnitDateFormatter>(env)->setUnitFormat(TRChartsJNI::getDateUnitMarshaller().marshall(env, unit), TRChartsJNI::getStringMarshaller().marshall(env, format));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jstring JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeGetUnitFormat(JNIEnv * env, jobject obj, jlong ptr, jobject unit)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getStringMarshaller().unmarshall(env, handle->getNativeObject<Charts::PerUnitDateFormatter>(env)->getUnitFormat(TRChartsJNI::getDateUnitMarshaller().marshall(env, unit)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeSetZeroUnitFormat(JNIEnv * env, jobject obj, jlong ptr, jobject unit, jstring format)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::PerUnitDateFormatter>(env)->setZeroUnitFormat(TRChartsJNI::getDateUnitMarshaller().marshall(env, unit), TRChartsJNI::getStringMarshaller().marshall(env, format));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jstring JNICALL Java_com_thomsonreuters_corptech_charts_PerUnitDateFormatter_nativeGetZeroUnitFormat(JNIEnv * env, jobject obj, jlong ptr, jobject unit)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getStringMarshaller().unmarshall(env, handle->getNativeObject<Charts::PerUnitDateFormatter>(env)->getZeroUnitFormat(TRChartsJNI::getDateUnitMarshaller().marshall(env, unit)));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

