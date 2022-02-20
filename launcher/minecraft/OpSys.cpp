/* Copyright 2013-2021 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "OpSys.h"

OpSys OpSys_fromString(QString name)
{
    if (name == "freebsd")
        return Os_FreeBSD;
    if (name == "linux")
        return Os_Linux;
    if (name == "linux-arm64")
        return Os_Linux_arm64;
    if (name == "linux-arm32")
        return Os_Linux_arm32;
    if (name == "windows")
        return Os_Windows;
    if (name == "windows-arm64")
        return Os_Windows_arm64;
    if (name == "osx")
        return Os_OSX;
    if (name == "osx-arm64")
        return Os_OSX_arm64;
    return Os_Other;
}

QString OpSys_toString(OpSys name)
{
    switch (name)
    {
    case Os_FreeBSD:
	return "freebsd";
    case Os_Linux:
        return "linux";
    case Os_Linux_arm64:
        return "linux-arm64";
    case Os_Linux_arm32:
        return "linux-arm32";
    case Os_OSX:
        return "osx";
    case Os_OSX_arm64:
        return "osx-arm64";
    case Os_Windows:
        return "windows";
    case Os_Windows_arm64:
        return "windows-arm64";
    default:
        return "other";
    }
}