/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace titanium {
			namespace android {
			namespace calendar {


class CalendarProxy : public titanium::Proxy
{
public:
	explicit CalendarProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> getEventsInYear(const v8::Arguments&);
	static v8::Handle<v8::Value> getEventsBetweenDates(const v8::Arguments&);
	static v8::Handle<v8::Value> createEvent(const v8::Arguments&);
	static v8::Handle<v8::Value> getEventById(const v8::Arguments&);
	static v8::Handle<v8::Value> getHidden(const v8::Arguments&);
	static v8::Handle<v8::Value> getName(const v8::Arguments&);
	static v8::Handle<v8::Value> getSelected(const v8::Arguments&);
	static v8::Handle<v8::Value> getEventsInDate(const v8::Arguments&);
	static v8::Handle<v8::Value> getEventsInMonth(const v8::Arguments&);
	static v8::Handle<v8::Value> getId(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_id(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_selected(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_hidden(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_name(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

			} // namespace calendar
			} // namespace android
		} // titanium
