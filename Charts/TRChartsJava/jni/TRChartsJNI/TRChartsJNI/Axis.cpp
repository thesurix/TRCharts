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

#include <TRChartsJNI/Axis.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/Axis.hpp>

using namespace TRChartsJNI;

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetEdge(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getEdgeMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getEdge());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetEdge(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setEdge(TRChartsJNI::getEdgeMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTitle(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getLabelMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTitle());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTitle(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTitle(TRChartsJNI::getLabelMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetAxisColor(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getColorMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getAxisColor());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetAxisColor(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setAxisColor(TRChartsJNI::getColorMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetAxisLineStyle(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getLineStyleMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getAxisLineStyle());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetAxisLineStyle(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setAxisLineStyle(TRChartsJNI::getLineStyleMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jboolean JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeIsGridVisible(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getBooleanMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->isGridVisible());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetGridVisible(JNIEnv * env, jobject obj, jlong ptr, jboolean value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setGridVisible(TRChartsJNI::getBooleanMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetGridColor(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getColorMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getGridColor());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetGridColor(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setGridColor(TRChartsJNI::getColorMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetGridLineStyle(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getLineStyleMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getGridLineStyle());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetGridLineStyle(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setGridLineStyle(TRChartsJNI::getLineStyleMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickColor(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getColorMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickColor());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickColor(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickColor(TRChartsJNI::getColorMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickLineStyle(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getLineStyleMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickLineStyle());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickLineStyle(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickLineStyle(TRChartsJNI::getLineStyleMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickOffset(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickOffset());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickOffset(JNIEnv * env, jobject obj, jlong ptr, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickOffset(TRChartsJNI::getNumberMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickSize(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickSize());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickSize(JNIEnv * env, jobject obj, jlong ptr, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickSize(TRChartsJNI::getNumberMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickLabelColor(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getColorMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickLabelColor());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickLabelColor(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickLabelColor(TRChartsJNI::getColorMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickLabelFont(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getFontMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickLabelFont());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickLabelFont(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickLabelFont(TRChartsJNI::getFontMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickLabelMaxSize(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickLabelMaxSize());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickLabelMaxSize(JNIEnv * env, jobject obj, jlong ptr, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickLabelMaxSize(TRChartsJNI::getNumberMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetTickLabelOffset(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getTickLabelOffset());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeSetTickLabelOffset(JNIEnv * env, jobject obj, jlong ptr, jdouble value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->setTickLabelOffset(TRChartsJNI::getNumberMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jdouble JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeGetScreenLength(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getNumberMarshaller().unmarshall(env, handle->getNativeObject<Charts::Axis>(env)->getScreenLength());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}


JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Axis_nativeRelayout(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::Axis>(env)->relayout();
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

