// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8RefCountedScriptWrappable.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8RefCountedScriptWrappable::wrapperTypeInfo = { gin::kEmbedderBlink, V8RefCountedScriptWrappable::domTemplate, V8RefCountedScriptWrappable::refObject, V8RefCountedScriptWrappable::derefObject, V8RefCountedScriptWrappable::trace, 0, 0, V8RefCountedScriptWrappable::preparePrototypeObject, V8RefCountedScriptWrappable::installConditionallyEnabledProperties, "RefCountedScriptWrappable", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RefCountedScriptWrappable.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& RefCountedScriptWrappable::s_wrapperTypeInfo = V8RefCountedScriptWrappable::wrapperTypeInfo;

namespace RefCountedScriptWrappableV8Internal {

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    RefCountedScriptWrappable* impl = V8RefCountedScriptWrappable::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RefCountedScriptWrappableV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace RefCountedScriptWrappableV8Internal

static void installV8RefCountedScriptWrappableTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "RefCountedScriptWrappable", v8::Local<v8::FunctionTemplate>(), V8RefCountedScriptWrappable::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    const V8DOMConfiguration::MethodConfiguration toStringMethodConfiguration = {
        "toString", RefCountedScriptWrappableV8Internal::toStringMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), toStringMethodConfiguration);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8RefCountedScriptWrappable::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RefCountedScriptWrappableTemplate);
}

bool V8RefCountedScriptWrappable::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RefCountedScriptWrappable::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RefCountedScriptWrappable* V8RefCountedScriptWrappable::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8RefCountedScriptWrappable::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<RefCountedScriptWrappable>()->ref();
}

void V8RefCountedScriptWrappable::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<RefCountedScriptWrappable>()->deref();
}

} // namespace blink
