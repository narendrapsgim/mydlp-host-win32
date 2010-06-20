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
#ifndef __MYDLP_EVENT_LOGGER__
#define __MYDLP_EVENT_LOGGER__

#pragma once
#pragma managed

using namespace System;

namespace mydlpsf
{
	public ref class MyDLPEventLogger
	{
	private:
		static MyDLPEventLogger ^eventLogger;
		System::Diagnostics::EventLog ^eventLogDevice;
		System::Diagnostics::EventLog ^eventLogSensFile;
		System::Threading::Mutex ^sensFileMutex;
		System::Threading::Mutex ^deviceMutex;
		MyDLPEventLogger(void);

	public:
		static MyDLPEventLogger ^GetInstance();
		void LogSensFile(String ^log);
		void LogDevice(String ^log);
		void LogLib(String ^log);
		
	};
}

#endif