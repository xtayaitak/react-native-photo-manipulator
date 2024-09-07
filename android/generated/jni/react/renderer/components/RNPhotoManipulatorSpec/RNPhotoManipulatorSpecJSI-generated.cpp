/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleCpp.js
 */

#include "RNPhotoManipulatorSpecJSI.h"

namespace facebook::react {

static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_batch(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->batch(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asArray(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asObject(rt),
    count <= 3 || args[3].isUndefined() ? std::nullopt : std::make_optional(args[3].asObject(rt)),
    count <= 4 || args[4].isUndefined() ? std::nullopt : std::make_optional(args[4].asNumber()),
    count <= 5 || args[5].isUndefined() ? std::nullopt : std::make_optional(args[5].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_crop(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->crop(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt),
    count <= 2 || args[2].isUndefined() ? std::nullopt : std::make_optional(args[2].asObject(rt)),
    count <= 3 || args[3].isUndefined() ? std::nullopt : std::make_optional(args[3].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_flipImage(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->flipImage(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 || args[2].isUndefined() ? std::nullopt : std::make_optional(args[2].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_rotateImage(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->rotateImage(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 || args[2].isUndefined() ? std::nullopt : std::make_optional(args[2].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_overlayImage(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->overlayImage(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asObject(rt),
    count <= 3 || args[3].isUndefined() ? std::nullopt : std::make_optional(args[3].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_printText(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->printText(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt).asArray(rt),
    count <= 2 || args[2].isUndefined() ? std::nullopt : std::make_optional(args[2].asString(rt))
  );
}
static jsi::Value __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_optimize(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeRNPhotoManipulatorCxxSpecJSI *>(&turboModule)->optimize(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asNumber()
  );
}

NativeRNPhotoManipulatorCxxSpecJSI::NativeRNPhotoManipulatorCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RNPhotoManipulator", jsInvoker) {
  methodMap_["batch"] = MethodMetadata {6, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_batch};
  methodMap_["crop"] = MethodMetadata {4, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_crop};
  methodMap_["flipImage"] = MethodMetadata {3, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_flipImage};
  methodMap_["rotateImage"] = MethodMetadata {3, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_rotateImage};
  methodMap_["overlayImage"] = MethodMetadata {4, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_overlayImage};
  methodMap_["printText"] = MethodMetadata {3, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_printText};
  methodMap_["optimize"] = MethodMetadata {2, __hostFunction_NativeRNPhotoManipulatorCxxSpecJSI_optimize};
}


} // namespace facebook::react
