/**
* This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
*
* Do not edit this file as changes may cause incorrect behavior and will be lost
* once the code is regenerated.
*
* @generated by codegen project: GeneratePropsJavaDelegate.js
*/

package com.facebook.react.viewmanagers;

import android.view.View;
import androidx.annotation.Nullable;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.BaseViewManagerInterface;

public class RNSVGSvgViewAndroidManagerDelegate<T extends View, U extends BaseViewManagerInterface<T> & RNSVGSvgViewAndroidManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
  public RNSVGSvgViewAndroidManagerDelegate(U viewManager) {
    super(viewManager);
  }
  @Override
  public void setProperty(T view, String propName, @Nullable Object value) {
    switch (propName) {
      case "bbWidth":
        mViewManager.setBbWidth(view, new DynamicFromObject(value));
        break;
      case "bbHeight":
        mViewManager.setBbHeight(view, new DynamicFromObject(value));
        break;
      case "minX":
        mViewManager.setMinX(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "minY":
        mViewManager.setMinY(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "vbWidth":
        mViewManager.setVbWidth(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "vbHeight":
        mViewManager.setVbHeight(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "align":
        mViewManager.setAlign(view, value == null ? null : (String) value);
        break;
      case "meetOrSlice":
        mViewManager.setMeetOrSlice(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "tintColor":
        mViewManager.setTintColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "color":
        mViewManager.setColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "pointerEvents":
        mViewManager.setPointerEvents(view, value == null ? null : (String) value);
        break;
      case "hasTVPreferredFocus":
        mViewManager.setHasTVPreferredFocus(view, value == null ? false : (boolean) value);
        break;
      case "borderTopEndRadius":
        mViewManager.setBorderTopEndRadius(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "borderBottomStartRadius":
        mViewManager.setBorderBottomStartRadius(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "borderBottomColor":
        mViewManager.setBorderBottomColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "nextFocusDown":
        mViewManager.setNextFocusDown(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "borderRightColor":
        mViewManager.setBorderRightColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "nextFocusRight":
        mViewManager.setNextFocusRight(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "borderLeftColor":
        mViewManager.setBorderLeftColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "borderColor":
        mViewManager.setBorderColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "removeClippedSubviews":
        mViewManager.setRemoveClippedSubviews(view, value == null ? false : (boolean) value);
        break;
      case "nextFocusForward":
        mViewManager.setNextFocusForward(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "nextFocusUp":
        mViewManager.setNextFocusUp(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "accessible":
        mViewManager.setAccessible(view, value == null ? false : (boolean) value);
        break;
      case "borderStartColor":
        mViewManager.setBorderStartColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "borderBottomEndRadius":
        mViewManager.setBorderBottomEndRadius(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "borderEndColor":
        mViewManager.setBorderEndColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "focusable":
        mViewManager.setFocusable(view, value == null ? false : (boolean) value);
        break;
      case "nativeBackgroundAndroid":
        mViewManager.setNativeBackgroundAndroid(view, (ReadableMap) value);
        break;
      case "borderTopStartRadius":
        mViewManager.setBorderTopStartRadius(view, value == null ? 0f : ((Double) value).floatValue());
        break;
      case "nativeForegroundAndroid":
        mViewManager.setNativeForegroundAndroid(view, (ReadableMap) value);
        break;
      case "backfaceVisibility":
        mViewManager.setBackfaceVisibility(view, value == null ? null : (String) value);
        break;
      case "borderStyle":
        mViewManager.setBorderStyle(view, value == null ? null : (String) value);
        break;
      case "needsOffscreenAlphaCompositing":
        mViewManager.setNeedsOffscreenAlphaCompositing(view, value == null ? false : (boolean) value);
        break;
      case "hitSlop":
        mViewManager.setHitSlop(view, (ReadableMap) value);
        break;
      case "borderTopColor":
        mViewManager.setBorderTopColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "nextFocusLeft":
        mViewManager.setNextFocusLeft(view, value == null ? 0 : ((Double) value).intValue());
        break;
      case "borderTopRightRadius":
        mViewManager.setBorderTopRightRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderBottomRightRadius":
        mViewManager.setBorderBottomRightRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderRadius":
        mViewManager.setBorderRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderBottomLeftRadius":
        mViewManager.setBorderBottomLeftRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderTopLeftRadius":
        mViewManager.setBorderTopLeftRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderBlockColor":
        mViewManager.setBorderBlockColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "borderBlockEndColor":
        mViewManager.setBorderBlockEndColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "borderBlockStartColor":
        mViewManager.setBorderBlockStartColor(view, ColorPropConverter.getColor(value, view.getContext()));
        break;
      case "borderEndEndRadius":
        mViewManager.setBorderEndEndRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderEndStartRadius":
        mViewManager.setBorderEndStartRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderStartEndRadius":
        mViewManager.setBorderStartEndRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      case "borderStartStartRadius":
        mViewManager.setBorderStartStartRadius(view, value == null ? 0f : ((Double) value).doubleValue());
        break;
      default:
        super.setProperty(view, propName, value);
    }
  }
}
