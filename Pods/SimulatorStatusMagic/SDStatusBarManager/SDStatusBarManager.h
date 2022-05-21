
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SDStatusBarManagerBluetoothState)
{
  SDStatusBarManagerBluetoothHidden = 0,
  SDStatusBarManagerBluetoothVisibleDimmed,
  SDStatusBarManagerBluetoothVisibleConnected
};

typedef NS_ENUM(NSInteger, SDStatusBarManagerNetworkType)
{
  SDStatusBarManagerNetworkTypeWiFi = 0,
  SDStatusBarManagerNetworkTypeGPRS,
  SDStatusBarManagerNetworkTypeEdge,
  SDStatusBarManagerNetworkType3G,
  SDStatusBarManagerNetworkType4G,
  SDStatusBarManagerNetworkTypeLTE
};

@interface SDStatusBarManager : NSObject

@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *timeString;
@property (assign, nonatomic, readonly) BOOL usingOverrides;
@property (assign, nonatomic) SDStatusBarManagerBluetoothState bluetoothState;
@property (assign, nonatomic) SDStatusBarManagerNetworkType networkType;
@property (assign, nonatomic) BOOL batteryDetailEnabled;

- (void)enableOverrides;
- (void)disableOverrides;

+ (SDStatusBarManager *)sharedInstance;

@end
