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
			namespace ui {


class TabGroupProxy : public titanium::Proxy
{
public:
	explicit TabGroupProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> removeTab(const v8::Arguments&);
	static v8::Handle<v8::Value> getActiveTab(const v8::Arguments&);
	static v8::Handle<v8::Value> setTabs(const v8::Arguments&);
	static v8::Handle<v8::Value> addTab(const v8::Arguments&);
	static v8::Handle<v8::Value> setOrientationModes(const v8::Arguments&);
	static v8::Handle<v8::Value> setActiveTab(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_activeTab(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static void setter_activeTab(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::AccessorInfo& info);
	static void setter_orientationModes(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::AccessorInfo& info);

};

			} // namespace ui
		} // titanium
