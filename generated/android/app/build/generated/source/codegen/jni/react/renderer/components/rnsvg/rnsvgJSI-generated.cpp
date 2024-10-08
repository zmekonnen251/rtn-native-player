/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleCpp.js
 */

#include "rnsvgJSI.h"

namespace facebook::react {

static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_isPointInFill(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->isPointInFill(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber()),
    count <= 1 || args[1].isUndefined() ? std::nullopt : std::make_optional(args[1].asObject(rt))
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_isPointInStroke(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->isPointInStroke(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber()),
    count <= 1 || args[1].isUndefined() ? std::nullopt : std::make_optional(args[1].asObject(rt))
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getTotalLength(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getTotalLength(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber())
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getPointAtLength(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getPointAtLength(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber()),
    count <= 1 || args[1].isUndefined() ? std::nullopt : std::make_optional(args[1].asObject(rt))
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getBBox(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getBBox(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber()),
    count <= 1 || args[1].isUndefined() ? std::nullopt : std::make_optional(args[1].asObject(rt))
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getCTM(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getCTM(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber())
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getScreenCTM(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getScreenCTM(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber())
  );
}
static jsi::Value __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getRawResource(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeSvgRenderableModuleCxxSpecJSI *>(&turboModule)->getRawResource(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}

NativeSvgRenderableModuleCxxSpecJSI::NativeSvgRenderableModuleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNSVGRenderableModule", jsInvoker) {
  methodMap_["isPointInFill"] = MethodMetadata {2, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_isPointInFill};
  methodMap_["isPointInStroke"] = MethodMetadata {2, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_isPointInStroke};
  methodMap_["getTotalLength"] = MethodMetadata {1, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getTotalLength};
  methodMap_["getPointAtLength"] = MethodMetadata {2, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getPointAtLength};
  methodMap_["getBBox"] = MethodMetadata {2, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getBBox};
  methodMap_["getCTM"] = MethodMetadata {1, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getCTM};
  methodMap_["getScreenCTM"] = MethodMetadata {1, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getScreenCTM};
  methodMap_["getRawResource"] = MethodMetadata {1, __hostFunction_NativeSvgRenderableModuleCxxSpecJSI_getRawResource};
}
static jsi::Value __hostFunction_NativeSvgViewModuleCxxSpecJSI_toDataURL(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeSvgViewModuleCxxSpecJSI *>(&turboModule)->toDataURL(
    rt,
    count <= 0 || args[0].isNull() || args[0].isUndefined() ? std::nullopt : std::make_optional(args[0].asNumber()),
    count <= 1 || args[1].isUndefined() ? std::nullopt : std::make_optional(args[1].asObject(rt)),
    count <= 2 || args[2].isUndefined() ? std::nullopt : std::make_optional(args[2].asObject(rt).asFunction(rt))
  );
  return jsi::Value::undefined();
}

NativeSvgViewModuleCxxSpecJSI::NativeSvgViewModuleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNSVGSvgViewModule", jsInvoker) {
  methodMap_["toDataURL"] = MethodMetadata {3, __hostFunction_NativeSvgViewModuleCxxSpecJSI_toDataURL};
}


} // namespace facebook::react
