// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegCurvetoQuadraticRel.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8SVGPathSegCurvetoQuadraticRel::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegCurvetoQuadraticRel::domTemplate, V8SVGPathSegCurvetoQuadraticRel::refObject, V8SVGPathSegCurvetoQuadraticRel::derefObject, V8SVGPathSegCurvetoQuadraticRel::trace, 0, 0, V8SVGPathSegCurvetoQuadraticRel::preparePrototypeObject, V8SVGPathSegCurvetoQuadraticRel::installConditionallyEnabledProperties, "SVGPathSegCurvetoQuadraticRel", &V8SVGPathSeg::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPathSegCurvetoQuadraticRel.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPathSegCurvetoQuadraticRel::s_wrapperTypeInfo = V8SVGPathSegCurvetoQuadraticRel::wrapperTypeInfo;

namespace SVGPathSegCurvetoQuadraticRelV8Internal {

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    v8SetReturnValue(info, impl->x());
}

static void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void xAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "x", "SVGPathSegCurvetoQuadraticRel", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setX(cppValue);
}

static void xAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::xAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void yAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "y", "SVGPathSegCurvetoQuadraticRel", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setY(cppValue);
}

static void yAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::yAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void x1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    v8SetReturnValue(info, impl->x1());
}

static void x1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::x1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void x1AttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "x1", "SVGPathSegCurvetoQuadraticRel", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setX1(cppValue);
}

static void x1AttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::x1AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void y1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    v8SetReturnValue(info, impl->y1());
}

static void y1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::y1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void y1AttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "y1", "SVGPathSegCurvetoQuadraticRel", holder, info.GetIsolate());
    SVGPathSegCurvetoQuadraticRel* impl = V8SVGPathSegCurvetoQuadraticRel::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setY1(cppValue);
}

static void y1AttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    SVGPathSegCurvetoQuadraticRelV8Internal::y1AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPathSegCurvetoQuadraticRelV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8SVGPathSegCurvetoQuadraticRelAccessors[] = {
    {"x", SVGPathSegCurvetoQuadraticRelV8Internal::xAttributeGetterCallback, SVGPathSegCurvetoQuadraticRelV8Internal::xAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y", SVGPathSegCurvetoQuadraticRelV8Internal::yAttributeGetterCallback, SVGPathSegCurvetoQuadraticRelV8Internal::yAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"x1", SVGPathSegCurvetoQuadraticRelV8Internal::x1AttributeGetterCallback, SVGPathSegCurvetoQuadraticRelV8Internal::x1AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"y1", SVGPathSegCurvetoQuadraticRelV8Internal::y1AttributeGetterCallback, SVGPathSegCurvetoQuadraticRelV8Internal::y1AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8SVGPathSegCurvetoQuadraticRelTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegCurvetoQuadraticRel", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegCurvetoQuadraticRel::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegCurvetoQuadraticRel", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegCurvetoQuadraticRel::internalFieldCount,
            0, 0,
            V8SVGPathSegCurvetoQuadraticRelAccessors, WTF_ARRAY_LENGTH(V8SVGPathSegCurvetoQuadraticRelAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGPathSegCurvetoQuadraticRel::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPathSegCurvetoQuadraticRelTemplate);
}

bool V8SVGPathSegCurvetoQuadraticRel::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPathSegCurvetoQuadraticRel::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegCurvetoQuadraticRel* V8SVGPathSegCurvetoQuadraticRel::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPathSegCurvetoQuadraticRel::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegCurvetoQuadraticRel>()->ref();
#endif
}

void V8SVGPathSegCurvetoQuadraticRel::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegCurvetoQuadraticRel>()->deref();
#endif
}

} // namespace blink
