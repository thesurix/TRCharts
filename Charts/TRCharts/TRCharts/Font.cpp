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

#include <TRCharts/Font.hpp>
#include <TRCharts/Font.hpp>


Charts::GeneratedFont::GeneratedFont(void)
	:name(""), size(0L), hint(Charts::FontHint())
{
}


Charts::GeneratedFont::GeneratedFont(const std::string & name, long size, Charts::FontHint hint)
	:name(name), size(size), hint(hint)
{
}


bool Charts::GeneratedFont::operator==(const GeneratedFont & other) const
{
	bool result = true;
	result = result && (this->name == other.name);
	result = result && (this->size == other.size);
	result = result && (this->hint == other.hint);
	return result;
}


bool Charts::GeneratedFont::operator!=(const GeneratedFont & other) const
{
	return !(*this == other);
}


std::ostream & Charts::operator<<(std::ostream & to, const GeneratedFont & from)
{
	to << "Font[";
	to << "name: " << from.name << ", ";
	to << "size: " << from.size << ", ";
	to << "hint: " << from.hint;
	to << "]";
	return to;
}