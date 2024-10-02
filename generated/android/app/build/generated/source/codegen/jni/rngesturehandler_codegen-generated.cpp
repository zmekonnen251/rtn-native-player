
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleJniCpp.js
 */

#include "rngesturehandler_codegen.h"

namespace facebook::react {

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_handleSetJSResponder(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "handleSetJSResponder", "(DZ)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_handleClearJSResponder(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "handleClearJSResponder", "()V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_createGestureHandler(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "createGestureHandler", "(Ljava/lang/String;DLcom/facebook/react/bridge/ReadableMap;)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_attachGestureHandler(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "attachGestureHandler", "(DDD)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_updateGestureHandler(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "updateGestureHandler", "(DLcom/facebook/react/bridge/ReadableMap;)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_dropGestureHandler(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "dropGestureHandler", "(D)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_install(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, BooleanKind, "install", "()Z", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNGestureHandlerModuleSpecJSI_flushOperations(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, VoidKind, "flushOperations", "()V", args, count, cachedMethodId);
}

NativeRNGestureHandlerModuleSpecJSI::NativeRNGestureHandlerModuleSpecJSI(const JavaTurboModule::InitParams &params)
  : JavaTurboModule(params) {
  methodMap_["handleSetJSResponder"] = MethodMetadata {2, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_handleSetJSResponder};
  methodMap_["handleClearJSResponder"] = MethodMetadata {0, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_handleClearJSResponder};
  methodMap_["createGestureHandler"] = MethodMetadata {3, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_createGestureHandler};
  methodMap_["attachGestureHandler"] = MethodMetadata {3, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_attachGestureHandler};
  methodMap_["updateGestureHandler"] = MethodMetadata {2, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_updateGestureHandler};
  methodMap_["dropGestureHandler"] = MethodMetadata {1, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_dropGestureHandler};
  methodMap_["install"] = MethodMetadata {0, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_install};
  methodMap_["flushOperations"] = MethodMetadata {0, __hostFunction_NativeRNGestureHandlerModuleSpecJSI_flushOperations};
}

std::shared_ptr<TurboModule> rngesturehandler_codegen_ModuleProvider(const std::string &moduleName, const JavaTurboModule::InitParams &params) {
  if (moduleName == "RNGestureHandlerModule") {
    return std::make_shared<NativeRNGestureHandlerModuleSpecJSI>(params);
  }
  return nullptr;
}

} // namespace facebook::react
