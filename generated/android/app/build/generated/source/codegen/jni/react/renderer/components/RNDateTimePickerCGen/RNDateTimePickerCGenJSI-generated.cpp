/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleCpp.js
 */

#include "RNDateTimePickerCGenJSI.h"

namespace facebook::react {

static jsi::Value __hostFunction_NativeModuleDatePickerCxxSpecJSI_dismiss(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeModuleDatePickerCxxSpecJSI *>(&turboModule)->dismiss(
    rt
  );
}
static jsi::Value __hostFunction_NativeModuleDatePickerCxxSpecJSI_open(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeModuleDatePickerCxxSpecJSI *>(&turboModule)->open(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt)
  );
}

NativeModuleDatePickerCxxSpecJSI::NativeModuleDatePickerCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNCDatePicker", jsInvoker) {
  methodMap_["dismiss"] = MethodMetadata {0, __hostFunction_NativeModuleDatePickerCxxSpecJSI_dismiss};
  methodMap_["open"] = MethodMetadata {1, __hostFunction_NativeModuleDatePickerCxxSpecJSI_open};
}
static jsi::Value __hostFunction_NativeModuleTimePickerCxxSpecJSI_dismiss(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeModuleTimePickerCxxSpecJSI *>(&turboModule)->dismiss(
    rt
  );
}
static jsi::Value __hostFunction_NativeModuleTimePickerCxxSpecJSI_open(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeModuleTimePickerCxxSpecJSI *>(&turboModule)->open(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt)
  );
}

NativeModuleTimePickerCxxSpecJSI::NativeModuleTimePickerCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNCTimePicker", jsInvoker) {
  methodMap_["dismiss"] = MethodMetadata {0, __hostFunction_NativeModuleTimePickerCxxSpecJSI_dismiss};
  methodMap_["open"] = MethodMetadata {1, __hostFunction_NativeModuleTimePickerCxxSpecJSI_open};
}


} // namespace facebook::react
