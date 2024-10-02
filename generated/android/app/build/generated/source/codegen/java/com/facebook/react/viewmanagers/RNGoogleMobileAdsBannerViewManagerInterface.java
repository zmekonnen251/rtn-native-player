/**
* This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
*
* Do not edit this file as changes may cause incorrect behavior and will be lost
* once the code is regenerated.
*
* @generated by codegen project: GeneratePropsJavaInterface.js
*/

package com.facebook.react.viewmanagers;

import android.view.View;
import androidx.annotation.Nullable;
import com.facebook.react.bridge.ReadableArray;

public interface RNGoogleMobileAdsBannerViewManagerInterface<T extends View> {
  void setSizes(T view, @Nullable ReadableArray value);
  void setUnitId(T view, @Nullable String value);
  void setRequest(T view, @Nullable String value);
  void setManualImpressionsEnabled(T view, boolean value);
  void recordManualImpression(T view);
  void load(T view);
}
