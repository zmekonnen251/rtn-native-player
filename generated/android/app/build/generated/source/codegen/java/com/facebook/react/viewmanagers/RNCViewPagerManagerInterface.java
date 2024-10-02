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

public interface RNCViewPagerManagerInterface<T extends View> {
  void setScrollEnabled(T view, boolean value);
  void setLayoutDirection(T view, @Nullable String value);
  void setInitialPage(T view, int value);
  void setOrientation(T view, @Nullable String value);
  void setOffscreenPageLimit(T view, int value);
  void setPageMargin(T view, int value);
  void setOverScrollMode(T view, @Nullable String value);
  void setOverdrag(T view, boolean value);
  void setKeyboardDismissMode(T view, @Nullable String value);
  void setUseLegacy(T view, boolean value);
  void setPage(T view, int selectedPage);
  void setPageWithoutAnimation(T view, int selectedPage);
  void setScrollEnabledImperatively(T view, boolean scrollEnabled);
}
