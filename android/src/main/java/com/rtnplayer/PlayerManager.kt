package com.rtnplayer

import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.uimanager.SimpleViewManager
import com.facebook.react.uimanager.ThemedReactContext
import com.facebook.react.uimanager.annotations.ReactProp
import com.facebook.react.uimanager.ViewManagerDelegate
import com.facebook.react.viewmanagers.RTNPlayerManagerDelegate
import com.facebook.react.viewmanagers.RTNPlayerManagerInterface

class PlayerManager(
  private val context: ReactApplicationContext
): SimpleViewManager<Player>() , RTNPlayerManagerInterface<Player> {
  private val mDelegate: ViewManagerDelegate<Player>

  init {
    mDelegate = RTNPlayerManagerDelegate(this)
  }

  override fun getDelegate(): ViewManagerDelegate<Player> {
    return mDelegate
  }

  override fun getName(): String {
    return NAME
  }

  companion object {
    const val NAME = "RTNPlayer"
  }


  override fun createViewInstance(reactContext: ThemedReactContext): Player {
    return Player(reactContext, context.currentActivity!!)
  }
  
  @ReactProp(name = "url")
  override fun setUrl(view: Player, url: String) {
    view.setUpPlayer(url)
  }
}