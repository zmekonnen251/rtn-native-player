
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleJavaSpec.js
 *
 * @nolint
 */

package com.facebook.fbreact.specs;

import com.facebook.proguard.annotations.DoNotStrip;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;

public abstract class NativeGoogleMobileAdsModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
  public static final String NAME = "RNGoogleMobileAdsModule";

  public NativeGoogleMobileAdsModuleSpec(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  public @Nonnull String getName() {
    return NAME;
  }

  @ReactMethod
  @DoNotStrip
  public abstract void initialize(Promise promise);

  @ReactMethod
  @DoNotStrip
  public abstract void setRequestConfiguration(@Nullable ReadableMap requestConfiguration, Promise promise);

  @ReactMethod
  @DoNotStrip
  public abstract void openAdInspector(Promise promise);

  @ReactMethod
  @DoNotStrip
  public abstract void openDebugMenu(String adUnit);
}
