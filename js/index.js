import { NativeModules, requireNativeComponent } from 'react-native';

const { RTNPlayerModule } = NativeModules;

const RTNPlayer = requireNativeComponent('RTNPlayer');

export default RTNPlayer;

// These methods will call the native module methods
export const setUpPlayer = (url) => {
  RTNPlayerModule.setUpPlayer(url);
};

export const releasePlayer = () => {
  RTNPlayerModule.releasePlayer();
};
