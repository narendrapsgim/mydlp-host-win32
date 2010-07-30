/* 
 *  Copyright (C) 2010 Medra Teknoloji
 *
 *  Authors: Burak OGUZ <burak@medra.com.tr>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */
#pragma once
#pragma managed 

#ifndef __MYDLP_REM_DEV_CONF__
#define __MYDLP_REM_DEV_CONF__

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>

using namespace System;
using namespace System::Xml;
using namespace System::Xml::Schema;
using namespace System::Xml::Serialization;
using namespace System::IO;

namespace mydlpsf {
	public ref class MyDLPRemoteDeviceConf
	{
	private:
		static MyDLPRemoteDeviceConf ^deviceConf;
		static void SetInstance(MyDLPRemoteDeviceConf ^deviceConf);
		MyDLPRemoteDeviceConf(void);

	public:		
		static MyDLPRemoteDeviceConf ^GetInstance();
		static void Serialize();
		static void Deserialize();
		
		System::Collections::Generic::List<String^> ^excludedDirs;
		Boolean enableRemovableOnlineScanning;
		String ^enableRemovableOnlineScanning_ruleid;
		Boolean justLogRemovableOnlineScanning;
		String ^justLogRemovableOnlineScanning_ruleid;
		Boolean scanPluggedInRemovableDevices;
		String ^scanPluggedInRemovableDevices_ruleid;
		Boolean scanInsertedLogical;
		String ^scanInsertedLogical_ruleid;

		Boolean filterPSD;
		String ^filterPSD_ruleid;
		Boolean filterPSP;
		String ^filterPSP_ruleid;
		Boolean filterCDR;
		String ^filterCDR_ruleid;
		Boolean filterDWG;
		String ^filterDWG_ruleid;

		static const String ^confFileName = "device.conf";
	};
}

#endif