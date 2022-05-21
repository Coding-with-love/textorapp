
#import <Foundation/Foundation.h>

#import "SDStatusBarManager.h"

@protocol SDStatusBarOverrider <NSObject>

@property (copy, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSString* carrierName;

@property (assign, nonatomic) BOOL bluetoothEnabled;
@property (assign, nonatomic) BOOL bluetoothConnected;
@property (assign, nonatomic) BOOL batteryDetailEnabled;
@property (assign, nonatomic) SDStatusBarManagerNetworkType networkType;

- (void)enableOverrides;
- (void)disableOverrides;

@end
