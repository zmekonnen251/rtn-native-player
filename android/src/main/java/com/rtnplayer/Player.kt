package com.rtnplayer

import android.app.Activity
import android.content.Context
import android.view.View
import android.widget.LinearLayout
import androidx.core.view.WindowCompat
import androidx.core.view.WindowInsetsCompat
import androidx.core.view.WindowInsetsControllerCompat
import androidx.media3.common.MediaItem
import androidx.media3.common.util.Util
import androidx.media3.exoplayer.ExoPlayer
import androidx.media3.ui.PlayerView
import com.facebook.react.bridge.LifecycleEventListener

class Player(
  context: Context,
  private val activity: Activity
  ): LinearLayout(context), LifecycleEventListener {
    private var player: ExoPlayer? = null
    private var playWhenReady = true
    private var currentItem = 0
    private var playbackPosition = 0L
    private var playerView: PlayerView

    init {
      val layoutParams: ViewGroup.LayoutParams = ViewGroup.LayoutParams(
        ViewGroup.LayoutParams.WRAP_CONTENT,
        ViewGroup.LayoutParams.WRAP_CONTENT
      )

      setLayoutParams(layoutParams)
      playerView = PlayerView(context)
      playerView.id = View.generateViewId()
      addView(playerView)
    }

    fun setUpPlayer(url: String){
      player = ExoPlayer.Builder(context)
               .build()
               .also { player ->
                 playerView.player = player

                 val mediaItem = MediaItem.fromUri(url)
                 player?.setMediaItem(mediaItem)
                 player?.playWhenReady = playWhenReady
                 player?.seekTo(currentItem, playbackPosition)
                 player?.prepare()
               }

              hideSystemUI()
    }

    private fun hideSystemUI() {
      WindowCompat.setDecorFitsSystemWindows(activity.window, false)
      WindowInsetsControllerCompat(activity.window, playerView).let { controller ->
        controller.hide(WindowInsetsCompat.Type.systemBars())
        controller.systemBarsBehavior = WindowInsetsControllerCompat.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
      }
    }

    private fun releasePlayer() {
      player?.let { player ->
        playWhenReady = player.playWhenReady
        currentItem = player.currentWindowIndex
        playbackPosition = player.currentPosition
        player.release()
      }
      player = null
    }


    override fun onHostResume() {
      // player?.playWhenReady = playWhenReady
      hideSystemUI()
    }

    override fun onHostPause() {
      // player?.playWhenReady = false
      if (Util.SDK_INT <= 23) {
        releasePlayer()
      }
    }

    override fun onHostDestroy() {
      // releasePlayer()
      if (Util.SDK_INT > 23) {
        releasePlayer()
      }
    }

    // override fun onDetachedFromWindow() {
    //   super.onDetachedFromWindow()
    //   releasePlayer()

    //   activity?.let {
    //     it.removeLifecycleEventListener(this)
    //   }
    // }

    // override fun onAttachedToWindow() {
    //   super.onAttachedToWindow()
    //   activity?.let {
    //     it.addLifecycleEventListener(this)
    //   }
    // }
}

