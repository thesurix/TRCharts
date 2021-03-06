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

#import <TRChartsObjc/Support/OHLCDatumStructMarshaller.hh>
#import <TRChartsObjc/Support/Marshallers.hh>



Charts::OHLCDatum TRChartsObjc::OHLCDatumStructMarshaller::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	TROHLCDatum * const tmp = (TROHLCDatum*)in;
	Charts::OHLCDatum out;
	out.abscissa = TRChartsObjc::getNumberMarshaller().marshall([tmp abscissa]);
	out.ordinate = TRChartsObjc::getOHLCMarshaller().marshall([tmp ordinate]);
	return out;
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::OHLCDatumStructMarshaller::unmarshall(const Charts::OHLCDatum & in) const
{
	TROHLCDatum * out = [[TROHLCDatum alloc] init];
	[out setAbscissa:TRChartsObjc::getNumberMarshaller().unmarshall(in.abscissa)];
	[out setOrdinate:TRChartsObjc::getOHLCMarshaller().unmarshall(in.ordinate)];
	return out;
}


Charts::OHLCDatum TRChartsObjc::OHLCDatumStructMarshaller::marshallBoxed(const id & in) const
{
	return marshall(in);
}


id TRChartsObjc::OHLCDatumStructMarshaller::unmarshallBoxed(const Charts::OHLCDatum & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly

void TRChartsObjc::OHLCDatumStructMarshaller::init(void) const
{
}

